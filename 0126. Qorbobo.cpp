#include<iostream>
using namespace std;
int main()
{
    int n,m,k,a[100],i,j,s1,s;
    cin>>n>>m>>k;
    for(i=1;i<=m+k;i++) cin>>a[i];
    s1=n-m-k;
    cout<<s1<<endl;
   if(s1!=0){
              for(i=1;i<=n;i++){s=0;
              for(j=1;j<=m+k;j++) 
              if(a[j]!=i) s++;
              if(s==m+k)
              cout<<i<<" ";}
              }
    //system("pause");
    return 0;
}
