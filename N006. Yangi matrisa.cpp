#include <iostream>
using namespace std;

int main()
{
    double a[100][100], s = 0;
    int n, i, j;
    cin >> n;
    
    for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
    cin >> a[i][j];
    
    for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
    if(i == j)
    s = s + a[i][j];
    
    if(s != 0)
    {
         for(i = 0; i < n; i++)
         for(j = 0; j < n; j++)
         a[i][j] = a[i][j] / s;
         
         for( i = 0; i < n; i++)
         {
              for(j = 0; j < n; j++)
              {
                    //cout << a[i][j];
                    printf("%.2f",a[i][j]);
                    if( j != n - 1)
                    cout << " ";
              }
              cout << endl;
         }
    }
    else
    printf("No solution");
    //system("pause");
    return 0;
}
