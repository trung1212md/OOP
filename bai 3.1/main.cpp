#include <bits/stdc++.h>
using namespace std;

class DATE
{
    int D;
    int M;
    int Y;
public:
    void nhap();
    void xuat();

};
void DATE::nhap()
{
    cout <<"nhap ngay";cin >>D;
    cout <<"nhap thang";cin >>M;
    cout <<"nhap nam";cin >>Y;

}
void DATE::xuat()
{
    cout <<"ngay"<<D<<"/thang"<<M<<"/nam"<<Y<<endl;

}
class NHANSU
{
    char Manhansu[30];
    char Hoten[30];
    DATE NS;
public:
    void nhap();
    void xuat();

};
void NHANSU::nhap()
{
    cout <<"ma khach hang";fflush(stdin);cin.getline(Manhansu,30);
    cout <<"ho ten";fflush(stdin);cin.getline(Hoten,30);
    NS.nhap();

}
void NHANSU::xuat()
{
    cout <<"ma khach hang"<<Manhansu<<endl;
    cout <<"ho ten"<<Hoten<<endl;
    NS.xuat();

}
int main()
{
    NHANSU p;
    p.nhap();
    p.xuat();

}
