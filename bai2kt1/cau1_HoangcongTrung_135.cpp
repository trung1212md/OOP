#include <bits/stdc++.h>

using namespace std;
class Phieu;
class NV
{
    char MANV[30];
    char HOTEN[30];
    char MAP[30];
public:
    void nhap();
    void xuat();
    friend class Phieu;

};
void NV::nhap()
{
    cout <<"nhap ma nhan vien";fflush(stdin);cin.getline(MANV,30);
    cout <<"nhap ho ten";fflush(stdin);cin.getline(HOTEN,30);
    cout <<"nhap ma phong";fflush(stdin);cin.getline(MAP,30);
}
void NV::xuat()
{
    cout <<"MA NHAN VIEN"<<MANV<<setw(20)<<"HO VA TEN:"<<HOTEN<<setw(20)<<"MA PHONG BAN"<<MAP<<endl;


}
class Phong
{
    char TENPHONG[30];
    int ThangL,Nam;
public:
    void nhap();
    void xuat();
    friend class Phieu;



};
void Phong::nhap()
{
    cout <<"nhap ten phong:";fflush(stdin);cin.getline(TENPHONG,30);
    cout <<"nhap thang luong";cin>>ThangL;
    cout <<"nhap nam";cin>>Nam;

}
void Phong::xuat()
{
    cout <<"TEN PHONG BAN:"<<TENPHONG<<setw(20)<<"THANG TINH LUONG"<<ThangL<<setw(20)<<"NAM:"<<Nam<<endl;

}
class KHACHHANG
{

    char MAKH[30];
    char TENTK[30];
    int SOLUONG,TAMUNG,CONLAI;
public:
    void nhap();
    void xuat();
    friend class Phieu;
    friend void sapxep(Phieu P);
};
void KHACHHANG::nhap()
{
    cout <<"nhap MA KHACH HANG:";fflush(stdin);cin.getline(MAKH,30);
    cout <<"nhap TEN KHACH HANG:";fflush(stdin);cin.getline(TENTK,30);
     cout <<"nhap SO LUONG";cin>>SOLUONG;
      cout <<"nhap TAM UNG:";cin>>TAMUNG;
       cout <<"nhap CON LAI:";cin>>CONLAI;
}
void KHACHHANG::xuat()
{
    cout<<MAKH<<setw(30)<<TENTK<<setw(30)<<SOLUONG<<setw(30)<<TAMUNG<<setw(30)<<CONLAI<<endl;


}
class Phieu
{
    char MAPHIEU[30];
    char NGAYLAP[30];
    NV x;
    Phong y;
    KHACHHANG *a;
    int n;
public:
    void nhap();
    void xuat();
    friend void sua(Phieu &P);
    friend void sapxep(Phieu P);

};
void Phieu::nhap()
{
    cout <<"nhap MA PHIEU:";fflush(stdin);cin.getline(MAPHIEU,30);
    cout <<"nhap NGAY LAP:";fflush(stdin);cin.getline(NGAYLAP,30);
    x.nhap();
    y.nhap();
    cout <<"nhap n";cin>>n;
    a=new KHACHHANG[n];
    for(int i=0;i<n;i++)
        a[i].nhap();

}
void Phieu::xuat()
{
    cout<<"CONG TY MEGA"<<endl;;
    cout<<setw(50)<<"PHIEU LUONG"<<endl;;
    cout <<"MA PHIEU"<<MAPHIEU<<setw(30)<<"NGAY LAP"<<NGAYLAP<<endl;
    x.xuat();
    y.xuat();
    cout<<"MAKH"<<setw(30)<<"TEN KHOAN"<<setw(30)<<"SOLUONG"<<setw(30)<<"TAMUNG"<<setw(30)<<"CONLAI"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
    int s=0;
    for(int i=0;i<n;i++)
        s+=a[i].CONLAI;
    cout <<"TONG"<<setw(40)<<s<<endl;
    cout <<setw(50)<<"ha noi,ngay ...thang..nam2021"<<endl;;
}
void sua(Phieu &P)
{
    for(int i=0;i<P.n;i++)
        strcpy(P.NGAYLAP,"25/12/2021");

}
void sapxep(Phieu P)
{
    for(int i=0;i<P.n;i++)
        for(int j=i+1;j<P.n;j++)
          if(P.a[i].CONLAI>P.a[j].CONLAI)
           swap(P.a[i],P.a[j]);

}
int main()
{
    Phieu P;
    P.nhap();
    P.xuat();
    sua(P);
    sapxep(P);
    P.xuat();
}
