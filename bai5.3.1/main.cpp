#include <bits/stdc++.h>

using namespace std;
class Phieu;
class Nhanvien
{
    char Nhanvienkk[30];
    char chucvu[30];
    char kiemkeTP[30];
    char Maphong[30];
    char truongphong[30];
public:
    void nhap();
    void xuat();
    friend class Phieu;
};
void Nhanvien::nhap()
{
    cout <<"nhan vien kiem ke:";fflush(stdin);cin.getline(Nhanvienkk,30);
    cout <<"Chuc vu:";fflush(stdin);cin.getline(chucvu,30);
    cout <<"kiem ke tai phong:";fflush(stdin);cin.getline(kiemkeTP,30);
    cout <<"ma phong:";fflush(stdin);cin.getline(Maphong,30);
    cout <<"truong phong:";fflush(stdin);cin.getline(truongphong,30);
}
void Nhanvien::xuat()
{
    cout <<"nhan vien kiem ke:"<<Nhanvienkk<<setw(20)<<"Chuc vu:"<<chucvu<<endl;
   cout <<"kiem ke tai phong:"<<kiemkeTP<<setw(20)<<"ma phong:"<<Maphong<<endl;;
   cout <<"truong phong:"<<truongphong<<endl;;
}
class Taisan
{
    char Tentaisan[30];
    int soluong;
    char tinhtrang[30];
public:
    void nhap();
    void xuat();
    friend class Phieu;
    friend void sua(Phieu &p);
    friend void sapxep(Phieu p);
};
void Taisan::nhap()
{
    cout <<"Ten tai san:";fflush(stdin);cin.getline(Tentaisan,30);
    cout <<"so luong";cin>>soluong;
    cout <<"Tinh trang:";fflush(stdin);cin.getline(tinhtrang,30);

}
void Taisan::xuat()
{
    cout <<Tentaisan<<setw(30)<<soluong<<setw(30)<<tinhtrang<<endl;

}
class Phieu
{

    char Maphieu[30];
    char ngaykk[30];
    Nhanvien x;
    Taisan *a;
    int n;

public:
    void nhap();
    void xuat();
    friend void sua(Phieu &p);
    friend void sapxep(Phieu p);
};
void Phieu::nhap()
{
 cout <<"Ma phieu:";fflush(stdin);cin.getline(Maphieu,30);
    cout <<"ngay kiem ke:";fflush(stdin);cin.getline(ngaykk,30);
    x.nhap();
    cout <<"nhap n";cin>>n;
    a=new Taisan[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
}
void Phieu::xuat()
{
    cout<<setw(50)<<"PHIEU KIEM KE TAI SAN"<<endl;
    cout <<"Ma phieu:"<<setw(30)<<Maphieu<<setw(30)<<"ngay kiem ke:"<<ngaykk<<endl;
    x.xuat();
    cout <<"Tentaisan"<<setw(30)<<"soluong"<<setw(30)<<"tinhtrang"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
    int s=0;
    for(int i=0;i<n;i++)
        s+=a[i].soluong;
    cout <<"so tai san da kiem ke"<<n<<setw(30)<<"Tong so luong"<<s<<endl;
}
void sua(Phieu &p)
{
    for(int i=0;i<p.n;i++)
        if(strcmp(p.a[i].Tentaisan,"May vi tinh")==0)
        p.a[i].soluong=20;

}
void sapxep(Phieu p)
{
    for(int i=0;i<p.n;i++)
        for(int j=i+1;j<p.n;j++)
        if(p.a[i].soluong>p.a[j].soluong)
        swap(p.a[i],p.a[j]);

}
int main()
{
    Phieu p;
    p.nhap();
    sua(p);
    sapxep(p);
    p.xuat();
}
