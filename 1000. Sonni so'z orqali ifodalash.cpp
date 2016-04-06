#include<iostream>
using namespace std;
unsigned __int64 M=1000;
void out(unsigned __int64 k)
{
     cout<<(k==1?"bir":k==2?"ikki":k==3?"uch":k==4?"to'rt":k==5?"besh":k==6?"olti":k==7?"yetti":k==8?"sakkiz":"to'qqiz");
}
void out1(unsigned __int64 n)
{
     if(n>=100) { out(n/100); cout<<" yuz";n%=100; if(n)cout<<" ";}
     if(n>=90 ) { cout<<"to'qson";  n-=90;   if(n)cout<<" ";}
     if(n>=80 ) { cout<<"sakson";   n-=80;   if(n)cout<<" ";}
     if(n>=70 ) { cout<<"yetmish";  n-=70;   if(n)cout<<" ";}
     if(n>=60 ) { cout<<"oltmish";  n-=60;   if(n)cout<<" ";}
     if(n>=50 ) { cout<<"ellik";    n-=50;   if(n)cout<<" ";}
     if(n>=40 ) { cout<<"qirq";     n-=40;   if(n)cout<<" ";}
     if(n>=30 ) { cout<<"o'ttiz";   n-=30;   if(n)cout<<" ";}
     if(n>=20 ) { cout<<"yigirma";  n-=20;   if(n)cout<<" ";}
     if(n>=10 ) { cout<<"o'n";      n-=10;   if(n)cout<<" ";}
     if(n)out(n);
}
void ans(unsigned __int64 n)
{
     if(n>=M*M*M*M*M*M){ out1(n/(M*M*M*M*M*M)); cout<<" kvadrillion"; n=n%(M*M*M*M*M*M);if(n)cout<<" ";}
     if(n>=M*M*M*M*M  ){ out1(n/(M*M*M*M*M  )); cout<<" kvintillion"; n=n%(M*M*M*M*M  );if(n)cout<<" ";}
     if(n>=M*M*M*M    ){ out1(n/(M*M*M*M    )); cout<<" trillion";    n=n%(M*M*M*M    );if(n)cout<<" ";}
     if(n>=M*M*M      ){ out1(n/(M*M*M      )); cout<<" milliard";    n=n%(M*M*M      );if(n)cout<<" ";}
     if(n>=M*M        ){ out1(n/(M*M        )); cout<<" million";     n=n%(M*M        );if(n)cout<<" ";}
     if(n>=M          ){ out1(n/(M          )); cout<<" ming";        n=n%(M          );if(n)cout<<" ";}
     if(n)out1(n);
}
int main()
{
    unsigned __int64 n;
    cin>>n;
    ans(n);
    system("pause");
    //return 0;
}
