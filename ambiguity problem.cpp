#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout<<"in A";

    }
};
class B:public virtual A
{};
class C:virtual public A
{};

class D:public B,public C
{

};
int main()
{

    D o;
    o.show();
    return 0;
}
