#include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    printf("enter number one\n");
    scanf("%d",&num1);
    printf("enter number two\n");
    scanf("%d",&num2);
    printf("enter number three\n");
    scanf("%d",&num3);
    printf("enter number four\n");
    scanf("%d",&num4);

    if (num1>num2 && num1>num3 && num1>num4)
    
    {
    printf("%d is greatest number\n",num1);
    }
    else if (num2>num1 && num2>num3 && num2>num4)
    {
        printf("%d is greatest number\n",num2);
    }
    else if (num3>num1 && num3>num2 && num3>num4){
        printf("%d is greatest number\n",num3);
    }
    else {
        printf("%d is greatest number\n",num4);
    }
    return 0;
}