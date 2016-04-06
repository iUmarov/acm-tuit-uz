#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cin >> n; // Mexmonlar soni 2 < n < 100 yoki uchga karrali, uchga bo'lgandaigi qoldiqi 1, uchga bo'lgandaigi qoldiqi 2 bo'lishi mn; 
    
    if(n % 3 == 0) // Mexmonlar soni 3 ga karrali bo'lsa ikki kishilik xona kerak emas - 0;
    cout << 0 << " " << n / 3;
    
    if(n % 3 == 2) // Mexmonlar sonini uchga bo'lgandaigi qoldiqi 2 bo'lsa bitta ikki kishilik xona bitta kerak;
    cout << 1 << " " << n / 3;
    
    if(n % 3 == 1) // Mexmonlar sonini uchga bo'lgandaigi qoldiqi 1 bo'lsa kamida ikki kishilik xona ikkita kerak bo'ladi chunki eng kichik bunday son - 4;
    cout << 2 << " " << (n - 4) / 3;  // to'rtta odamni joylashtirib bo'lib, qolganlarni uch xonaligi joylimiz chunki uchga bo'lgandaigi qoldiqi 1 bo'ladigan barcha sonlardan 4 ni ayirsa 3 ga karrali son chiqadi( 1 dan tashqari albatta, lekin bizda n > 2 :) )
    
    system("pause");
    return 0;
}
    
