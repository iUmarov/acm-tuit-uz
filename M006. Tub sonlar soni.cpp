#include<iostream>
using namespace std;

int main()
{
    int n, a[100], i, j, k, s = 0;
    
    cin >> n;
    
    for(i = 1;i <= n; i++)
    cin >> a[i];
    
    for(i = 1; i <= n; i++)
    {
                     k = 0;
                     
                     for(j = 2; j * j <= a[i]; j++)
                     {
                           if(a[i] % j == 0) 
                           k++;
                     }
                     
                     if(k == 0)
                     { 
                     s++;
                     //cout << a[i] << " ";
                     }
    }

    cout << s;

    system("pause");
    return 0;
}
