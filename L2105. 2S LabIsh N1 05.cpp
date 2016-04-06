#include <iostream>

using namespace std;

int main()
{
    __int64 n, a[10000], b[10000], c[10000];
    int x = 0, k = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    for(int i = 0; i < n; i++)
    {
            if(a[i] < 0)
            b[k++] = a[i];
            else
            c[x++] = a[i];
    }
    
    __int64 s = 0, s1 = 0;
    
         for(int i = 0; i < k; i++)
         {
            s1 += b[i];
            cout << b[i] << " ";
         }
    
            cout << endl;
            
          float v = float(s1)/float(k);
            

         for(int i = 0; i < x; i++)
         {
            s += c[i];
            cout << c[i] << " ";
         }
    
            cout << endl;
    
    
            float v1 = float(s)/float(x);
    
            printf("%.2f", v);
            cout << " ";
            printf("%.2f", v1);
            cout << endl;
            
    //system("pause");
    return 0;
}
