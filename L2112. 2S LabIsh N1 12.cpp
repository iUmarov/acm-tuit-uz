#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    double a[10000], b[10000];
    __int64 k = 0, n;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    cin >> a[i];
    
    if(n % 2 == 1)
    for(int i = n; i > 0; i--)
    b[k++] = a[i];
    else
    {
        for(int i = 1; i <= n / 2; i++)
        b[k++] = a[i];
        
        for(int i = n; i > n / 2; i--)
        b[k++] = a[i];
    }
    
    for(int i = 0; i < k; i++)
    {
            printf("%.f", b[i]);
            cout << " ";
    }
            
     //getch();
    return 0;
}
