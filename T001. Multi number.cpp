#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    __int64 n, k = 0, a, P = 1, S = 1, i = 0, c[10];
    
    cin >> n;
    
    a = n;
    
    if(n < 10)
    {
    cout  << "NO";
    //stem("pause");
    return 0;
    }
    
    while(n != 0)
    {
            if(n % 10 == 0)
            k++;

            n /= 10;
    }
    
    if(k == 1)
    {
    cout  << "NO";
    //system("pause");
    return 0;
    }
    
    while(a != 0)
    {
            P = P * (a % 10);
            
            c[i] = a % 10;
            
            i++;
            
            a /= 10;
    }

    for(int j = i - 1; j >= 0; j--)
    {
            S = S * c[j];
            
            if(S * S == P)
            {
                 cout << "YES";
                 //system("pause");
                 return 0;
            }
    }
    
    cout << "NO";
    //system("pause");
    return 0;
}
