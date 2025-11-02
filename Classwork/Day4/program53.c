#include<stdio.h>

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0, ifrequency1 = 0, ifrequency2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            ifrequency1++;
        }
        else
        {
            ifrequency2++;
        }
    }

    printf("Number of factors are : %d\n", ifrequency1);
    
    printf("Number of non factors are : %d\n", ifrequency2);
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}