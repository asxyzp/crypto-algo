//This program is used for encrypting text using caesar cipher
//Created by Aashish Loknath Panigrahi
#include <stdio.h>
#include <string.h>
#include "mod.c"
int main(void)
{
	printf("\n----------------------------------------------------------------------------------\n");
	printf("\tProgram for encryption of text using caesar cipher.\n");

	printf("\n----------------------------------------------------------------------------------\n");
	char text[1000],yon;
	int length,key;
	do
	{

		printf("\nEnter plain text:\n");scanf("%[^\n]s",text);                             //For accepting input string as plaintext
        length=strlen(text);                                                             //Storing the length of string in a variable
        printf("\nLength of string is %d",length);
        
        char ctext[length+1];                                                              //For storing encrypted text

		printf("\nEnter key(FROM 0-25):\t");scanf("%d",&key);                            //For accepting key input
		if (key>=0) {key=key%26;printf("Key is %d\n",key);}
		else {printf("\nPlease enter key in between 0-25");return 1;}
		
        for (int i = 0; i < length; ++i)
        {
           if (text[i]>='A' && text[i]<='Z')	{	text[i]=text[i]-65;	ctext[i]=((text[i]+key)%26)+65;	}
           else if (text[i]>='a'&& text[i]<='z') {  text[i]=text[i]-97;	  ctext[i]=((text[i]+key)%26)+97;	}
           else if (text[i]==' ')	{ ctext[i]=text[i];}
           else { ctext[i]=text[i];}
        }
        printf("\nEncrypted text is :\t");
        for (int i = 0; i < length; ++i)
        {
        printf("%c",ctext[i]);	
        }

		printf("\nTo continue enter 'y' or 'Y'\nOtherwise press any other key:");        //For repeating the entire step based on user's command
		scanf("%c",&yon);
	}
	while(yon=='y'||yon=='Y');
	return 0;
}
