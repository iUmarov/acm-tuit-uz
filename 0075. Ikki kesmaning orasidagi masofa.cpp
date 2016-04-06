#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

bool Boudingbox(double , double , double , double);
double cw(double ,double ,double ,double ,double ,double);

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double c[10], min, a, a1, b, d1, d, AB, AC, AD, BC, BD, MA, MB, NA, NB;
    double a2, a3, b1, d2, d3, CD, CA, CB, DA, DB, KC, KD, LC, LD;
    int k = 0;
    
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    
    if((cw(x1, y1, x2, y2, x3, y3) * cw (x1, y1, x2, y2, x4, y4) <= 0 ) && 
    (cw(x3, y3, x4, y4, x1, y1) * cw (x3, y3, x4, y4, x2, y2) <= 0 ) &&
    (Boudingbox(x1, x2, x3, x4) == true) &&
    (Boudingbox(y1, y2, y3, y4) == true))
    {
    cout << 0;
    //system("pause");
    return 0;
    }
    else
    {
        ////////////// C nuqtadan AB kesmagacha
        
        AB = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        
        AC = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
        BC = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
        
        a = fabs((x1-x2)*(y3-y2)-(y1-y2)*(x3-x2));
        b = sqrt((y2-y1)*(y2-y1)+(x1-x2)*(x1-x2)); 
        
        d = a / b;
        
        MA = sqrt(AC*AC-d*d);
        MB = sqrt(BC*BC-d*d);
        
        if(fabs(AB-(MA+MB)) < 0.000001)
        c[k++] = d;
        else
        {
           if (MA < MB)
           c[k++] = AC;
           else
           c[k++] = BC;
        }
        
        /////////////// D nuqtadan AB kesmagacha
        
        AD = sqrt((x4-x1)*(x4-x1) + (y4-y1)*(y4-y1));
        BD = sqrt((x4-x2)*(x4-x2) + (y4-y2)*(y4-y2));
        
        a1  = fabs((x1-x2)*(y4-y2)-(y1-y2)*(x4-x2));
        
        d1 = a1 / b;
        
        NA = sqrt(AD*AD-d1*d1);
        NB = sqrt(BD*BD-d1*d1);
        
        if(fabs(AB-(NA+NB)) < 0.000001)
        c[k++] = d1;
        else
        {
           if (NA < NB)
           c[k++] = AD;
           else
           c[k++] = BD;
        }
        
        ////////////// A nuqtadan CD kesmagacha
        
        CD = sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4));
        
        CA = AC;
        DA = AD;
        
        a2 = fabs((x3-x4)*(y1-y3)-(y3-y4)*(x1-x3));
        b1 = sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4));
        d2 = a2 / b1;
        
        KD = sqrt(CA*CA-d2*d2);
        KC = sqrt(DA*DA-d2*d2);
        
        if(fabs(CD-(KD+KC)) < 0.000001)
        c[k++] = d2;
        else
        {
           if (KD < KC)
           c[k++] = CA;
           else
           c[k++] = DA;
        }
        
        /////////////// B nuqtadan CD kesmagacha
        
        CB = BC;
        DB = BD;
        
        a3 = fabs((x3-x4)*(y2-y3)-(y3-y4)*(x2-x3));
        d3 = a3 / b1;
        
        LD = sqrt(CB*CB-d3*d3);
        LC = sqrt(DB*DB-d3*d3);
        
        if(fabs(CD-(LD+LC)) < 0.000001)
        c[k++] = d3;
        else
        {
           if (LD < LC)
           c[k++] = CB;
           else
           c[k++] = DB;
        }
    }
    
        min = c[0];
    
        for(int i = 1; i < k; i++)
        if(min > c[i])
        min = c[i];
        
        printf("%.10f", min);
        
    system("pause");
    return 0;
}

bool Boudingbox(double a, double b, double c, double d)
{
     if(a > b)
     {
          double t = a;
          a = b;
          b = t;
     }
     
     if(c > d)
     {
          double t = c;
          c = d;
          d = t;
     }
     
     if(max(a, c) <= min(b, d))
     return 1;
     else
     return 0;
}

double cw(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
}
