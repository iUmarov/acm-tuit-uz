// 1. Lift harakatadagi manzilga qolgan minimal chiqishi kerak bo'lgan etaj aniqlanadi t=(n-1)%k 
// 2. agar liftni yana harakatlantrsa minimal tushishi k-k bo'lgan etaj aniqlanadi  p = k - t
// 3. agar liftni yana harakatlantieish imkoni bo'lsa m-n>=p uni qaysi biri arzon tushishi aniqlanadi
// 4. agar tepadan pastga tushish arzon bo'lsa p ninig yuzlanganini aks holda t ning ikkiyuzlanganini chiqaramiz
// 5. agar liftni tepaga harakatlantirish imkoni bo'lmasa m-n<p unda t ning ikkiyuzlanganini chiqaramiz

#include<iostream>
using namespace std;
int main()
{
    int m,n,k,t,p;
    cin>>m>>n>>k;
    
    t=(n-1)%k;
    p=k-t;
    
    if(m-n>=p)
    {
    if(200*t <= 100*p) 
    cout<<200*t; 
    else 
    cout<<100*p;
    } 
    
    else cout<<200*t;
}
    
