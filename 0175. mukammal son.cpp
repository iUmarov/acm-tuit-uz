#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   __int64 n, m, s, i, j;
   bool complicated;
   
   cin >> m >> n;
   
   for(i = m; i <= n; i++)
   {
           s = 1;
           
           for(j = 2; j * j < i; j++)
           {
                   if(i % j == 0)
                   {
                        s += j + i / j;
                   }
           }
           
   if(j * j == i )
   s += i;
           
   if(s == i && i != 1)
   {
   cout << i << endl;
   complicated = true;
   }
   
   }

   if(complicated != true)
   cout << "Absent";
    
    system("pause");
    return 0;
}
