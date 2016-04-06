#include<iostream>
using namespace std;

int main()
{
    int a[10], i, n;
    cin >> n;
    
    for(i = 1; i <= n;i++)
    cin >> a[i];
    
    cout << a[n];
    
    for(i = 1; i < n; i++)
    cout << " " << a[i];
    
    system("pause");
    return 0;
}
