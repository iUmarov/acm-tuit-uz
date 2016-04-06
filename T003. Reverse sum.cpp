#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    char a1[100], a[100], b1[100], s1[100]; 
    string s2;
    float s;
    int t = 0, i;
    
    cin >> a1 >> b1;
    
    for(int i = 0; i < strlen(a1) ; i++)
    {       
            if(a1[i] != ',') // sonni o'zini boshqa massivga olamiz
            a[t++] = a1[i];
    }
    
    a[t] = '\0'; 
    
    strrev(a);
    strrev(b1);
    
    s = atof(a) + atof(b1);
    
    sprintf(s1, "%f", s); // float to char[massiv]
    
    strrev(s1); // reverse char[massiv]
    
    s2.assign(s1, strlen(s1)); // char[massiv] to string
    //cout << s2 << endl;
    
    for(i = 0; i < s2.length(); i++)
    {
            if(s2[i] != '0' && s2[i] != '.') // boshidan birinch sonni uchratishi bn sikldan chiqib ketamiz
            {
                     //cout << i << endl;;
                     break;
            }
    }
    
    cout << s2.substr(i) << endl; // boshidan boshlab birinch songachasatrni kesamiz

    system("pause");
    return 0;
}
