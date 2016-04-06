#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;
int main()
{
    int  xa, xb, xc, ya, yb, yc;
    double a, b, c;
    double AB, BC, AC, d, MA, MB;
    
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>xc>>yc;

    AC=sqrt((xa-xc)*(xa-xc)+(ya-yc)*(ya-yc));
    AB=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    BC=sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));

    a=abs((xa-xb)*(yc-yb)-(ya-yb)*(xc-xb));
    b=sqrt((yb-ya)*(yb-ya)+(xa-xb)*(xa-xb)); 
    d=a/b;

    MA=sqrt(AC*AC-d*d);
    MB=sqrt(BC*BC-d*d);
    
    printf("%.10f",d); cout<<endl;
    
    if (fabs(AB-(MA+MB))<0.000001) 
    {
       printf("%.10f",d); cout<<endl;
       printf("%.10f",d);
    } 
    else
    if (MA<MB)
    {
      printf("%.10f",AC); cout<<endl;
      printf("%.10f",AC);
    }
    else
    {
       printf("%.10f",d); cout<<endl;
       printf("%.10f",BC);
    }
     
    system("pause");
    return 0;
}
