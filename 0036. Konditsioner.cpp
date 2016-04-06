#include<string.h>
#include<string>
#include<iostream>

using namespace std;
 
int main()
{
    string c;
    string s = "freeze", st = "heat", str = "auto", stri = "fan";
    char a[10], b[10];
    string ab, z[100], x;
    int k = 0;
    
    getline(cin, ab);
    
    ab += " ";
    
    for(int i = 0; i < ab.length(); i++)
    {
            if(ab[i] == ' ')
            {
                z[k++] = x;
                x.clear();
            }
            else
            x += ab[i];
    }
                 
    getline(cin , c);
    
    strcpy(a, z[0].c_str());
    strcpy(b, z[1].c_str());
        
    if(c == s)
    {
                      if(atoi(b) < atoi(a))
                      cout << b;
                      else
                      cout << a;
                      
                      //system("pause");
                      return 0;  
    }
    
    if(c == st)
    {
                      if(atoi(b) > atoi(a))
                      cout << b;
                      else
                      cout << a;
                      
                      //system("pause");
                      return 0; 
    }
    
    if(c == str)
    {
                      cout << b;
                      //system("pause");
                      return 0; 
    }
    
    if(c == stri)
    {  
                    cout << a;
                    //system("pause");
                    return 0; 
    }
    
    //system("pause");
   return 0;   
}
