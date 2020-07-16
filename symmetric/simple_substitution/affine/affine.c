//This program allows text using affine cipher
//Created by Aashish Loknath Panigrahi
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char* string;
    string=(char*)malloc(sizeof(char)*10000);
    printf("\nEnter string \t");
    scanf("%[^\n]",string);
    string=(char*)realloc(string,strlen(string));
    int k0,k1;           //Key 
    do{
        printf("\nEnter keys k0 and k1:\t");
        scanf("%d%d",&k0,&k1);
        if(k0<0||k1<0)
           printf("\nEnter proper key value");
    }while(k0<0||k1<0);
    int i;
    int x=strlen(string);
    for( i=0;i<=x;i++)
    {
        string[i]=toupper(string[i]);
        string[i]=string[i]-65;
        string[i]=((string[i]*k0)+k1)%26;
        string[i]=string[i]+65;
    }
    printf("\nEncrypted string is %s",string);
}
    
