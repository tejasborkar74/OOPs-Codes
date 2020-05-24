#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;
int main()
{
    ofstream fout;
    fout.open("country");
    fout<<"India\n";
    fout<<"Sri Lanka\n";
    fout<<"Spain\n";

    fout.close();
    ofstream f;
    f.open("capital");
    f<<"New Delhi\n";
    f<<"Colombo\n";
    f<<"Madrid\n";
    f.close();

    ifstream f1,f2;

    f1.open("country");
    f2.open("capital");

    char ch[30];
    while(f1
          )
    {
        if(!f1.eof())
        {
        f1>>ch;
        cout<<ch;

        }

    }
    f1.close();
    f2.close();

    return 0;

}
