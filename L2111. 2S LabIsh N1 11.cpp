#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    double s = 0, s1 = 0, a[10000];
    __int64 i, j, k, n, t;
    
    cin >> n;
    
    k = n / 2;
    
    for(i = 1; i <= n; i++)
    cin >> a[i];
    
    for(i = 1; i <= k; i++)
    s += a[i];
    
    if(n % 2 == 0)
    t = k + 1;
    else
    t = k + 2;
    
    for(i = t; i <= n; i++)
    s1 += a[i];
    
    if(s1 == s)
    cout << "YES";
    else
    cout << "NO";
    
    getch();
    return 0;
}
