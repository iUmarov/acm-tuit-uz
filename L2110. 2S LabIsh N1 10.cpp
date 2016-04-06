#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    double a[10000], max2, min2;
    __int64 i, j, index, n;
    
    cin >> n;
    
    for( i = 0; i < n; i++)
    cin >> a[i];
    
    for(i = 0; i < n - 1; i++)
    {
            index = i;
            
            for(j = i + 1; j < n; j++)
            if(a[index] > a[j])
            index = j;
            
            double k = a[i];
            a[i] = a[index];
            a[index] = k;
    }
    
    if(n > 2)
    {
         printf("%.f", a[n-2]);
         cout << " ";
         printf("%.f", a[1]);
    }
    else
    {
        if(n == 2)
        {
             max2 = max(a[0], a[1]); 
             min2 = min(a[0], a[1]);
             
             printf("%.f", max2);
             cout << " ";
             printf("%.f", min2);
        }     
        else
        {
        printf("%.f", a[0]);
        cout << " ";
        printf("%.f", a[0]);
        }
    }
    
    //system("pause");
    return 0;
}
