#include <bits/stdc++.h>

using namespace std;
class TIVI;
class NSX
{
    char TenSX[30];
    char diachi[30];
public:
    void nhap();
    void xuat();


};
void NSX::nhap()
{
    cout <<"ten san xuat";fflush(stdin);cin.getline(TenSX,30);
    cout <<"dia chi ";fflush(stdin);cin.getline(diachi,30);

}
void NSX::xuat()
{
    cout <<"ten san xuat "<<TenSX<<endl;
    cout <<"dia chi"<<diachi<<endl;

}
class DATE
{

    int D,M,Y;
public :
    void nhap();
    void Xuat();
};
void DATE::nhap()
{
    cout <<"nhap ngay ,thang ,nam";cin >>D>>M>>Y;


}
void DATE::Xuat()
{
    cout <<"ngay"<<D<<"/thang"<<M<<"/nam"<<Y;

}
class HANG
{
protected:
    char TenHang[30];
    NSX x;
    float Dongia;
public:
    void nhap();
    void xuat();
    friend void SUA(TIVI *k,int n);
    friend void xoa(TIVI *&k,int &n);
};
void HANG::nhap()
{
    cout <<"nhap ten hang";fflush(stdin);cin.getline(TenHang,30);
    x.nhap();
    cout <<"don gia";cin>>Dongia;

}
void HANG::xuat()
{
    cout <<"ten hang"<<TenHang<<endl;
    x.xuat();
    cout <<"don gia"<<Dongia;


}
class TIVI:public HANG
{
    float kichthuoc;
    DATE Ngaynhap;
public:
    void nhap();
    void xuat();
    friend void SUA(TIVI *k,int n);
    friend void xoa(TIVI *&k,int &n);

};
void TIVI::nhap()
{
    HANG::nhap();
    cout <<"kich thuoc";kichthuoc;
    Ngaynhap.nhap();

}
void TIVI::xuat()
{
    HANG::xuat();
    cout <<"kic thuoc "<<kichthuoc<<endl;
    Ngaynhap.Xuat();

}
void SUA(TIVI *k,int n)
{
    for(int i=0;i<n;i++)
    k[i].Dongia=k[i].Dongia+1000;

}
void xoa(TIVI *&k,int &n)
{
    for(int i=0;i<n;i++)
    while(k[i].Dongia<2000&&i<n-1)
    {
        for(int j=i+1;j<n;j++)
            k[i-1]=k[j];
        n--;
        k=(TIVI*)realloc(k,n*sizeof(TIVI));
    }

}
int main()
{
    int n;
    cout <<"nhap n ";cin >>n;
    TIVI *k;
    k=(TIVI*) malloc(n*sizeof(TIVI));
    for(int i=0;i<n;i++)
    {
        k[i].nhap();

    }
    SUA(k,n);
    cout <<"sau khi sua"<<endl;
    for(int i=0;i<n;i++)
    {
        k[i].xuat();
    }
    xoa(k,n);
    cout <<"sau khi xoa"<<endl;
    for(int i=0;i<n;i++)
    {
        k[i].xuat();
    }


}




