/* This program calculates the Key for two persons 
using the Diffie-Hellman Key exchange algorithm */
#include<stdio.h>
#include<math.h>
int power(int a, int b,int P)
{ 
    if (b == 1)
        return a;
 
    else
        return (((int)pow(a, b)) % P);
}
int main()
{
    int P, G, x, a, y, b, ka, kb; 
    P = 23; //here p is a prime number
    printf("The value of P : %d\n", P); 
 
    G = 9;
    printf("The value of G : %d\n\n", G);  
    a = 4;
    printf("The private key a for kajal : %d\n", a);
    x = power(G, a, P);
    b = 3; 
    printf("The private key b for Aashish : %d\n\n", b);
    y = power(G, b, P);
    ka = power(y, a, P); // Secret key for kajal
    kb = power(x, b, P); // Secret key for Aashish
     
    printf("Secret key for the kajal is : %d\n", ka);
    printf("Secret Key for the Aashish is : %d\n", kb);
     
    return 0;
}
