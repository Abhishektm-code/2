#include<stdio.h>
int main()
{
    int a;
    printf("Even num\n");
    for(a=1;a<=10;a++)
        if((a%2)==0)
        {
            printf("%d  ",a);
        }
    printf("\nOdd num\n");
    for(a=1;a<=10;a++)
        if((a%2)!=0)
        {
            printf("%d  ",a);
        }

 }

