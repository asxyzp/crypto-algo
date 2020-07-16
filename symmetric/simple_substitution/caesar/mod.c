int mod(int a,int b)
{ 
	//when a>b & a<0
	if (a>=0 && a<b)
	{
		return a;
	}
	else if (a<0 && a==(-1*b))
	{
		return a%b;
	}
	else if (a<0 && a<b)
	{
		return (a%b)+b; 
	}
    else if (b>0 && a>b)
    {
        return a%b;
    }
 
}