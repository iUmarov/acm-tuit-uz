#include <iostream>
using namespace std;

int main()
{
    int n, a[100][100], i, j, k, s = 0;
    
    cin >> n;
    
    for(i = 1;i <= n; i++)
    for(j = 1;j <= n; j++)
    cin >> a[i][j];
    
    for(i = 1;i <= n; i++)
    for(j = 1;j <= n; j++)
    cout << a[i][j] << " ";
    
    system("pause");
    return 0;
}
