#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct box
{
	int length;
	int width;
	int height;
} box ;

int get_volume(box b) {

	return b.length * b.width * b.height ;
}

int is_lower_than_max_height(box b) {
	
	if (b.height < MAX_HEIGHT)
		return 1;

	else
		return 0;
}
	

int main(void)
{	
	int n;	// Number of boxes
	int i = 0; // iteration controller
	scanf("%d", &n);
	box B [n];	
	// box *boxes = malloc(n * sizeof(box));

	for (i; i < n; ++i)
	{
		scanf("%d %d %d", &B[i].length, &B[i].width, &B[i].height);
	}

	for (int j = 0; j < n; ++j)
	{
		if (is_lower_than_max_height(B[j]))
			printf("%d\n", get_volume(B[j]));
	}

	return 0;
}