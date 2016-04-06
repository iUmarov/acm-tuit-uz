#include <iostream>
using namespace std;

int main()
{
    long long n, a[1000], i;
    
    cin >> n;
    
    for(i = 1; i <= n; i++)
    cin >> a[i];
    
    for(i = n; i >= 1; i--)
    cout << a[i] << " ";
    
    system("pause");
    return 0;

}
