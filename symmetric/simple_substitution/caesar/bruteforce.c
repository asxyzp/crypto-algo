//This program uses brute-force technique for cracking caesar cipher
//Created by Aashish Loknath Panigrahi
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "mod.c"

int main(void)
{
	printf("\n----------------------------------------------------------------------------------\n");
	printf("\tProgram for hacking caesar cipher using brute-force technique.\n");
	printf("\tCreated by Aashish Loknath Panigrahi.");
	printf("\n----------------------------------------------------------------------------------\n");
	char ctext[10000]; int i=0,j=0,l=0;             //j stores the value of key

	//For accepting cipher text
	printf("\nEnter cipher text:\t");
	scanf("%[^\n]s",ctext);

    //For converting text to upper letters
	for ( i = 0; i < strlen(ctext); i++)
	{
		ctext[i]=toupper(ctext[i]); 
	}
	int length=strlen(ctext);
	//Declaration of whether 
	char ptext[length];

	//Information about string
	printf("\nLength of string=%lu",strlen(ctext));
	printf("\nConverted string=%s",ctext);

    //For producing the ouput of possible decrypted values where j represents the key.
	for(j=0;j<26;j++)
	{
		printf("\nkey=%d",j);
        for ( l = 0; l < length; l++)
        {
           if (ctext[l]>='A' && ctext[l]<='Z')	
           	{	
           		ctext[l]=ctext[l]-65;
           		printf("%c",ctext[l]);
           	    ptext[l]=mod((ctext[l]-j),26)+65;
           	    printf("%c",ctext[l]);
           	}
           else if (ctext[l]=' ') 	
           	{	
           		ptext[l]=ctext[l];
           	}
        }
        printf("\nPossible decrypted text-");
        for (int i = 0; i < length; ++i)
                {
                	printf("%c",ptext[i]);
                }        
    }
	return 0;
}