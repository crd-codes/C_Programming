#include<stdio.h>

// Dynamic function
void Display(int iFreqency)
{
    int iCnt = 0;

    //filter
    if(iFreqency < 0)
    {
        printf("Invalid input");
        return;
    }

    for(iCnt = 1; iCnt <= iFreqency; iCnt++)
    { 
        printf("Jay Ganesh...\n");
    }
}

int main( )
{
    int iCount = 0;

    printf("Enter the freqency \n");
    scanf("%d", &iCount);

    Display(iCount);  

    return 0;
}
