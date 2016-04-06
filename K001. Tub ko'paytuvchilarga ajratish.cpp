#include <iostream>
#include <math.h>
using namespace std;

int tup_son(int n)
{
    int i, k = 0;
    
    for(i = 1; i <= n; i++)
    if(n % i == 0) 
    k++;
    
    if(k == 2) 
    return n;
    else 
    return 0;
}

int main()
{
    int a, n, k, j, s, t;
    
    cin >> a;
    
    for(n = 1; n <= a; n++)
    {
                     k = tup_son(n); 
                     
                     if( k != 0 )
                     {
                         s = 0;
                         while(a % k == 0)
                         {
                         s++;
                         a /= k;
                         }
                         
                         if(s >= 1) 
                         cout << k << " " << s << endl;
                     }
    } 
    
    system("pause");
    return 0;
}
