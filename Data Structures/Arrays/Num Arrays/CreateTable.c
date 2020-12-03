#include <stdio.h>
#define UPTO 10

void print_num(int num)
{
    int copy = num, i = 0;
    while (num)
    {
        num /= 10;
        i++;
    }

    switch(i)
    {
        case 1:
            printf("  %d  |", copy);
            break;
        case 2: 
            printf(" %d  |", copy);
            break;

        case 3:
            printf(" %d |", copy);
    }
}

int main(void)
{
    int num;

    printf("Number: ");// taking input
    scanf("%d", &num);

    printf("\n  x  |");

    for (int i = 1; i <= num - 1; i++)// printing the upper numbers n - 1 times because when last time priting number
        printf("  %d  |", i);
    printf("  %d  \n", num);

    for (int i = 0; i < num * 7; i++)
        printf("_");
    

    printf("\n\n");
    for (int i = 1; i <= num; i++)
    {
        print_num(i);
        for (int j = 1; j <= UPTO; j++)
        {
            int product = i * j;
            print_num(product);
        }
        printf("\n");
    }

    for (int i = 0; i < num * 7; i++)
        printf("_");

}