#include <bits/stdc++.h>

using namespace std;
class PHIEU;
class MAKH
{
    char makh[30];
    char tenkh[30];
    char diachi[30];
public:
    void nhap();
    void xuat();
    friend class PHIEU;

};
void MAKH::nhap()
{
    cout <<"nhap ma khach hang";fflush(stdin);cin.getline(makh,30);
    cout <<"nhap ten khach hang ";fflush(stdin);cin.getline(tenkh,30);
    cout <<"nhap dia chi ";fflush(stdin);cin.getline(diachi,30);

}
void MAKH::xuat()
{
    cout <<"MA kh:"<<setw(10)<<makh<<setw(10)<<"ten kh:"<<tenkh<<endl;
    cout <<"Dia chi:"<<diachi<<endl;

}
class Hang
{
    char Tenhang[30];
    float dongia;
    int soluong;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
    friend void kt(PHIEU P);
    friend void chen(PHIEU &P);

};
void Hang::nhap()
{
    cout <<"nhap ten hang";fflush(stdin);cin.getline(Tenhang,30);
    cout<<"nhap don gia";cin>>dongia;
    cout <<"nhap so luong:";cin>>soluong;


}
void Hang::xuat()
{
    cout <<Tenhang<<setw(10)<<dongia<<setw(10)<<soluong<<setw(10)<<dongia*soluong<<endl;

}
class PHIEU
{
    char MaPhieu[30];
    char ngaylap[30];
    MAKH x;
    Hang *a;
    int n;
public:
    void nhap();
    void xuat();
    friend void kt(PHIEU P);
    friend void chen(PHIEU &P);
};
void PHIEU::nhap()
{

   cout <<"nhap ma phieu";fflush(stdin);cin.getline(MaPhieu,30);
    cout <<"nhap ngay lap";fflush(stdin);cin.getline(ngaylap,30);
    x.nhap();
    cout <<"nhap n";cin>>n;
    a=new Hang[n];
    for(int i=0;i<n;i++)
    {
        a[i].nhap();

    }

}
void PHIEU::xuat()
{
    cout <<setw(50)<<"PHIEU XUAT HANG"<<endl;
    cout <<"ma phieu:"<<MaPhieu<<setw(20)<<"ngay lap:"<<ngaylap<<endl;
    x.xuat();
    cout <<left<<"danh sach hang hoa:"<<endl;
    cout <<"Tenhang"<<setw(10)<<"dongia"<<setw(10)<<"soluong"<<setw(10)<<"thanh tien"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
    float S=0;
    for(int i=0;i<n;i++)
            S+=a[i].dongia*a[i].soluong;
    cout <<setw(50)<<"tong thanh tien:"<<setw(20)<<S<<endl;
}
void kt(PHIEU P)
{
    for(int i=0;i<P.n;i++)
        if(P.a[i].dongia>=20)
            cout <<"ten don gia"<<P.a[i].Tenhang<<endl;

}
void chen(PHIEU &P)
{
    int k;
    cout <<"nhap pt can chen";cin>>k;
    Hang b;
    b.nhap();
    P.a=(Hang *)realloc(P.a,(P.n+1)*sizeof(PHIEU));
    for(int i=P.n;i>=k;i--)
        P.a[i]=P.a[i-1];

    P.a[k]=b;
    P.n++;

}
int main()
{
    PHIEU P;
    P.nhap();
    P.xuat();
    kt(P);
    chen(P);
    P.xuat();
}
