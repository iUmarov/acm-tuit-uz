#include <iostream>
using namespace std;

int main()
{
    double a[10], b[10], P = 0;
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    
    for(int i = 0; i < n; i++)
    cin >> b[i];
    
    for(int i = 0; i < n; i++)
    P += a[i] * b[i];
    
    printf("%.2f",P);
    
    //system("pause");
    return 0;
}
