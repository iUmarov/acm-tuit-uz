#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a[10000], s = 0, s1 = 0;
    __int64 i, n, t = 0, k = 0;
    
    cin >> n;
    
    for(i = 1; i <= n; i++)
    cin >> a[i];
    
    for(i = 1; i <= n; i++)
    {
            if(i % 2 == 0)
            {    
            k++;
            s += a[i];
            }
            else
            {
            s1 += a[i];
            t++;
            }
    }
    
           double x = (s)/(k);
           double x1 = (s1)/(t);
           double x2 = (x*x1)/2;

       printf("%.2f", x1);
       cout << " "; 

       printf("%.2f", x);
       cout << endl;

       printf("%.2f", x2);
    
    //system("pause");
    return 0;
}
