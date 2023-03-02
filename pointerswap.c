#include<stdio.h>
int main()
{
    int a,b;
    int *p,*p1;
    p=&a;
    p1=&b;
    scanf("%d %d",p,p1);
    *p=*p+*p1;
    *p1=*p-*p1;
    *p=*p-*p1;
    printf("%d %d",a,b);
}