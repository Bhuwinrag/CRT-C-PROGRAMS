#include<stdio.h>>
int main()
{
    int num;
    scanf("%d", &num);
    for(int row=1; row<=num; row++, printf("\n")){
        for(int spaces=1; spaces<row; spaces++){
            printf(" ");
        }
        for(int stars=1; stars<=row; stars++){
            printf("*");
        }
    }

}