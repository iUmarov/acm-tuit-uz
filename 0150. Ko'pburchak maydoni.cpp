#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main()
{
    __int64 x[50001], y[50001], i, n, S = 0;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    cin >> x[i] >> y[i];
    
    x[n] = x[0];
    y[n] = y[0];
    
    for(i = 0; i < n; i++)
    {
            S += (x[i]*y[i+1] - x[i+1]*y[i]);
    }
    
    S = abs(S);
    
    //cout.precision(1);
    //cout << setprecision(1) << fixed << S;
    
    printf("%.1f", float(S) / float(2));

    //system("pause");
    return 0;
}
