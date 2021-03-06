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
            printf("%3d  |", copy);
            break;
        case 2: 
            printf(" %2d  |", copy);
            break;

        case 3:
            printf(" %2d |", copy);
            break;
        default: 
            printf("%d |", copy);
    }
}

int main(void)
{
    int num;

    printf("Number: ");// taking input
    scanf("%d", &num);

    printf("\n  x  |");

    int limit = (num < UPTO) ? UPTO : num;
    for (int i = 1; i <= limit - 1; i++)
        printf("  %d  |", i);
    printf("  %d  \n", UPTO);

    for (int i = 0; i < UPTO * 7; i++)
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

    for (int i = 0; i < UPTO * 7; i++)
        printf("_");

    printf("\n");
}
