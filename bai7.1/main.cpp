#include <bits/stdc++.h>

using namespace std;
class NSX
{

    char TenNSX[30];
    char Diachi[30];
public:
    void nhap();
    void xuat();
    friend class Hang;
};
void NSX::nhap()
{
    cout <<"nhap ten nha san xuat";fflush(stdin);cin.getline(TenNSX,30);
    cout <<"dia chi ";fflush(stdin);cin.getline(Diachi,30);
}
void NSX::xuat()
{
    cout <<"ten nha san xuat"<<TenNSX<<endl;
    cout <<"dia chi"<<Diachi<<endl;

}
class DATE
{
    int D,M,Y;
public :
    void nhap();
    void xuat();
    friend class TiVI;

};
void DATE::nhap()
{

    cout <<"nhap ngay thang nam";cin>>D>>M>>Y;
}
void DATE::xuat()
{
    cout<<"ngay"<<D<<"/thang"<<M<<"/nam"<<Y<<endl;

}
class Hang
{
protected:
    char Tenhang[30];
    NSX x;
    double Dongia;
public:
    void nhap() ;
    void xuat();
    Hang();
};
void Hang::nhap()
{
    cout <<"nhap ten hang";fflush(stdin);cin.getline(Tenhang,30);
    x.nhap();
    cout <<"nhap don gia";cin>>Dongia;

}
void Hang::xuat()
{
    cout <<"ten hang"<<Tenhang<<endl;
    x.xuat();
    cout <<"don gia"<<Dongia;

}
Hang::Hang()
{
    strcpy(Tenhang,"");
     strcpy(x.TenNSX,"");
      strcpy(x.Diachi,"");
   Dongia=0;

}
class TiVI:public Hang
{
    float kichthuoc;
    DATE ngaynhap;
public:
    void nhap();
    void xuat();
    TiVI();
};
void TiVI::nhap()
{
    cout <<"kich thuoc";cin>>kichthuoc;
    Hang::nhap();
    ngaynhap.nhap();

}
void TiVI::xuat()
{
    cout <<"kich thuoc"<<kichthuoc<<endl;
    Hang::xuat();
    ngaynhap.xuat();

}
TiVI::TiVI()
{
    kichthuoc=0;
    ngaynhap.D=0;
    ngaynhap.M=0;
    ngaynhap.Y=0;


}
int main()
{
    TiVI a;
    a.nhap();
    a.xuat();
}
