#include <iostream>

using namespace std;

__int64 a[1000001] = { 0 };

int main()
{
    __int64 M, N;
    bool f = 1;

    cin >> M >> N;

        for(int i = 1; i <= N; i++)
        for(int j = 2 * i; j <= N; j += i)
        a[j] += i;

        for(int i = M; i <= N; i++)
        {
                
        if(a[ i ] > N)
        continue;
        
                 if(i == a[a[ i ]] && i < a[ i ])
                 {
                 cout << i << " " << a[ i ] << endl;
                 f = 0;
                 }
        }

      if(f) 
      cout << "Absent";
  
  system("pause");
  return 0;
}
