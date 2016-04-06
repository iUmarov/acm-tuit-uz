#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    __int64 n, a[10000], b[10000], c[10000], max, min;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    cin >> a[i];
    
    int x = 0, k = 0;
    
    for(int i = 1; i <= n; i++)
    {
    if(i % 2 == 0)
    b[k++] = a[i];
    else
    c[x++] = a[i];
    }
    
    for(int i = 0; i < k - 1; i++)
    {
            for(int j = i + 1; j < k; j++)
            {
                    if(b[i] > b[j])
                    {
                            __int64 t = b[i];
                            b[i] = b[j];
                            b[j] = t;
                    }
            }
    }
    
    for(int i = 0; i < k; i++)
    cout << b[i] << " ";
    
    cout << endl;
    
    max = b[0];
    min = b[0];
    
    for(int i = 1;i < k; i++)
    {
    if(max < b[i])
    max = b[i];
    if(min > b[i])
    min = b[i];
    }
    
    int z = 0;
    int s = 0;
    
    for(int i = 0; i < k; i++)
    {
            if(b[i] == max)
            z++;
            
            if(b[i] == min)
            s++;
    }
    
    cout << max << " " << min << endl;
    cout << z << " " << s << endl;
    
    for(int i = 0; i < x - 1; i++)
    {
            for(int j = i + 1; j < x; j++)
            {
                    if(c[i] < c[j])
                    {
                            __int64 t = c[i];
                            c[i] = c[j];
                            c[j] = t;
                    }
            }
    }
    
    for(int i = 0; i < x; i++)
    cout << c[i] << " ";
    
    cout << endl;
    
    max = c[0];
    min = c[0];
    
    for(int i = 1;i < x; i++)
    {
    if(max < c[i])
    max = c[i];
    if(min > c[i])
    min = c[i];
    }
    
    z = 0;
    s = 0;
    
    for(int i = 0; i < x; i++)
    {
            if(c[i] == max)
            z++;
            
            if(c[i] == min)
            s++;
    }
    
    cout << max << " " << min << endl;
    cout << z << " " << s << endl;
    
    //stem("pause");
    return 0;
}
