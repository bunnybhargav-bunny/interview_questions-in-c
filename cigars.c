#include <stdio.h>
void main ()
{
    int weekend,cigars;
    printf("enter the value of weekend and cigars\n");
    scanf("%d %d",&weekend,&cigars);
    if(weekend==1)
    {
         if(cigars>=40)
    {
        printf("true");
    }
    else 
    {
        printf("false");
    }
    }
    else
    {
        if(cigars >40 && cigars<=60)
        {
            printf("true");
        }
        else
        {
            printf("false");
   }
}
}