#include <stdio.h>

int main(int argc, char** argv)
{
    int arr[5][5] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 } };
    int total = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            total += arr[i][j];
        }
    }

    printf("%d", total);
}