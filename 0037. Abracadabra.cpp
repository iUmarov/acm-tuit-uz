#include <iostream>
#include <string.h>

using namespace std;

int la[200002], lb[200002];
char a[200002][55], b[200002][55];
 
int main()
{
    int n, m, i, j, k, s, s1, s2;

    cin >> n;

    for(i = 0; i < n; i++) 
    {
          cin >> a[i]; 
          la[i] = strlen(a[i]);
    }
 
    cin >> m;
    
    for(i = 0; i < m; i++)
    { 
          cin >> b[i]; 
          lb[i] = strlen(b[i]);
    }
 
   for(j = 0; j < m; j++)
   {
   s = 0;
  
     for(i = 0; i < n; i++)
     {
           if (la[i] >= lb[j] && a[i][0] == b[j][0] && a[i][la[i] - 1] == b[j][lb[j] - 1])
           {
           s1 = 0; 
           s2 = 0;
      
              for(k = 0;k < lb[j]; k++)
              {
                 if (a[i][k] == b[j][k]) 
                 s1++;
        
                 if (a[i][la[i] - lb[j] + k] == b[j][k]) 
                 s2++;
              }
 
                    if (s1 == lb[j] && lb[j] == s2) 
                    s++;
            }
     }
     
  cout << s << endl;
  }
 
  //system("pause");
  return 0;
}
