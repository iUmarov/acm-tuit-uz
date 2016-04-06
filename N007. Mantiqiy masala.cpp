#include <iostream>
using namespace std;

int main()
{
    double x, y, R;
    
    cin >> x >> y >> R;
    
    if((x * x + y * y <= R * R) && (y >= x * x))
    cout << "Yes";
    else
    cout << "No";
    
    //system("pause");
    return 0;
}
