#include<stdio.h>
int main(){
    int num=2;
    printf("Original number is 2\n");
    printf("operation applied to demonstrate pre and post increment is num++ +num\n");
    printf("Post increment=");
    printf("%d\n",num++ +num);
    num=2;
    printf("Pre increment=");
    printf("%d",++num +num);
}