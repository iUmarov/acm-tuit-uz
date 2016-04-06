#include<iostream.h>

using namespace std;

int main()
{
    unsigned int n; 
    
    cin >> n;
    
    for(int i = 2; i * i <= n; i++)
    {
            if(n % i)
            continue;
            
            while(!(n % i))
            {
                      n /= i;
                      if(n > 1)
                      cout << i << "*";
                      else
                      cout << i;
            }
    }
    
    if(n > 1)
    cout << n << endl;
    
    //system("pause");
  return 0;
}
