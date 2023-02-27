#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int *p=&a[0];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",*(p+i));
    // }
    // printf("\n");
    int b[n];
    int *p2=&b[0];
    for (int i = 0; i < n; i++)
    {
        *(p2+i)=*(p+i);
    }
    for ( int i = 0; i < n; i++)
    {
        printf("%d ",*(p2+i));
    }
    
}