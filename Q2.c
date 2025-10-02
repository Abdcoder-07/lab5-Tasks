#include<stdio.h>
int main(){
    int Age;
    char Gender;
    printf("Enter your age please\n");
    scanf(" %d",&Age);
    printf("Enter your Gender please(M for Male,F for Female)\n");
    scanf(" %c",&Gender);
    if (Age>=18 && Gender=='M')
    { 
        printf("Adult Male");
    }else if (Age>=18 && Gender=='F')
    {
        printf("Adult Female");
    }else{
        printf("Minor");
    }
    
    
}