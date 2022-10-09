#include <bits/stdc++.h>
using namespace std;
class Phieu;
class Nhanvien
{
    char NVKT[30];
    char Chucvu[30];
public:
    void nhap();
    void xuat();
    friend class Phieu;
};
void Nhanvien::nhap()
{
    cout <<"ma phieu";fflush(stdin);cin.getline(NVKT,30);
    cout <<"chuc vu";fflush(stdin);cin.getline(Chucvu,30);

}
void Nhanvien::xuat()
{
    cout <<"nhan vien kiem ke "<<NVKT<<setw(20)<<" chuc vu"<<Chucvu<<endl;
}

class Phong
{
    char KKTP[30];
    char Maphong[30];
    char Truongphong[30];
public:
    void nhap();
    void xuat();
    friend class Phieu;

};
void Phong::nhap()
{
    cout <<" kiem ke tai phong";fflush(stdin);cin.getline(KKTP,30);
    cout <<"Ma phong";fflush(stdin);cin.getline(Maphong,30);
    cout <<"truong phong";fflush(stdin);cin.getline(Truongphong,30);

}
void Phong::xuat()
{
    cout <<"kie, ke tai phong "<<KKTP<<setw(30)<<" ma phong "<<Maphong<<endl;
    cout <<"truong phong "<<Truongphong<<endl;

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
    friend void sua(Phieu P);
    friend void sapxep(Phieu p);

};
void Taisan::nhap()
{
    cout <<"nhap ten tai san";fflush(stdin);cin.getline(Tentaisan,30);
    cout <<"so luong ";cin >>soluong;
    cout<<"tinh tranh";fflush(stdin);cin.getline(tinhtrang,30);

}
void Taisan::xuat()
{
    cout <<Tentaisan<<setw(20)<<soluong<<setw(20)<<tinhtrang<<endl;

}
class Phieu
{
    char Maphieu[30];
    char ngaykiemke[30];
    Nhanvien b;
    Phong c;
    Taisan *a;
    int n;
public:
    void nhap();
    void xuat();
    friend void sua(Phieu p);
    friend void sapxep(Phieu p);

};
void Phieu::nhap()
{
    cout <<"ma phieu";fflush(stdin);cin.getline(Maphieu,30);
    cout <<"ngay kiem ke:";fflush(stdin);cin.getline(ngaykiemke,30);
    b.nhap();
    c.nhap();
    cout <<"nhap  n tai san";cin >>n;
    a=new Taisan[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
}
void Phieu::xuat()
{
    cout <<setw(50)<<"PHIEU KIEM KE TAI SAN"<<endl;
    cout <<"Ma phieu "<<Maphieu<<setw(20)<<"ngay kiem ke "<<ngaykiemke<<endl;
    b.xuat();
    c.xuat();
    cout <<"Ten tai san"<<setw(15)<<"so luong"<<setw(15)<<"tinh trang"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
    int s=0;

    for(int i=0;i<n;i++)
        s+=a[i].soluong;

    cout <<"so tai san kiem ke:"<<n<<setw(20)<<"to so luong"<<s<<endl;

}
void sua(Phieu p)
{
    for(int i=0;i<p.n;i++)
    {
        if(strcmp(p.a[i].Tentaisan,"may vi tinh")==0)
            p.a[i].soluong==20;
    }
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
    p.xuat();
    sua(p);
    sapxep(p);
    p.xuat();

}
