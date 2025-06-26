#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int start=1;
    do{
        printf("%d" , start);
        start++;
    }while (start<=num);
}