#include<iostream>

using namespace std;
int main()
{
  int i, j, n, k = 0;
  
  cin >> n;
  
  for(i = 0; i < 100; i++)
  for(j = 0; j < 100; j++)
  if (n == i + j) 
  k++;
  
  cout << k;
  
  //system("pause");
  return 0;
}
