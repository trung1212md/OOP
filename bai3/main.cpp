#include <bits/stdc++.h>
using namespace std;

class GIAMDOC
{
private:
   char HoTen[30];
   int TUOi;
   char SDT[30];
public:
       void nhap();
       void xuat();

};
void GIAMDOC::nhap()
{
    cout << "Ho ten ";fflush(stdin);gets(HoTen);
    cout << "TUOI";cin >> TUOi;
    cout << " SO DIEN THOAI";fflush(stdin);gets(SDT);
}
void GIAMDOC::xuat()
{

    cout << "HO TEN:"<<HoTen<<endl;
    cout << "TUOI:"<<TUOi<<endl;
    cout << "SDT"<<SDT<<endl;
}
class CONGTY
{

private:
    char TENCT[30];
    char DIACHI[30];
    GIAMDOC x;
public:
    void nhap();
    void xuat();
};
void CONGTY::nhap()
{
    cout << "ten congty";fflush(stdin);gets(TENCT);
    cout << "dia chi cong ty";fflush(stdin);gets(DIACHI);
    x.nhap();
}
void CONGTY::xuat()
{
    cout << "ten cong ty"<<TENCT<<endl;
    cout <<"dia chi cong ty"<<DIACHI<<endl;
    x.xuat();

}
int main()
{
    CONGTY p;
    p.nhap();
    p.xuat();
}
