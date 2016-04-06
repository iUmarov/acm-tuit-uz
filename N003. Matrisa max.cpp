#include <iostream>

using namespace std;

int main()
{
    double a[10][10], max;
    int n, m, ustun, satr;

    cin >> n;
    cin >> m;

    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    cin >> a[i][j];

    max = a[0][0];
    ustun = 0;
    satr = 0;

    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    {
        if(max < a[i][j])
        {
            max = a[i][j];
            ustun = j;
            satr = i;
        }
    }
    
    printf("%.2f", max); cout << " ";
    printf("%d", satr); cout << " ";
    printf("%d", ustun);
    
    //system("pause");
    return 0;
}
