#include <iostream>
using namespace std;

__int64 inv = 0, helper[1000001];

void Merge(__int64 a[], __int64 left, __int64 middle, __int64 right)
{
         __int64 i, j, size;    
         
         i = left;
         j = middle;
         
         size = middle - left;

         for (__int64 k=left;k<right;k++)
         {
             if (i==middle)
             {helper[k]=a[j++]; continue;}
             
             if (j==right)
             {helper[k]=a[i++]; continue;}
             
             if(a[i] <= a[j])
             {
                     helper[k] = a[i++];
                     size--;
             }
             else
             {
                 helper[k] = a[j++];
                 inv += size;
             }
         }
         
         for(__int64 k = left; k < right; k++)
         a[k] = helper[k];
}

void MergeSort(__int64 a[], __int64 left, __int64 right)
{
     if(right == 1 + left)  
     return;
     
     int middle=(left+right) / 2;
     
     MergeSort(a,left,middle); 
     MergeSort(a,middle,right);
     Merge(a,left,middle,right);
}

int main()
{
    __int64 n, i;
    __int64 a[50000];
    
    cin >> n;
    
    for(i = 0; i < n; i++)  
    cin >> a[i];
    
    MergeSort(a,0,n); 
    
    cout << inv << endl;
    
    //system("pause");
    return 0;
}
