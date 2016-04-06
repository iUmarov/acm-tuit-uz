#include<iostream>
using namespace std;

int main()
{
    int n, k, a[1000], i, j, min;
    
    cin >> n >> k;
    
    for(i = 1; i <= n; i++)
    cin >> a[i];
    
    for(i = 1; i <= n; i++)
    if(n >= i + k - 1)  // ketma-ketlik uzunligi darchaning harakati davomidagi oxirgi nuqtasidan (boshidan) katta bo'lishi lerak
    { 
    min = a[i];  // dastlab minimal sifatida darchaning dumi turgan son olamiz
    
    for(j = i; j <= i + k - 1; j++)
    if(a[j] <= min) 
    min = a[j]; // agar dumiturgan sondan darchaning boshi, soni, qorni, bo'yni,... turgan sonlar kichik bo'lsa minimalga usha sonlar o'tadi
    
    cout << min << endl;
    }    
   
    system("pause");
    return 0;
}
