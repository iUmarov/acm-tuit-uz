#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    float n, a[10000];
    float max, min;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    cin >> a[i];
    max = a[0];
    min = a[0];
    
    for(int i = 0; i < n; i++)
    {
            if(max < a[i])
            max = a[i];
            
            if(min > a[i])
            min = a[i];
    }
    
    for(int i = 0; i < n - 1; i++)
    {
            for(int j = i + 1; j < n; j++)
            {
                    if(a[j] < a[i])
                    {
                            int t = a[i];
                            a[i] = a[j];
                            a[j] = t;
                    }
            }
    }
    
    for(int i = 0; i < n; i++)
    cout << a[i] << " ";
    
    cout << endl;
    
    for(int i = n - 1; i >= 0; i--)
    cout << a[i] << " ";
    
    cout << endl;
    
    cout << max << " " << min << endl;
    
    system("pause");
    return 0;
}
