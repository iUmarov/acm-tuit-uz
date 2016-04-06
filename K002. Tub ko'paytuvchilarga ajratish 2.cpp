#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main()
{
    int n, d;
    
    scanf("%i", &n);
    
    for(int i = 2; i * i <= n; i++)
    {
            if(n % i != 0)
            continue;
            
            d = 0;
            while(n % i == 0)
            {
                         n /= i;
                         d++;
            }
            printf("%i %i\n", i, d);
    }
    
    if(n > 1) 
    cout << n << " " << 1;
    //printf ("%i 1 \n", n);
    
system("pause");
return 0;
}     
    
