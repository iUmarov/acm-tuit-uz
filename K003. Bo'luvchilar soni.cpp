#include <iostream>
using namespace std;

int main()
{
    short a[1000000] = { 0 }; 
    long i, j, n, m, k;
    
    cin >> m >> n;
    
    for(i = m; i <= n; i++)
    {
             for(j = 1; j <= i; j++)
             {
                      if(i % j == 0)
                      a[i]++;
             }
    }
    
    for(i = m; i <= n; i++)
    cout << i << " " << a[i] << endl;

    system("pause");
    return 0; 
}
