//This program allows to do frequency analysis for any given cipher or plain text
//Created by Aashish Loknath Panigrahi
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
class text
{
public:
	char pctext[10000];                                   //pctext allows to store value of a string 
	char alphafreq[26];                                   //alphafreq[26] stores the values of frequencry of 26 alphabets
	//counter[26] stores the value of counter for each alphabet
	int counter[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};                                      
	int caccept()                                         //caccept() member function allows to accept the value of string
	{
		cout<<"\nEnter string:\t";
		cin.get(pctext,9999);
	}
	int cupper()                                         //cupper() member function allows to convert all values of string to alphabets
	{
		for (int i = 0; i < strlen(pctext); ++i)
		{
			pctext[i]=toupper(pctext[i]);
		}
		cout<<"\nString entered is:\t"<<pctext<<"\n";
	}
    int frequency()
    {
    	for (int i = 0; i < strlen(pctext); ++i)
    	{
    		//switch-case program helps in increment of the counter everytime the forloop reaches across a value
    	    switch(pctext[i])
    	    {
    	    case 'A' :
    	    {
    	    	counter[0]++;
    	    	break;
    	    	cout<<counter[0]<<"of A;
"    	    }

            case 'B' :
            {
            	counter[1]++;
            	break;
            }

            case 'C' :
    	    {
    	    	counter[2]++;
    	    	break;
    	    }

    	    case 'D' :
    	    {counter[3]++; break;}
         
            case 'E' :
    	    {counter[4]++; break;}
            
            case 'F' :
    	    {counter[5]++; break;}
    	    
    	    case 'G' :
    	    {counter[6]++; break;}

            case 'H' :
    	    {counter[7]++; break;}

    	    case 'I' :
    	    {counter[8]++; break;}
            
            case 'J' :
    	    {counter[9]++; break;}
            
            case 'K' :
    	    {counter[10]++; break;}
    	    
    	    case 'L' :
    	    {counter[11]++; break;}
            
            case 'M' :
    	    {counter[12]++; break;}
            
            case 'N' :
    	    {counter[13]++; break;}
    	    
    	    case 'O' :
    	    {counter[14]++; break;}
            
            case 'P' :
    	    {counter[15]++; break;}
            
            case 'Q' :
    	    {counter[16]++; break;}
    	    
    	    case 'R' :
    	    {counter[17]++; break;}
            
            case 'S' :
    	    {counter[18]++; break;}
            
            case 'T' :
    	    {counter[19]++; break;}
    	    
    	    case 'U' :
    	    {counter[20]++; break;}
            
            case 'V' :
    	    {counter[21]++; break;}
            
            case 'W' :
    	    {counter[22]++; break;}
    	    
    	    case 'X' :
    	    {counter[23]++; break;}
            
            case 'Y' :
    	    {counter[24]++; break;}
            
            case 'Z' :
    	    {counter[25]++; break;}
    	    }
    	}
    	//counter[] array at the end stores value frequency of each value
    	alphafreq[0]=counter[0];
    	alphafreq[1]=counter[1];
    	alphafreq[2]=counter[2];
    	alphafreq[3]=counter[3];
    	alphafreq[4]=counter[4];
    	alphafreq[5]=counter[5];
    	alphafreq[6]=counter[6];
    	alphafreq[7]=counter[7];
    	alphafreq[8]=counter[8];
    	alphafreq[9]=counter[9];
    	alphafreq[10]=counter[10];
    	alphafreq[11]=counter[11];
    	alphafreq[12]=counter[12];
    	alphafreq[13]=counter[13];
    	alphafreq[14]=counter[14];
    	alphafreq[15]=counter[15];
    	alphafreq[16]=counter[16];
    	alphafreq[17]=counter[17];
    	alphafreq[18]=counter[18];
    	alphafreq[19]=counter[19];
    	alphafreq[20]=counter[20];
    	alphafreq[21]=counter[21];
    	alphafreq[22]=counter[22];
    	alphafreq[23]=counter[23];
    	alphafreq[24]=counter[24];
    	alphafreq[25]=counter[25];
    }
    //freqdisplay() is used for display of frequency of each alphabet
    int freqdisplay()
    {
    	for (char i = 'A'; i <'Z' ; ++i)
    	{
    		for (int j = 0; j < 26; ++j)
    		{
    			cout<<"alphafreq["<<i<<"]="<<counter[j]<<"\n";
    			cout<<"FREQUENCY["<<i<<"]="<<alphafreq[j]<<"\n";
    			break;
    		}
    	}
    }

};
int main(void)
{
	text txt;                                           //name of the object is txt
	txt.caccept();
	txt.cupper();
	txt.frequency();
	txt.freqdisplay();
	return 0;
}
