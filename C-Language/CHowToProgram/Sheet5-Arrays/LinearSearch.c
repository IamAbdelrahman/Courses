#include <stdio.h>
// Searching algorithm (Linear Search).
int main(void)
{
    float data[100];
    float key;
    int size;

    printf("Please enter size < 100: ");    // Ask user to enter the size of an array
    scanf("%d", &size); // input the size

    for (int i = 0; i < size; ++i) // a loop to enter the data of the array.
    {
        printf(" value data[%d]: ", i);
        scanf("%f", &data[i]);
    }

    printf("\nPlease enter your key: ");    // ask the user to enter the item he wants to search for it
    scanf("%f", &key);  // input the key

    // Linear Search Code:

    int pos;    // a variable to indicate if we find the key or not.
    for (int i = 0; i < size; i++) // a loop to check if the key is found or not
    {
        if (data[i] == key){    // if we find the key, put its value in the pos variable and break the loop.
            pos = i;
            break; }

        else pos = -1;  // or if we could n't find the key put -1 into the variable
    }

    if (pos == -1) printf("Your key is not found in data\n");

    else printf("Your key is found at position %d", pos);

}
