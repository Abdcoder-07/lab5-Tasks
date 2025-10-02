#include<stdio.h>
int main(){
    int choice1,choice2;
    printf("Selct a device(Note Enter Digit 1=Phone,2=Laptop)\n");
    scanf(" %d",&choice1);
    switch (choice1)
    {
    case 1:
        printf("Choose a Brand(Note Enter Digit 1=Samsung,2=Apple)\n");
        scanf(" %d",&choice2);
        switch (choice2)
        {
        case 1:
            printf("You chose a Samsung phone");
            break;
        case 2:
            printf("You chose an Apple phone");
            break;
        case 3:
            printf("You chose a Samsung phone");
            break;
        default:
            printf("You chose an Invalid brand's phone");
            break;
        }
        break;
    case 2:
        printf("Choose a Brand(Note Enter Digit 1=Dell,2=Hp)\n");
        scanf(" %d",&choice2);
        switch (choice2){
            case 1:
                printf("You chose a Dell Laptop");
                break;
            case 2:
                printf("You chose a Hp Laptop");
                break;
            default:
                printf("You chose an Invalid brand's laptop");
                break;
        }
    default:
        printf("You chose an  invalid device");
        break;
    }
}