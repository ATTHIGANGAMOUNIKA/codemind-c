#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%4==0 and a%100!=0 or a%400==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}