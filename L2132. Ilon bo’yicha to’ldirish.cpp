// Author: Umarov Islom
#include <iostream>

using namespace std;

int main()
{
    int a[100][100], n, m, k = 0;
    
    cin >> n >> m;
    
    
    for(int i = 0; i < n; i++)
    {
            
            if(i % 2 == 0)
            {
                for(int j = 0; j < m; j++) 
                {
                        a[i][j] = k;
                        k++;
                }
            }
            else
            {
                for(int j = m - 1; j >= 0; j--)
                {
                        a[i][j] = k;
                        k++;
                } 
            }
    }
    for(int i = 0; i < n; i++)
    {
            
    for(int j = 0; j < m; j++)
    cout << a[i][j] << " ";
    
    cout << "\n";
}
                
                
                
            
                
                 
    
    
    



   // system("pause");
    return 0;
}
