#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],c[100];
    fgets(s,100,stdin);
    int a=strlen(s);
    s[strcspn(s,"\n")]='\0';
    for (int i = 0; i <=a-1; i++)
    {
        printf("%c",s[i]);
        printf("\n");
    }
    for (int i = 0; i <=a-1; i++)
    {
        c[a-1-i]=s[i];
    }
    for (int i = 0; i <=a-1; i++)
    {
        printf("%c",c[i]);
        printf("\n");
    }
    for (int i = 0; i <= a/2; i++)
    {
        if (c[i+1]!=s[i])
        {
            printf("Not a panlindrome");
            break;
        }
        else
        {
        printf("Is a palindrome");
        break;

        }
    }
}