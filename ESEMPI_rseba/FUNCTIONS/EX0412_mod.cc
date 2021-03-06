//  Example 4.12, page 100
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
#include <cmath>
//#include <math.h>

int isPrime(int);

int main()
{
  for (int n = 1; n < 50; n++)
    if (isPrime(n)) cout << n << " ";
  cout << endl;
  return 0;
}

// restituisce TRUE se n e' primo
int isPrime (int n) 
{

   float sqrtn = sqrt(n);
   
   if (n<2)
     return 0;
   if (n<4)
     return 1;
   if (n%2==0)
     return 0;
   for (int d=3; d<=sqrtn;d+=2) 
     if (n%d ==0)
        return 0;
   return 1;
}
