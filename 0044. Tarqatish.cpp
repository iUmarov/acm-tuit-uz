// Massivni o'sadigan (kamaymaydigan) tartibda joylash so'ralgan.

#include <iostream>

using namespace std;

int main()
{
    __int64 n;
    cin >> n;

    __int64 *a = new __int64[n]; // Dinamik massiv hosil qilish

    for(int k = 0; k < n; k++) // Massiv elementlarini kiritish
    cin >> a[k];  


    for(int i = 0; i < n - 1; i++) // 0 - elementdan boshlab n - 1 - elementgacha undan keyingi sonlar bn solishtirib chiqish un sikl ochamiz.
    {
        for(int j = i + 1; j < n; j++) // j + 1 - elementdan n - elementgacha har bir i elementni tekshirish un sikl.
        {
            if(a[i] > a[j]) // agar i - indeksli element j - indeksli elementdan katta bo'lsa o'rnini almashtiramiz. qisqasi i ning o'rniga undan eng kichigini qo'yamiz
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    for(int i = 0; i < n; i++)
    cout << a[i] << " ";

    delete []a; // Xotirani bo'shatish.
    
    system("pause");
    return 0;
}
