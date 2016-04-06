#include <iostream>
#include <cmath>

using namespace std;

bool a[10000001] = {false};

int main()
{
    __int64 n, m, k, t = 0, i, j, sa;
    
    cin >> k;
    cin >> m >> n;
    
    for(i = 2; i <= n; i++)
    {
           if(a[i] == false)
           {
                    t = 1;
                    __int64 s = i * i;
            
                    for(j = s; j <= n; j = (++t) * s )
                    {
                    a[j] = true;
                    //cout << j << " ";
                    }
            }
    } 
    
    t = 0;
    
    //cout << endl;
    for(i = m; i <= n; i++)
    {       
            if(a[i] == false) 
            {
                   // cout << i << " ";
                                  
                    t++;
                    if(t == k)
                    {
                       cout << i;
                        //sa = i;
                        break;
                    }
                    else
                    continue;
            }
    }
    
    //cout << endl << sa;
    //system("pause");
    return 0;   
}
