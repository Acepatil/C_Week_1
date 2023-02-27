#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    fgets(s,100,stdin);
    int a=strlen(s);
    s[strcspn(s,"\n")]='\0';
    for (int i = 0; i < a; i++)
    {
        printf("%c",s[i]);
    }
    

}