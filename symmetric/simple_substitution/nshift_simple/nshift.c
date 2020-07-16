#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
   //For accepting string value
   char *str;
   str=(char*)malloc(sizeof(int)*1000);
   printf("\nEnter string:\t");
   scanf("%[^\n]",str);
   str=(char*)realloc(str,sizeof(int)*strlen(str));
   for(int i=0;i<strlen(str);i++)
   {
      str[i]=toupper(str[i]);
   }
   printf("\nLength of string is:\t%lu",strlen(str));

   //For accepting n-shift value
   int num;
   do
   {
      printf("\nn-shift value:\t");
      scanf("%d",&num);
      if(num<=0)
         printf("\nPlease enter proper n-shift value.");
   }
   while(num<=0);
   num=num%strlen(str);
   printf("\nn-shift value is:\t%d",num);

   char temp;                          //For storing temporary variable for storing last character of str
   for(int i=0;i<num;i++)
   {
      temp=str[strlen(str)-1];
      printf("\nLast variable=\t%c",temp);
      for(int i=strlen(str)-2;i>-2;i--)
      {
         str[i+1]=str[i];
      }
      str[0]=temp;
   }
   printf("\n%d-shifted string is :\t%s",num,str);

   int k; //key
   char estr[strlen(str)];

   printf("\nEnter the value of key:\t");
   scanf("%d",&k);
   k=k%26;
   printf("\nKey entered is:%d",k);
   
  for(int i=0;i<=strlen(str);i++)
   {
      if(str[i]>='A'||str[i]<='Z')
      {
          estr[i]=toupper(str[i]);
          estr[i]=estr[i]-65;
          estr[i]=(estr[i]+k)%26;
          estr[i]=(estr[i]+65);
      }
      else if(str[i]=' ')
      {
          estr[i]=str[i];
      }
   }
   printf("\nEncrypted string:\t%s",estr);
  
  //For decryption
  for(int i=0;i<=strlen(str);i++)
   {
      if(estr[i]>='A'||estr[i]<='Z')
      {
          estr[i]=toupper(estr[i]);
          estr[i]=estr[i]-65;
          estr[i]=(estr[i]-k)%26;
          estr[i]=(estr[i]+65);
      }
      else
      {
          estr[i]=str[i];
      }
   }
   int revshift=strlen(estr-num);
   for(int i=0;i<revshift;i++)
   {
      temp=estr[strlen(str)-1];
      printf("\nLast variable=\t%c",temp);
      for(int i=strlen(str)-2;i>-2;i--)
      {
         estr[i+1]=estr[i];
      }
      estr[0]=temp;
   }
   printf("\nDencrypted string:\t%s",estr);
}
