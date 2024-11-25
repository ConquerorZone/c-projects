#include<stdio.h>

int main(){
    int grade;
    printf("enter your marks\n");
    scanf("%d",&grade);
    switch (grade)
    {
    case 100:
    case 99:
    case 98:
    case 97:
    case 96:
    case 95:
    case 94:
    case 93:
    case 92:
    case 91:
    case 90:
        printf("you have grade A\n");
            break;
    case 8:
    printf("you have grade B\n");
            break;
    case 7:
    printf("you have grade C\n");
    break;
    case 6:
    case 5:
    case 4:
    case 3:
    printf("you have grade D\n");
    break;
    

        default:
    printf("sorry your result is fail");
        break;
    };
    return 0;
}