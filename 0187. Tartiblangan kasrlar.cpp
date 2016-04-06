#include <iostream>

using namespace std;

int ekub(int i, int j)
{
     while(i != j)
     {
             if(i > j)
             i = i % j;
             else
             j = j % i;
             
             if(i == 0)
             i = j;
             
             if(j == 0)
             j = i;
     }
     
     if(i == 1)
     return 1;
     else
     return 0;
}

int main()
{
    float a[100000], b[100000], c;
    int n, k = 0;
    
    cin >> n;
    
    for(int i = 1; i < n; i++)
    for(int j = 2; j <= n; j++)
    {
            if(ekub(i, j) == 1)
            {
                            if(i < j)
                            {
                            a[k] = i;
                            b[k] = j;
                            k++;
                            }
            }
    }
                    
    for(int i = 0; i < k - 1; i++)
    {
            for(int j = i + 1; j < k; j++)
            {
                    if(a[i] / b[i] > a[j] / b[j])
                    {
                            c = a[i];
                            a[i] = a[j];
                            a[j] = c;
                            
                            c = b[i];
                            b[i] = b[j];
                            b[j] = c;
                    }
            }
    }
    
    for(int i = 0; i < k; i++)
    cout << a[i] << "/" << b[i] << endl;
      
    //system("pause");
    return 0;
}
                           
