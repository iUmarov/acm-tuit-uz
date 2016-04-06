#include <string.h>
#include <string>
#include <iostream>

using namespace std;
 
int main()
{
     int k;
     string s, c[5] = {"h", "e", "l", "l", "o"};
    
     getline(cin, s);

     int index = s.find(c[0]);
     
     if(index < s.length() && index >= 0)
     k = 1;
     else
     {
     cout << "NO";
     //system("pause");
     return 0;   
     }
             
     for(int i = 1; i < 5; i++)
     {
            index = s.find(c[i], index + 1);
            
            if(index < s.length() && index >= 0)
            k++;
     }
    
    if(k == 5)
    cout << "YES";
    else
    cout << "NO";
    
    //system("pause");
    return 0;   
}
