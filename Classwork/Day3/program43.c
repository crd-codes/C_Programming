// Intput : 12  2       Output : true
// Intput : 12  3       Output : false
// Intput : 12  5       Output : false
// Intput : 12  12      Output : true
// Intput : 12  7       Output : false

#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    if((iValue1 % iValue2) == 0)
    {
        printf("It is completely divisible\n");
    }
    else
    {
        printf("It is not completely divisible\n");
    }

    return 0;
}