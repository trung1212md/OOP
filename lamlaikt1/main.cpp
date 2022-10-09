#include <bits/stdc++.h>

using namespace std;
class Phieu;
class NCC
{
    char MANCC[30];
    char TENNC[30];
    char diachi[30];
    int SDT;
public:
    void nhap();
    void xuat();
    friend class Phieu;


};
void NCC::nhap()
{
    cout <<"ma nha cung cap";fflush(stdin);cin.getline(MANCC,30);
        cout <<"ten nha cung cap";fflush(stdin);cin.getline(TENNC,30);
            cout <<"Dia chi";fflush(stdin);cin.getline(diachi,30);
        cout <<"SDT";cin >>SDT;
}
void NCC::xuat()
{
    cout <<"ma nha cung cap"<<MANCC<<setw(20)<<"ten nha cung cap"<<TENNC<<endl;
    cout <<"Dia chi"<<diachi<<setw(20)<<"SDT"<<SDT<<endl;

}
class SanPham
{
    char MaSP[30];
    char tenSP[30];
    int soluong;
    float dongia;
public:
    void nhap();
    void xuat();
    friend class Phieu;
    friend void kt(Phieu p);
    friend void sapxep(Phieu p);


};
void SanPham::nhap()

{
    cout <<"ma san pham";fflush(stdin);cin.getline(MaSP,30);
    cout <<"ten san phma";fflush(stdin);cin.getline(tenSP,30);
    cout <<"so luong ";cin >>soluong;
    cout <<"don gia";cin>>dongia;
}
void SanPham::xuat()
{
    cout <<MaSP<<setw(20)<<tenSP<<setw(20)<<soluong<<setw(20)<<dongia<<setw(20)<<dongia*soluong<<endl;

}
class Phieu
{
    char MaPhieu[30];
    char ngaylap[30];
    NCC x;
    SanPham *a;
    int n;
public:
    void nhap();
    void xuat();
    friend void kt(Phieu p);
    friend void sapxep(Phieu p);
};
void Phieu::nhap()
{
    cout <<"ma phieu";fflush(stdin);cin.getline(MaPhieu,30);
    cout <<"ngay lap";fflush(stdin);cin.getline(ngaylap,30);
    x.nhap();
    cout <<"nhap n";cin>>n;
    a=new SanPham[n];
    for(int i=0;i<n;i++)
        a[i].nhap();


}
void Phieu::xuat()
{
    cout<<"dai hoc Victory"<<endl;
    cout<<setw(50)<<"PHIEU NHAP VAN PHONG PHAM"<<endl;
    cout <<"ma phieu"<<setw(10)<<MaPhieu<<setw(20)<<"ngay lap"<<setw(10)<<ngaylap<<endl;
    x.xuat();
    cout <<"MaSP"<<setw(20)<<"tenSanPham"<<setw(20)<<"soluong"<<setw(20)<<"dongia"<<setw(20)<<"thanh tien"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
          int s=0;
    for(int i=0;i<n;i++)
        s+=a[i].soluong*a[i].dongia;
    cout <<setw(40)<<"TONG"<<s<<endl;
    cout <<setw(20)<<"hieu truong"<<setw(20)<<"phong tai chinh"<<setw(20)<<"nguoi lap"<<endl;
}
void kt(Phieu p)
{
    int dem=0;
    for(int i=0;i<p.n;i++)
        if((p.a[i].dongia)<80)
        dem++;
    cout<<"san phma so luong nho hon80"<<dem<<endl;
}
void sapxep(Phieu p)
{
    for(int i=0;i<p.n;i++)
        for(int j=i+1;j<p.n;j++)
        if(p.a[i].dongia>p.a[i].dongia)
        swap(p.a[i],p.a[i]);

}
int main()
{
    Phieu p;
    p.nhap();
    kt(p);
    sapxep(p);
    p.xuat();
}
