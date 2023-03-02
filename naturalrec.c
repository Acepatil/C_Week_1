#include<stdio.h>
void nat(int);
void nat1(int,int);
int main()
{
    int n,a=1;
    scanf("%d",&n);
    nat1(a,n);
}
// void nat(int n)
// {
//     if (n==0)
//     {
//         return;
//     }
//     else
//     {
//         printf("%d",n);
//         nat(n-1);
//     }
// }
void nat1(int a, int n)
{
    printf("%d ",a);
    if (a>=n)
    {
        return;   
    }
    nat1(a+1,n);
}