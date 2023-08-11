#include <stdio.h>
#define SIZE 99
// Prototypes
void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void mode(unsigned int freq[], unsigned const int answer[]);
void sort (unsigned int answer []);
void print_arr (unsigned int answer []);
int Max (unsigned int answer []);
int Search (unsigned int answer[], unsigned int );


void main(void)
{
    unsigned int frequency[SIZE] = {0}; // initialize array frequency
// initialize array response
    unsigned int response[SIZE] =
    {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
    7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
    6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
    7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
    6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
    7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
    5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
    7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
    7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
    4, 5, 6, 1, 6, 5, 7, 8, 7};

    // process responses
    mean(response);
    median(response);
    mode(frequency, response);

}

void mean(const unsigned int answer[])
{
    float sum = 0.0;

    for (int i = 0; i < SIZE; ++i)
        sum += answer[i];

    printf("\nMean value is = **%f**\n", sum / SIZE);
}

void median(unsigned int answer[])
{
    sort(answer);
    printf("Sorted Array:\n");
    print_arr(answer);

    printf("\nThe median is = **%d**\n", answer[SIZE / 2]);

}

void mode(unsigned int freq[], unsigned const int answer[])
{
    for (size_t j = 0; j < SIZE; ++j)
        ++freq[answer[j]];


    printf("\nThe mode occur %d times\n", Max(freq));
    int a = Max(freq);

    for (size_t k = 0; k < SIZE; ++k)
        if (freq[k] == a)
            printf("Mode is **%lu**\n", k);




}

void sort (unsigned int answer [])  // Sorting function declaration.
{
    int sorted;

    do
        {   sorted = 1;

            for (int i = 0; i < SIZE - 1; ++i)
                if (answer[i] > answer[i + 1])
                {
                    int temp = answer[i];
                    answer[i] = answer[i + 1];
                    answer[i + 1] = temp;
                    sorted = 0;
                }
        } while (sorted == 0);
}

void print_arr (unsigned int answer [])
{
    for (size_t i = 0; i < SIZE; ++i)
    {
        if (i % 20 == 0)
            puts("");

        printf("%2u", answer[i]);
    }
}

int Max (unsigned int answer [])
{
  char max = 'A';

    for (int i = 0; i < SIZE; i++)
    {
        if (max == 'A')
        {
            max = (int) max;
            max = answer[i];
        }
       if (answer[i] > max) max = answer[i];
        }

    return (int) max;
}

int Search (unsigned int freq[], unsigned int a)
{
    int key = a;
    int pos;
    size_t i;   // a variable to indicate if we find the key or not.

    for (i = 0; i < 10; i++) // a loop to check if the key is found or not
    {
        if (freq[i] == key){    // if we find the key, put its value in the pos variable and break the loop.
            pos = i;
            break; }

        else pos = -1;  // or if we could n't find the key put -1 into the variable
    }

    if (pos == -1) return i;

    else return 0;
}





