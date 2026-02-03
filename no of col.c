// Online C compiler to run C program online
#include <stdio.h>
void main()
{
    int row;
    int col;
    printf("enter no of rows:\n");
    scanf("%d",&row);
    printf("enter no of columns:\n");
    scanf("%d",&col);
    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
    {
        printf("*");
    }
    printf("\n");
    }
    }
