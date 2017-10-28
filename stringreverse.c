#include<stdio.h>
void main()
{
    char a[100];
    int i=0,c=0;
    scanf("%s",&a);
    while(a[i]!='\0')
    {
       c=c+1;
       i++;
    }
    while(i>=0)
    {
       printf("%c",a[i]);
       i--;
    }
}
