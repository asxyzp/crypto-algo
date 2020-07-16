//This program uses XOR operation for decryption of text using key for XOR encrypted text.
//Created by Aashish Loknath Panigrahi.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	printf("\n----------------------------------------------------------------------------------\n");
	printf("\tProgram for decryption of text using XOR operation.\n");
	printf("\tCreated by Aashish Loknath Panigrahi.");
	printf("\n----------------------------------------------------------------------------------\n");
	int key;
	                                              //For accepting the string as an input from user
	char ctext[10000];
	printf("\nEnter encrypted cipher:\t");	
    scanf("%[^\n]s",ctext);
                                                  //For accepting key as an input
    do
	{
	    printf("\nEnter key:\t");
	    scanf("%d",&key);
	    if (key<0 || key>255)
	    	{
	    		printf("\nPlease enter proper key.");
	    	}	
	} while (key<0 || key>255);
                                                 //For encryption of text
    char ptext[strlen(ctext)];
    for (int i = 0; i < strlen(ctext); ++i)
    {
        ptext[i]=(char)((int)ctext[i]^key);	
    }
    printf("\nDecrypted text\t");                 //Printing text
    for (int i = 0; i < strlen(ctext); ++i)
    {
        printf("%c",ptext[i]);
    }
    printf("\n");
	return 0;
}