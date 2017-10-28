#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i=0,s;
    scanf("%s",&a);
     for(i=0;i<strlen(a);i=i+2){
     s = a[i];
     a[i] = a[i+1];
     a[i+1] = s;
     }
    printf("%s",a);
}
