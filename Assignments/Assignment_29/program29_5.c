#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int k =0;

    for(i = 1, k = 1; i <= iRow; i++)
    {
        for(j = 1, k = i; j <= iCol; j++)
        {
            printf("%d", k);
            k++;
        }
        
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of row : ");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}