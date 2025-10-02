#include<stdio.h>
#include<string.h>
int main(){
    int choice1,choice2;
    printf("Selct a Continent(Note Enter Digit 1=Asia,2=Europe)\n");
    scanf(" %d",&choice1);
    switch (choice1){
    case 1:
        printf("Choose Your Country(Note Enter Digit 1=Pakistan,2=India)\n");
        scanf(" %d",&choice2);
        switch (choice2){
        case 1:
            printf("You chose Pakistan in Asia.");
            break;
        case 2:
            printf("You chose India in Asia.");
            break;
        default:
            printf("You chose an invalid country in Asia");
            break;
    }
        break;
    case 2:
        printf("Choose Your Country(Note Enter Digit 1=France,2=Germany)\n");
        scanf(" %d",&choice2);
        switch (choice2){
        case 1:
            printf("You chose France in Europe.");
            break;
        case 2:
            printf("You chose Germany in Europe.");
            break;
        default:
            printf("You chose an invalid country in Europe");
            break;
    }
    break;
    default:
        printf("You chose an invalid continent");
        break;
    }
}