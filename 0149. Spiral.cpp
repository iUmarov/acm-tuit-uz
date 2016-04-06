#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100], k = 1;

    cin >> n;

    int satr  = 0, ustun = n - 1, ustunchap = 0, satrpast = n - 1;

    while(ustun >= satr)
    {
        for(int j = ustunchap; j < ustun; j++)
        a[satr][j] = 1;

        for(int i = satr; i < satrpast; i++)
        a[i][ustun] = 2;

        for(int j = ustun; j > ustunchap; j--)
        a[satrpast][j] = 1;

        for(int i = satrpast; i > satr; i--)
        a[i][ustunchap] = 1;

        satr++;
        ustun--;
        satrpast--;
        ustunchap++;
    }

    if(n % 2 == 1)
    a[n/2][n/2] = k;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        cout << a[i][j] << "\t";

        cout << "\n" ;
    }
    
    system("pause"); 
    return 0;
}
