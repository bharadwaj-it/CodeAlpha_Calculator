#include<stdio.h>
int main()
{
    int a,b,c;
    printf("PERFORMING SIMPLE CALCULATOR\n");
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("List of Operations\n");
    printf("\n1.Addition\n2.Subtraction\n3.MUltiplication\n4.Division");
    printf("\nEnter your choice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:printf("Result of Addition operation: %d", a+b);
        break;
        case 2:printf("Result of Subtraction operation: %d", a-b);
        break;
        case 3:printf("Result of Multiplication operation: %d", a*b);
        break;
        case 4:
        if(b==0)
        {
         printf("Can't divide by 0");
         break;   
        }
        else
        {
         printf("Result of Division operation: %.2f", (float)a/b);
         break;
        }
        default:
        printf("Invalid input!\n");
        break;
    }
    return 0;
}