#include<bits/stdc++.h>

using namespace std;
class NhaCC
{
    char MaCC[30];
    char TenNCC[30];
    char diachi[30];
public:
    void nhap();
    void xuat();
    friend class Phieu;
};
void NhaCC::nhap()
{
    cout <<"nhap MA cung cap";fflush(stdin);cin.getline(MaCC,30);
    cout<<"ten nha cung cap";fflush(stdin);cin.getline(TenNCC,30);
    cout <<"dia chi"<<fflush(stdin);cin.getline(diachi,30);

}
void NhaCC::xuat()
{
    cout <<" ma NCC:  "<<MaCC<<setw(20)<<"Ten NCC "<<TenNCC<<endl;
    cout <<"dia chi   "<<diachi<<endl;

}
class Hang
{
    char Tenhang[30];
    float dongia;
    int sl;

public:
    void nhap();
    void xuat();
    friend class Phieu;
};
void Hang::nhap()
{
    cout <<"Ten hang";fflush(stdin);cin.getline(Tenhang,30);
    cout <<"don gia";cin >>dongia;
    cout <<"so luong";cin >>sl;
}
void Hang::xuat()
{
    cout <<Tenhang<<setw(20)<<sl<<setw(20)<<dongia<<dongia*sl<<endl;

}
class Phieu
{
    char Maphieu[30];
    char ngaylap[30];
    NhaCC y;
    Hang *a;
    int n;

public:
    void nhap();
    void xuat();

};
void Phieu::nhap()
{
    cout <<"nhap ma phieu";fflush(stdin);cin.getline(Maphieu,30);
    cout <<"nhap ngay lap";fflush(stdin);cin.getline(ngaylap,30);
    y.nhap();
    cout <<"nhap n";cin>>n;
    a=new Hang[n];
    for(int i=0;i<n;i++)
    {
        cout<<"nhap hang thu "<<i+1<<endl;
        a[i].nhap();

    }

}
void Phieu::xuat()
{
    cout <<setw(50)<<"PHIEU NHAP HANG"<<endl;
    cout <<"Ma phieu  "<<Maphieu<<setw(20)<<"Ngay lap  "<<ngaylap<<endl;
    y.xuat();
      cout <<"Tenhang  "<<setw(20)<<"so luong  "<<setw(20)<<"don gia  "<<"thanh tien "<<endl;;
    for(int i=0;i<n;i++)
        a[i].xuat();
    double s=0;
    for(int i=0;i<n;i++)
        s+=a[i].dongia*a[i].sl;
    cout <<setw(50)<<" Cong thanh tien"<<s<<endl;
}
int main()
{
    Phieu p;
    p.nhap();
    p.xuat();

}
