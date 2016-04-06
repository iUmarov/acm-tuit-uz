#include <string.h>
#include <string>
#include <iostream>

using namespace std;
 
int main()
{
    int n, k = 0;
    char a[100];
    string c[100], x, z[100];
    
    gets(a);
    n = atoi(a);
    
    for(int i = 0; i < n; i++)
    {
            getline(cin, c[i]);
            c[i] += " ";
    }
    
    for(int i = 0; i < n; i++)
    {
            x.clear();
            
            for(int j = 0; j < c[i].length(); j++)
            {
            if(c[i][j] == ' ')
            {
                z[k++] = x;
                x.clear();
            }
            else
            x += c[i][j];
            }
    }
    
    /*for(int i = 0; i < k; i++)
    cout << z[i] << endl;*/
    
    int index[100];
    int r = 0;
    
    for(int i = 0; i < k; i++)
    if(z[i] == "rat")
    index[r++] = i;
    
    for(int i = 0; i < k; i++)
    if(z[i] == "child" || z[i] == "woman")
    index[r++] = i;
    
    for(int i = 0; i < k; i++)
    if(z[i] == "man")
    index[r++] = i;
    
    for(int i = 0; i < k; i++)
    if(z[i] == "captain")
    index[r++] = i;
    
    for(int i = 0; i < n; i++)
    cout << z[index[i] - 1] << endl;
    
   //system("pause");
   return 0;   
}
