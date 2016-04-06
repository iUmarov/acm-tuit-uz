#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{     
       long m[10000];
       long a, n, i, j = 1, k;
       long d = 0;

       cin >> a >> n;

       m[1] = a;
       
       for(i = 1; i < n; i++)
       {  
          for(k = 1; k <= j; k++)
          {
          d = (m[k] * a) + d;
          m[k] = d % 10;
          d = d / 10;
          }
          //cout << d << " ";
          while (d != 0) 
          {
             j++; 
             m[j] = d % 10; 
             d = d / 10;
          }
       }
   for(i = j; i > 0; i--) 
   cout << m[i]; 

   //system("pause");
   return 0;
}
