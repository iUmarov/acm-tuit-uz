#include<iostream>
using namespace std;

int main()
{
    int qizil, sariq, yashil;
    
    cin >> yashil; // 1 <= yashil <= 100
    
    qizil = 1; // yashilning 1 - marta yonishida qizil ham 1 marta yonadi 
    sariq = 1; // yashilning 1 - marta yonishida sariq ham 1 marta yonadi 
    
    for(int i = 2; i <= yashil; i++) 
    {
        qizil++; // yashilning keyingi yonishlarida qizil bittaga oshib boradi
        sariq += 2; // yashilning keyingi yonishlarida sariq ikkitaga oshib boradi
    }
    
    cout << qizil <<  " " << sariq;  
      
    system("pause");
    return 0;
}
