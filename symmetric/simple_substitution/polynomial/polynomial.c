#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int temp=0;
int main(void)
{
   char *string=(char*)malloc(sizeof(char)*10000);
   printf("\nEnter string:\t");
   scanf("%[^\n]",string);
   string=realloc(string,strlen(string));
   printf("\nLength of string is :\t%lu",strlen(string));
   
   int n=0,key[n];
   do{
      printf("\nEnter the nth degree of polynomial:\t");
      scanf("%d",&n);
      if(n<=0)
         printf("\nEnter proper value for n");
   }while(n<=0);   

   printf("\nEnter all values of keys:\n");
   for(int i=0;i<n;i++)
   {
      do{
         printf("\nEnter key[%d]:\t",i);
         scanf("%d",&key[i]);
         if(key[i]<=0)
            printf("\nEnter proper key value.");
      }while(key[i]<=0);
   }
   int x=strlen(string);
     for(int i=0;i<x;i++)
     {
        for(int j=1;j<=n;j++)
        {
           temp=temp+(pow((int)string[i],j))*key[j];
        }
        temp=temp+(int)string[i];
        temp=(temp%26)+65;
        string[i]=(char)temp;
     }  
  printf("\nEncrypted string is :%s",string);
}
