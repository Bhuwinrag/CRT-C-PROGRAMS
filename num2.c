#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    for(int row=num; row>=2; row--){
        for(int spaces=row+1; spaces<=num; spaces++){
            printf(" ");
        }
        for(int col=1; col<2*row; col++){
            printf("%d ", row);
        }
        printf("\n");
    }
    for(int row=1; row<=num; row++){
        for(int spaces=row+1; spaces<=num; spaces++){
            printf(" ");
        }
        for(int col=1; col<2*row; col++){
            printf("%d ", row);
        }
        printf("\n");
}
}

    