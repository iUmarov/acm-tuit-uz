#include <iostream>

using namespace std;

__int64 helper[500000], helper1[500000];
__int64 a[500000], b[500000];

void Merge(__int64 a[], __int64 b[], int left, int middle, int right)
{
         int i, j, k;
         
         i = left;
         j = middle;
         
         for (k=left;k<right;k++)
         {
             if (i==middle)
             {helper[k] = a[j++]; 
             helper1[k] = b[j-1];
             continue;}
             
             if (j==right)
             {helper[k]=a[i++]; helper1[k] = b[i-1]; continue;}
             
             if(a[i] <= a[j])
             {
                     helper[k] = a[i++];
                     helper1[k] = b[i-1];
             }
             else
             {
                 helper[k] = a[j++];
                 helper1[k] = b[j-1];
             }
             
         }
         
         for(k = left; k < right; k++)
         a[k] = helper[k];
         
         for(k = left; k < right; k++)
         b[k] = helper1[k];
         
}

void MergeSort(__int64 a[], __int64 b[], int left, int right)
{
     if(right == 1 + left)  
     return;
     
     int middle=(left+right) / 2;
     
     MergeSort(a,b,left,middle); 
     MergeSort(a,b,middle,right);
     Merge(a,b,left,middle,right);
}

int main()
{
    int n, i;
    
    cin >> n;
    
    for(i = 0; i < n; i++)  
    cin >> a[i] >> b[i];
    
    MergeSort(a,b,0,n); 

    
    for(i = 0; i < n; i++)   
    cout << a[i] << " " << b[i] << endl;
    
    //system("pause");
    return 0;
}
