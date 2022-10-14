#include <stdio.h>
#include <string.h>
int main()
{
 int a[205]={0},b[205]={0},temp=0,up=0,j,i,m=0,x,f=0;
 char al[205]={0},bl[205]={0};
 scanf("%s",&al);
   for(i=strlen(al)-1,j=0;i>=0;i--,j++)
       a[j]=al[i]-'0';
 scanf("%s",&bl);
   for(i=strlen(bl)-1,j=0;i>=0;i--,j++)
       b[j]=bl[i]-'0';
   if(strlen(al)>=strlen(bl)) x=strlen(al);
   else x=strlen(bl);
   for(i=0;i<=x;i++)
   {
       temp=a[i]+b[i]+up;
       a[i]=temp%10;
       up=temp/10;
   }
   for(i=x;i>=0;i--)
   {
       if(a[i]==0&&m==0) f++;
       else{
        m=1;
        printf("%d",a[i]);
       }
       if(f==x+1) printf("%d",0);0
   }
}
