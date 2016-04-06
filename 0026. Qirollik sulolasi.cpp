#include <iostream>

using namespace std;

int a[100001], n, b[100001];

/*
5
-1 1 2 1 4
2 
1 2
4 7
*/

/*
10
5 5 6 3 3 -1 9 7 6 5
20
8 1
2 1
3 2
6 2
3 2
1 1
7 2
1 1
8 1
6 1
10 2
7 1
8 1
7 1
5 2
10 1
10 1
10 2
4 1
9 2
*/

int func(int v, int k)
{
    int s = 0, l = 0;
    bool avlod_bor = false;
    
    for(int i = 1; i <= n; i++)
    if(a[i] == v)  
    {
            if(k == 1) 
            s++;
            else  
            s += func(i, k-1); 
            
            avlod_bor = true; 
    }
    
    if(avlod_bor == false) // agar sulola a'zolari orasida v bo'lmasa sulolada avlodi yo'q bo'ladi
    return 0; // avlodi yo'q bo'lsa funksiya nol qiymat qaytaradi
    else 
    return s; 
}

int main()
{
    int m, v, k;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++) 
    cin >> a[i];
    
    cin >> m;
    
    for(int i = 1;i <= m; i++) 
    { 
            cin >> v >> k; 
            b[i] = func(v,k); // sulolaning v a'zolarini k avlod orqali avlodlari sonini b massivga yig'amiz
    }
    
    for(int i = 1;i <= m; i++) 
    cout << b[i] << endl;
    
    //system("pause");
    return 0;
}
