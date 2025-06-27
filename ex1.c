/*Write a C program to rotate the last number*/
#include<stdio.h>

int scan();
int largest_10_power(int);
int l_rotate(int);

int main(){
    int result= l_rotate(scan());
    printf("%d", result);
}

int l_rotate(int num){
    int den = largest_10_power(num);
    int left= num/den;
    int right= num%den;
    int new_num = right*10 + left;
    return new_num;
}

int largest_10_power(int num){
    int den=1;
    while ((num/den)>9)
    {
        den*10;
    }
    return den;
}

int scan(){
    int num;
    scanf("%d", &num);
    return num;
}