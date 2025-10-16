// Intput : 12  2       Output : true
// Intput : 12  3       Output : false
// Intput : 12  5       Output : false
// Intput : 12  12       Output : true
// Intput : 12  7       Output : false

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;


    printf("Enter first number : \n");
    scanf("%d",&iValue1);
    
    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1, iValue2);

    if(bRet == true)
    {
        printf("It is completely divisible\n");
    }
    else
    {
        printf("It is not completely divisible\n");
    }

    return 0;
}