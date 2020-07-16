//This program allows encryption of text using output based XOR shifting 
//Basically output of xoring of key with first alphabet is used as key for another alphabet
//created by Aashish Loknath Panigrahi
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	char ptext[10000];
	printf("\nEnter string:\t");
    scanf("%[^\n]",ptext);
    //For converting lower text to upper text
    for (int i = 0; i < strlen(ptext); ++i)
    {
    	ptext[i]=toupper(ptext[i]);
    }
    //For accepting key
    int key;                                                      //key stores the value of key
    printf("\nEnter key:\t");
    scanf("%d",&key);
    if(key>=0)
    key=key%255;                                                  //So, that when the value of key is greater than 255 , mod makes it below 255 
    else if(key<0)                                                //For not accepting values of key below 255
    {
    	printf("\nEnter value of key as >0");
    	return 1;
    }
    //For encryption
    char ctext[strlen(ptext)];                                    //ctext stores the value of encrypted text
    ctext[0]=ptext[0]^key;                                        //Because the first alphabet gets encrypted by the key
    for (int i = 1; i < strlen(ptext); ++i)
    {
    	key=ctext[i-1];                                           //because key is equals to value of previously encrypted text
    	ctext[i]=key^ptext[i];
    }

    //For printing the output
    printf("\nDecrypted text is:\t");
    for (int i = 0; i < strlen(ptext); ++i)
    {
    	printf("%c",ctext[i]);
    }
    printf("\n");
	return 0;
}
