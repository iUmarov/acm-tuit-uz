#include <iostream>
using namespace std;

int main()
{
    long long n, a, b, i;
    
    a = 1;
    b = 1;
    
    cin >> n;
    
    for(i = 3; i <= n; i++)
    {
    b = a + b; // Katta hadi
    a = b - a; // kichik hadi
    b = b % 1000000000;
    }
    
    cout << b;
    
    system("pause");
    return 0;
}
