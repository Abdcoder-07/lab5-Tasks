#include<stdio.h>
int main(){
    int num;
    printf("Enter a number to to check if it is even or odd\n");
    scanf(" %d",&num);
    num=num&1;
    if(num==1){
        printf("it is an odd number\n");
    } else{
        printf("it is an even number\n");
    }
}