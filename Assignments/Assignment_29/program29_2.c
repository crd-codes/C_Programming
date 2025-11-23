#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int k = 0;
    int l = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, k = 1, l = 2; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t", k);
                k = k+2;
            }
            else
            {
                printf("%d\t", l);
                l = l+2;
            }
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