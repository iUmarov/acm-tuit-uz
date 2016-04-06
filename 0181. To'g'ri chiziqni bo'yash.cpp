#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <conio.h>
 
using namespace std;
 
struct point
{
    int value;
    bool isBegin;
    point(){}
    point(int _value, bool _isBegin)
    {
              //cout << _value << endl; 
              
        value = _value;
        isBegin = _isBegin;
    }
};

int n;
vector<point> mas;
void input()
{
    cin>>n;
    mas.resize(2*n);
    int begin,end;
    for (int i=0;i<2*n;i+=2)
    {
        scanf("%d %d",&begin, &end);
        mas[i]   = point(begin,true);
        mas[i+1] = point(end,false);
    }
}
bool cmpPoint(const point &a, const point &b)
{
    if (a.value != b.value)
        return a.value < b.value;
    if (a.isBegin && !b.isBegin)
        return true;
    return false;
}
void solve()
{
    sort(mas.begin(),mas.end(),cmpPoint);
    int totalLen = 0;
    int segmAmount = 1;
    int prev = mas[0].value;
    for (int i=1;i<mas.size();i++)
    {
        if (segmAmount != 0)
            totalLen += mas[i].value - prev;
        prev = mas[i].value;
        if (mas[i].isBegin)
            segmAmount++;
        else
            segmAmount--;
    }
    cout<<totalLen;
    getch();
}
int main()
{
    input();
    solve();
    
    return 0;
}
