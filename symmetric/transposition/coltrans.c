//This program allows to make columnar transposition based encryption
//Created by Aashish Loknath Panigrahi
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{

  char* string;
  string=(char*)malloc(sizeof(int)*10000);             //accepting storing string's value
  printf("\nEnter string:\t");
  scanf("%[^\n]",string);
  string=(char*)realloc(string,strlen(string));
  printf("\nString entered is:\t%s\n",string);

  int ROW,COL;                                         //accepting values of row and column for a m*n matrix
  do
  {
  printf("\nEnter row and column of string:\t");
  scanf("%d%d",&ROW,&COL);
  if(strlen(string)>ROW*COL)
     printf("\nPlease enter proper size of matrix.\n");
  }while(strlen(string)>ROW*COL);

  char mtrx[ROW][COL];                                //storing string values in a m*n matrix
  int k=0;

     for(int i=0;i<ROW;i++)
     {
         for(int j=0;j<COL;j++)
         {
           mtrx[i][j]=string[k];
           if(i*j>strlen(string))
              mtrx[i][j]='0';
           k++;
         }
     }


  printf("\nMatrix is -\n");
  for(int i=0;i<ROW;i++)
  {
     for(int j=0;j<COL;j++)
        {
            printf("%c  ",mtrx[i][j]);
        }
        printf("\n");
  }
  printf("\n");

  int order[COL];               //Stores the column for transposition 
  printf("\nEnter the order for columnar transposition:\t");
  for(int i=0;i<COL;i++)
  {
    printf("\nOrder[%d]:\t",i);
     do{
     scanf("%d",&order[i]);
        if(order[i]<0||order[i]>COL-1)
           printf("\nPlease enter proper order digit.");
     }while(order[i]<0||order[i]>COL-1);
  }

  //For printing transpositioned value
  printf("\nEncrypted text using columnar transposition is -\n");
  int count=0;
  while(count<COL)
  {
     for(int i=0;i<ROW;i++)
     {
         printf("%c",mtrx[i][order[count]]);
     }
     count++;
  }
  printf("\n");
}
