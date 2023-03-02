#include<stdio.h>
int sort(int[],int);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}
int sort(int a[],int n)
{
    if (n==0)
    {
        return 0;
    }
    if (a[0]>a[1])
    {
        int temp=a[0];
        a[0]=a[1];
        a[1]=temp;
    }
    else
    {
        sort(a+1,n-1);
    }
    
}