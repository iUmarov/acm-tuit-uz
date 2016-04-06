#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i, j, n, k, l, a[1000], b[1000];
    
    cin >> n;
    
    for(i = 1; i <= n; i++)
    cin >> a[i];
    
    cin >> k;
    
    for(i = 1; i <= k; i++)
    cin >> b[i];
    
    for(i = 1; i <= k; i++)
    {
    l = 0;
    for(j = 1; j <= n; j++)
    if(b[i] == a[j]) 
    l++;
    
    cout << l << " \n ";
    }
    
    //system("pause");
    return 0;
}
