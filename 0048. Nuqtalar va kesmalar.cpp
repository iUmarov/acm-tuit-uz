#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    __int64 k = 0, left[100], right[100], n, m, point[100];
    
    cin >> n >> m;
    
    for(__int64 i = 0; i < n; i++)
    cin >> left[i] >> right[i];
    
    for(__int64 i = 0; i < m; i++)
    cin >> point[i];
    
    for(__int64 i = 0; i < m; i++)
    {
            k = 0;
            
            for(int j = 0; j < n; j++)
            if(min(left[j], right[j]) < point[i] && point[i] < max(left[j], right[j]))
            k++;
            
            cout << k << " ";
    }
    
    //system("pause");
    return 0;
}
    
