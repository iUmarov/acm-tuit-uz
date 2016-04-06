#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    __int64 s = 0, n, z, p, i, k;
    
    cin >> n;
    
    for(i = 2; i * i <= n; i++)
    {
            
            for(k = 2; k * k <= n; k++)
            {
            p = 1;     
            
            for(int j = 1; j <= k; j++)
            p = p * i;
            
            if(p == n)
            {
            //cout << i << " " << k << endl;
            s++;
            }
            }
    }  
    
  cout << s << endl;

  //system("pause");
  return 0;
}
