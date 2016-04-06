// Muallif: UMAROV Islom
// Sana: 2013.01.01
// Maqsad: 0045 masalani yechish

#include<iostream>
using namespace std;
int main()
{
  __int64 a[100001], n, i, min, k, j;
  
  cin >> n;
  
  for(i = 0; i < n; i++) 
  cin >> a[i];
  
  for(i = 0; i < n; i++)
  {
    min = a[i]; 
    k = i;
    for(j= i + 1; j < n; j++)
    if (min > a[j]) 
    {
                  min = a[j]; 
                  k = j;
    }
    a[k] = a[i]; 
    a[i] = min; // i - indeksli massivga [i;n) oraliqdagi minimalni, i + 1 ga [i+1; n - 1) oraliqdagi minimalni o'zlashtirib boramiz bo'ldi :) . . .
  }
  
  for(i = 0; i < n; i++) 
  cout << a[i] << " ";
  
  system("pause");
  return 0;
}
