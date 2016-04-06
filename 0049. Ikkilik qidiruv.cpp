#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i, j, n, k, l, a[1000], b[1000];
    cin >> n >> k;
    
    for(i = 1; i <= n; i++)
    cin >> a[i];
    
    for(i = 1; i <= k; i++)
    cin >> b[i];
    
    for(i = 1;i <= k; i++)
    {
       l = 0;
       
       for(j = 1; j <= n; j++) // a[i] element b massivning xamma elementi bn solishtirib chiqiladi agar b massivda nechta bo'lsa ham bo'sa (l > 0) yes chiqaramiz  
       if(b[i] == a[j]) 
       l++;
       
       if(l == 0) 
       cout<<"NO\n";
       else 
       cout<<"YES\n";
    }
  
    system("pause");
    return 0;
}
