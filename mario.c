#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int row = 1;
    int height;
    int space;

    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > 8);

    space = height - 1;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space--;

        for (int j = 0; j < row; j++)
        {
            printf("#");
        }
        printf("  ");

        for (int j = 0; j < row; j++)
        {
            printf("#");
        }

        printf("\n");
        row++;
    }
}
