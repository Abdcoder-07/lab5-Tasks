#include<stdio.h>
int main(){
    int num;
    printf("Enter a number to toggle 2nd bit of a number\n");
    scanf("%d",&num);
    num=num^2;
    printf("Your number became %d",num);
}