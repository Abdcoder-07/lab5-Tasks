#include<stdio.h>
int main(){
    int num;
    printf("Please enter a number to check its divisiblity by 2 and 3\n");
    scanf(" %d",&num);
    if((num % 2==0) && (num % 3==0)){
        printf("Your Number is divisible by both");
    } else {
        printf("Not divisible");
    }
}