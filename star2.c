#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for(int row =num;row>=1; row--, printf("\n"))
    {
        for(int spaces=row+1; spaces<=num; spaces++){
            printf(" ");
        }
        for(int stars=1; stars<2*row; stars++){
            printf("*");
        }
    }
    for(int row=2;row<=num; row++, printf("\n"))
    {
        for(int spaces=row+1; spaces<=num; spaces++){
            printf(" ");
        }
        for(int stars=1; stars<2*row; stars++){
            printf("*");
        }
    }
}