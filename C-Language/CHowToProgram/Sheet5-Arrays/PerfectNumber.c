#include <stdio.h>
int isperfect(int);
void main(void)
{
    printf("%s %13s\n", "Number", "State(1) for perfect");
    for (int i = 1; i <= 30; ++i)
    {
        printf("%d %13d\n", i, isperfect(i));
    }

}

int isperfect (int n)
{
    int perfect = 0;
    int sum = 0;
    for (int i = 1; i < n; ++i){
        sum += i;
        if (sum == n){
            perfect = 1;
            break;
            }
            }
    return perfect;
}
