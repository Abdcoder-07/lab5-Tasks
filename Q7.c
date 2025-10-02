#include<stdio.h>
int main(){
    printf("Enter three numbers to find the smallest one\n");
    int num1,num2,num3;
    printf("Enter num1\n");
    scanf(" %d",&num1);
    printf("Enter num2\n");
    scanf(" %d",&num2);
    printf("Enter num3\n");
    scanf(" %d",&num3);
    num1<num2?(num1<num3?printf("%d is the smallest\n",num1):0):(num2<num3?(printf("%d is the smallest\n",num2)):printf("%d is the smallest\n",num1));
}