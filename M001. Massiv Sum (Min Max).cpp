#include <iostream>
using namespace std;

int main()
{
    int n, i, s = 0, min, max, xi, yi;
    
    float a[10];
    
    cin >> n;
    
    for(i = 1; i <= n; i++)
    cin >> a[i];
    
    min = a[1];
    max = a[1];
    
    for(i = 1;i <= n;i++)
    if(a[i] <= min) 
    { 
                  min = a[i]; 
                  xi = i;
    }
    
    for(i = 1; i <= n;i++)
    if(a[i] >= max) 
    { 
                  max = a[i]; 
                  yi = i;
    }
    
    if(xi < yi - 1)
    for(i = xi + 1; i < yi; i++)
    s += a[i]; 
    
    if(yi < xi - 1)
    for(i = yi + 1; i < xi; i++)
    s += a[i];
    
    cout << s;
    
    system("pause");
    return 0;
}
