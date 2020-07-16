//This program uses XOR operation for encryption of text using key.
//Created by Aashish Loknath Panigrahi.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	printf("\n----------------------------------------------------------------------------------\n");
	printf("\tProgram for encryption of text using XOR operation.\n");
	printf("\n----------------------------------------------------------------------------------\n");
	int key;
	                                              //For accepting the string as an input from user
	char string[10000];
	printf("\nEnter string:\t");	
	scanf("%[^\n]s",string);
    int inasc[strlen(string)];
    for (int i = 0; i < strlen(string); ++i)
    {
    	string[i]=toupper(string[i]);             //To convert the lowercase letters to uppercase letters	
    }
                                                  //For accepting key as an input from user
    do
	{
	    printf("\nEnter key:\t");
	    scanf("%d",&key);
	    if (key<0 || key>255)
	    	{
	    		printf("\nPlease enter proper key.");
	    	}	
	} while (key<0 || key>255);

    char encryptext[strlen(string)];               //For encryption of text
    printf("\nEncrypted text\t");                  //Printing text
    for (int i = 0; i < strlen(string); ++i)
    {
    	    if(encryptext[i]>='A'||encryptext[i]<='Z')
    	    	{
    	    		encryptext[i]=(char)((int)string[i]^key);
    	    	}
    	    else
    	        {
                    encryptext[i]=encryptext[i];
    	        }	
            printf("%c",encryptext[i]);
    }
    printf("\n");
	return 0;
}
