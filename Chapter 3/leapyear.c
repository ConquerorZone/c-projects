#include<stdio.h>

int main(){
    int year;
    printf("enter any year\n");
    scanf("%d",&year);

    if (year%400==0){
        printf("the year you entered is leap year\n");
    }
    else if (year%100==0){
        printf("the year you entered is not leap year\n");
    }
    else if (year%4==0){
        printf("the year you entered is leap year\n");
    }
    else {
        printf("the year you entered is not leap year\n");
    }
        return 0;
}