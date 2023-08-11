#include <stdio.h>
int palindromes (char []);
int str_len(char []);
void main(void)
{
    char test1 [100];

    gets(test1);
    printf("%d\n", palindromes(test1));


}

int str_len (char a[])
{
    int i = 0;
    int len = 0;
    while (a[i] != '\0'){
        ++len;
        i++;}

    return len;
}

int palindromes(char a[])
{
    int palindrome = 1 ;
    int len = str_len(a);
    int j = len - 1;

    for (int i = 0; i < len; i++)
    {
        if (a[i] != a[j]) {
          palindrome = 0;
            break;}

        if (i > j) break;
         j--;
    }
    return palindrome;
}
