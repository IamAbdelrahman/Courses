/*
Author: Abdelrahman Kamal
C Language Preparation (Struct and Enums) Topic
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct tag_name
{
	int a;
	int b;
	int c;
} triangle;

/*
Description: This function is used to sort the triangles based on 
their area's values.
Input: It takes two parameters, a pointer to struct and an integer value.
Return: It returns nothing
*/
void sort_by_area (triangle* tr, int n) {
    float* area = (float*) malloc(n * sizeof(float));
    int i = 0;
    for (i = 0; i < n; i++) {
        float p = ((tr[i].a + tr[i].b + tr[i].c) / 2.0);
        double s = sqrt((double)p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
        area[i] = (float) s;
    }
    int m = 0, j = 0;
    for (m = 0; m < n; m++) {
        for (j = n - 1; j > m ; j--) {
            if (area[j - 1] > area[j]) {
                float temp = area[j - 1];
                area[j - 1] = area[j];
                area[j] = temp;

                triangle t = tr[j - 1];
                tr[j - 1] = tr[j];
                tr[j] = t;
            }
        }
        
    }
}
int main()
{
	int n;
	scanf("%d *c", &n);
	//triangle *tr = (triangle*)(n * sizeof(triangle));
    triangle *tr [n];
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d *c", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}