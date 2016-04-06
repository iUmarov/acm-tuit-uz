#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    __int64 a[10000], n;
    bool b[10000] = {false};
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    for(int i = 0; i < n - 1; i++)
    {
            for(int j = i + 1; j < n; j++)
            if(a[i] == a[j])
            b[j] = true;
    }
    
    for(int i = 0; i < n; i++)
    if(b[i] == false)
    cout << a[i] << " ";
    
    //getch();
    return 0;
}
    
