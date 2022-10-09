#include <bits/stdc++.h>

using namespace std;
class Phieu;
class Nguoi
{
    char Nguoilap[30];
    char Hoten[30];
    char MaNV[30];
    char HoTenNV[30];
public:
    void nhap();
    void xuat();
    friend class Phieu;

};
void Nguoi::nhap()
{
    cout <<"Nguoi Lap:";fflush(stdin);cin.getline(Nguoilap,30);
    cout <<"Ho ten:";fflush(stdin);cin.getline(Hoten,30);
    cout <<"Ma nhan vien:";fflush(stdin);cin.getline(MaNV,30);
    cout <<"Ho ten nhan vien:";fflush(stdin);cin.getline(HoTenNV,30);
}
void Nguoi::xuat()
{
    cout <<"Nguoi Lap:"<<setw(20)<<"Nguoilap"<<setw(20)<<"Ho ten:"<<setw(20)<<Hoten<<endl;
    cout <<"Ma nhan vien:"<<setw(20)<<MaNV<<setw(20)<<"Ho ten nhan vien:"<<HoTenNV<<endl;

}
class CONG
{
     char Maluot[30];
    int Ngay;
    int Gio;
    int Phut;
public:
    void nhap();
    void xuat();
    friend class Phieu;
    friend void sua(Phieu &p);
    friend void sapxep(Phieu p);
    friend void kt(Phieu p);


};
void CONG::nhap()
{
    cout <<"Ma luot:";fflush(stdin);cin.getline(Maluot,30);
    cout <<"ngay";cin>>Ngay;
    cout <<"gio";cin>>Gio;
    cout <<"Phut";cin>>Phut;

}
void CONG::xuat()
{
    cout <<Maluot<<setw(20)<<Ngay<<setw(20)<<Gio<<setw(20)<<Phut<<endl;

}
class Phieu
{
    char Maphieu[30];
    char Ngaylap[30];
    Nguoi x;
    CONG *a;
    int n;
public:
    void nhap();
    void xuat();
    friend void sua(Phieu &p);
    friend void sapxep(Phieu p);
    friend void kt(Phieu p);

};
void Phieu::nhap()
{
     cout <<"ma phieu:";fflush(stdin);cin.getline(Maphieu,30);
      cout <<"Ngay lap:";fflush(stdin);cin.getline(Ngaylap,30);
      x.nhap();
      cout <<"nhap n";cin>>n;
      a=new CONG[n];
      for(int i=0;i<n;i++)
        a[i].nhap();

}
void Phieu::xuat()
{
    cout <<"DIEN LANH FOCO"<<endl;
    cout <<setw(50)<<"BANG CHAM CONG THANG 11"<<endl;
    cout <<"Ma phieu"<<setw(20)<<Maphieu<<setw(20)<<"Ngay lap"<<Ngaylap<<endl;
    x.xuat();
     cout <<"Maluot"<<setw(20)<<"Ngay"<<setw(20)<<"Gio"<<setw(20)<<"Phut"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
    cout <<setw(20)<<"tong so ngay cong"<<n<<"so ngay di tre:2"<<endl;
    cout <<"TRUONG PHONG kd"<<setw(20)<<"NGUOI LAP"<<endl;

}
void sua(Phieu &p)
{
    for(int i=0;i<p.n;i++)
        if(strcmp(p.a[i].Maluot,"K002")==0)
        p.a[i].Gio=8;

}
void sapxep(Phieu p)
{
    for(int i=0;i<p.n;i++)
        for(int j=i+1;j<p.n;j++)
        if(p.a[i].Ngay>p.a[j].Ngay)
        swap(p.a[i],p.a[j]);
}
void kt(Phieu p)
{
    for(int i=0;i<p.n;i++)
    {
        if(p.a[i].Ngay==15)
        cout <<"co di lam"<<endl;
        else
        cout <<"ko di lam";




    }


}
int main()
{
    Phieu p;
    p.nhap();
    sua(p);
    sapxep(p);
    p.xuat();
    kt(p);
}
