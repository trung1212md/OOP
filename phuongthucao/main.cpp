#include <bits/stdc++.h>

using namespace std;
class AOHOA
{
public:
    virtual void xuat();

};
class A: public AOHOA
{
protected:
    int a;
public:
    void xuat();

};
class B:public A
{
protected:
    int b;
public:
    void xuat();

};
class C:public B
{
    int c;
public:
    void xuat();

};
void A::xuat()
{
    cout <<"phuong thuc xuat  A"<<endl;

}
void B::xuat()
{
    cout <<"phuong thuc xuat  B"<<endl;

}
void C::xuat()
{
    cout <<"phuong thuc xuat  C"<<endl;

}
int main()
{
    A x;
    B y;
    C z;
    A*p;
    p=&x; p->xuat();
    p=&y; p->xuat;
    p=&z; p->xuat();

}
