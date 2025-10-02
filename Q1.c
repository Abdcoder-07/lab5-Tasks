#include<stdio.h>
int main(){
    int Marks;
    printf("Enter your marks\n");
    scanf(" %d",&Marks);
    if(Marks>=50){
        if (Marks>=85)
        {
            printf("Passed with distinction");
        }else{
            printf("Just Passed");
        }
        
    }
}