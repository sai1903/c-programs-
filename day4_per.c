#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,k=0 ,r;
    char id[10];
    void per(char id[10],int k,int r);
    printf("enter the string ");
    scanf("%s",id);
    n=strlen (id);
    per(a,l,s);
}
void per(char a[10],int l,int s)
{
    int  i ,t=o;
    if(l==s)
    {
        printf("%s",a);
    }
    else
    {

    for(i=l;i<s;i++)
    {
        t=a[i];
        a[i]=a[l];
        a[l]=t;
        strcpy(id,a)
        per( a,l,s);
    }
}
