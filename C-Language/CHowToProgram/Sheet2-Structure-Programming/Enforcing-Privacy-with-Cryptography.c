#include <stdio.h>
#define SIZE    4

int encryption (int n);
int D1, D2, D3, D4;
int digits [SIZE];

void main(void)
{
    int num;

    printf("Welcome to Enforcing Privacy with Cryptography! \n\n");

    printf("Please enter your 4-digit number: ");
    scanf("%d", &num);  // 1234

    encryption(num);

}


int encryption (int n)
{
    void swap(int *, int *);
    int dycryption (int );

    D4 = ((n % 10) + 7 ) % 10;
    D3 = (((n / 10) % 10) + 7) %10;
    D2 = (((n / 100) % 10) + 7) %10;
    D1 = (((n / 1000) % 10) + 7) %10;


    swap(&D1, &D3);
    swap(&D2, &D4);

    int N = (D1 * 1000) + (D2 * 100) + (D3 * 10) + (D4);
    printf("So the encrypted integer is: %d\n", N);

    dycryption(N);


}

void swap(int *a, int *b)
{
    int hold = *a;
    *a = *b;
    *b = hold;
}

int dycryption (int n2)
{
    D4 = n2 % 10;
    D3 = (n2 / 10) % 10;
    D2 = (n2 / 100) % 10;
    D1 = (n2 / 1000) % 10;

    swap(&D1, &D3);
    swap(&D2, &D4);

    int digits[SIZE] = {D1, D2, D3, D4};
    for (size_t i = 0; i < SIZE; ++i)
    {
        if (digits[i] >= 7)
            digits[i] = (digits[i] - 7) % 10;
        else
            digits[i] = ((digits[i] + 10) - 7) % 10;
    }

    printf("So the dencrypted integer is: ");

    for (size_t i = 0; i < SIZE; ++i)
        printf("%d", digits[i]);

}
