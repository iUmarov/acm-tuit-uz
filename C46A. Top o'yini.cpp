/* Algoritim: 1 - o'lchami 100 bo'lgan massiv va n sonini e'lon qilamiz
              2 - n sonini kiritamiz 
              3 - 0-indeksli massivga 1 beramiz 
              4 - massivga n - 1 ta element kiritish uchun sikl ochamiz
              5 - massiv elementlari o'zidan avvalgi massiv elementi va bittaga oshib boruvchi sikl elementini o'zlashtiradi
              6 - agar massiv elementi n(bolalar sonidan) oshib ketsa, massiv elementi bolalar sonidan ushbu massiv elementining ayirilganini o'zlashtiradi
              7 - massiv elementlarini ekranga chiqaramiz
*/

// Muallif: UMAROV Islom
// Sana: 2013.01.01
// Maqsad: C46A masalani ishlash

#include <iostream>
using namespace std;
int main()
{
    int n, a[100];
    
    cin >> n;
    a[0] = 1;
    for(int i = 1; i < n; i++)
    {
            a[i] = a[i - 1] + i;
            
            if(a[i] > n)
            a[i] = a[i] - n; 
    }
    for(int i = 1; i < n; i++)
    {
            cout << a[i] << " ";
    }
            
    system("pause");
    return 0;
}
