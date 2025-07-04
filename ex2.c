/*Write a C program to check the circular prime or not*/
#include<stdio.h>
#include<math.h>

int scan();
int largest_10_power(int);
int is_prime(int);
int l_rotate(int);
int circular_prime(int);

int main(){
    int result= circular_prime(scan());
    printf(result? "Circular": "Not Circular");
}

int circular_prime(int num){
    int nod = log10(num)+1;
    for(int itr=1;itr<=num;itr++){
        if(is_prime(num)){
            num=l_rotate(num);
        }
        else{
            return 0;
        }
    }
    return 1;
}

int is_prime(int num){
    if(num<=1) return 0;
    if(num%2==0) return num==2;
    for(int itr=3; itr<=sqrt(num); itr+=2){
        if(num%itr==0){
            return 0;
        }
    }
    return 1;
}

int l_rotate(int num){
    int den = largest_10_power(num);
    int left= num/den;
    int right= num%den;
    int new_num = right *10 + left;
    return new_num;
}

int largest_10_power(int num){
    int den=1;
    while ((num/den)>9)
    {
        den *=10;
    }
    return den;
}

int scan(){
    int num;
    scanf("%d", &num);
    return num;
}