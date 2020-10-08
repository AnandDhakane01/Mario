//mario more comfortable version

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get the height from the user
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);

    //make the pyramid
    for (int i = 0; i < n; i++)
    {
        //left pyramid spaces
        for (int k = 1; k < n - i; k++)
        {
            printf(" ");
        }

        //left pyramid hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        printf("  ");

        //right pyramid hashes
        for (int m = 0; m < i + 1 ; m++)
        {
            printf("#");

        }
            
        printf("\n");
    }

    return 0;
}
