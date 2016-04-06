// Muallif: UMAROV Islom
// Sana: 2013.01.01
// Maqsad: 0061. Heap mi? masalani ishlash

#include <iostream>
using namespace std;
int main()
{
    __int64 a[100000] = { 0 }, n;
    bool heap = true;
    
    cin >> n;
    for(int i = 1; i <= n; i++)
    cin >> a[i];
    
    for(int i = 1; i <= n; i++)
    {
            if(2*i <= n)
            if(!(a[i] <= a[2*i]))
            heap = false;
            
            if((2*i + 1) <= n)
            if(!(a[i] <= a[2*i + 1]))
            heap = false;
    }
    
    if(heap)
    cout << "YES";
    else
    cout << "NO";
    
    //system("pause");
    return 0;
}
