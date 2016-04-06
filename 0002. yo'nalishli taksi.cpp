// agar uchta taksidagi odamlarning o'rta arifmetigi natural son bo'lsa (a+b+c)%3 == 0 odamlarni almashtirish mumkin
// agar uchta taksidagi odamlarning o'rta arifmetigi natural son bo'lmasa (a+b+c)%3 != 0 odamlarni almashtirish mumkin emas
// topishimiz kk bo'lgan son o'rta arifmetikdan katta sonlardan o'rta arifmetikning ayirgandagi ayirmalarning yig'indisi yoki
// topishimiz kk bo'lgan son o'rta arifmetikdan kichik sonlarning, o'rta arifmetikdan ayirgandagi ayirmalarning yig'indisini topish
// ular ikkalovi teng bo'lgani un ularni barchasini qo'shib ikkiga bo'lib natijani olish ham mn. 

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, z, z1, z2, z3;
    
    cin >> a >> b >> c;
    
    d = a + b + c;
    
    if(a <= d/3)  
    z1 = d/3-a;
    else 
    z1 = a-d/3;
    
    if(b <= d/3)  
    z2 = d/3-b;
    else 
    z2 = b-d/3;
    
    if(c <= d/3)  
    z3 = d/3-c;
    else 
    z3=c-d/3;
    
    z=(z1 + z2 + z3) / 2; 
    
    if((a+b+c) % 3 == 0)
    cout << z; 
    
    if ((a+b+c) % 3 != 0 )
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    
    system("pause");
    return 0;
}     
