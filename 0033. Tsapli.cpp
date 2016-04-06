#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    double a, b;
    double max1, min1;
    
    cin >> a >> b;
    
    max1 = min(a, b);
    min1 = ceil(max(a, b) / 2);
    
    
    printf("%.f", min1);
    cout << " ";
    printf("%.f", max1);
    
    //system("pause");
    return 0;
}
