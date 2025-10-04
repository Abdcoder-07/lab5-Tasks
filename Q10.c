#include<stdio.h>
int main(){
    int num;
    printf("Enter a number to see what left and right shift does(1 bit)\n");
    scanf(" %d",&num);
    printf("Result of right shift= %d\n",num>>1);
    printf("Result of left shift= %d",num<<1);
} 
