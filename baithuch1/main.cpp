#include <iostream>

using namespace std;
class PhanSo
{
    int a,b;
public :
    void nhap();
    void xuat();
    PhanSo operator +(PhanSo Q);
    PhanSo operator -();
   float operator !();

};
void PhanSo::nhap()
{
    cout <<" nhap a,b";cin >>a>>b;

}
void PhanSo::xuat()
{
    cout <<a<<"/"<<b;

}
PhanSo PhanSo::operator+(PhanSo Q)
{
    a=a*Q.b+Q.a+b;
    b=b*Q.b;
    return *this;

}
PhanSo PhanSo::operator-()
{
    a=-a;
    return *this;
}
float PhanSo::operator!()
{

    return (float) a/b;
}
int main()
{
    PhanSo x,y;
    x.nhap();
    y.nhap();

    PhanSo k;
    k=x+y;
    k.xuat();

    k=-k;
    k.xuat();

    cout <<"k="<<!k;


}
