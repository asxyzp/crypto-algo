//This program allows to do simple multiplication based substitution encryption
//Created by Aashish Loknath Panigrahi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char* string;
    string=(char*)malloc(sizeof(char)*10000);
    printf("\nEnter string:\t");
    scanf("%[^\n]",string);
    string=(char*)realloc(string,strlen(string));
    printf("\nString entered is: %s",string);
    
    int k0;           //Key 
    do{
        printf("\nEnter key:\t");
        scanf("%d",&k0);
        if(k0<0)
           printf("\nEnter proper key value");
    }while(k0<0);
    int i;
    int x=strlen(string);
    for( i=0;i<=x;i++)
    {
        string[i]=toupper(string[i]);
        string[i]=string[i]-65;
        string[i]=(string[i]*k0)%26;
        string[i]=string[i]+65;
    }
    printf("\nEncrypted string is %s",string);
}
