#include <iostream>

using namespace std;

int main()
{
    int m, n, a[100][100], s = 0;
    
    cin >> n >> m;
    
    for(int i = 0; i < m; i++)
    a[0][i] = 1;
    
    for(int i = 0; i < n; i++)
    a[i][0] = 1;
    
    for(int i = 1; i < n; i++)
    {
                for(int j = 1; j < m; j++)
                {
                        s = 0;
                        
                        for(int k = j; k >= 0; k--)
                        s += a[i-1][k];
                        
                        a[i][j] = s;
                }
    }
                        
     for(int i = 0; i < n; i++)
    {
            
    for(int j = 0; j < m; j++)
    cout << a[i][j] << " ";
    
    cout << "\n";
}               
            



    //system("pause");
    return 0;
}
