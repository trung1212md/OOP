#include<bits/stdc++.h>

using namespace std;
class PHONGMAY;
class MAY
{
private:
    char Mamay[30];
    char Kieumay[30];
    char Tinhtrang[30];
public:
    void nhap();
    void xuat();
    friend void sua(PHONGMAY a);

};
void MAY::nhap()
{
    cout <<"Ma may";fflush(stdin);cin.getline(Mamay,30);
    cout <<"kieu may";fflush(stdin);cin.getline(Kieumay,30);
    cout <<"tinh trang";fflush(stdin);cin.getline(Tinhtrang,30);


}
void MAY::xuat()
{

    cout <<setw(20)<<Mamay<<setw(20)<<Kieumay<<setw(20)<<Tinhtrang<<endl;
}

class QUANLY
{
private:
    char Maql[30];
    char Hoten[30];
public:
    void nhap();
    void xuat();


};
void QUANLY::nhap()
{
    cout <<"ma quan ly";fflush(stdin);cin.getline(Maql,30);
    cout<<"ho ten";fflush(stdin);cin.getline(Hoten,30);

}
void QUANLY::xuat()
{

    cout <<"ma quan ly"<<Maql<<endl;
    cout <<"ho ten"<<Hoten<<endl;
}
class PHONGMAY
{
private:
    char Maphong[30];
    char Tenphong[30];
    float Dientich;
    QUANLY x;
    MAY *y;
    int n;
public:
    void nhap();
    void xuat();
    friend void sua(PHONGMAY a);
    friend void suadt(PHONGMAY &a);

};
void PHONGMAY::nhap()
{
    cout<<"ma phong";fflush(stdin);cin.getline(Maphong,30);
    cout <<"ten phong";fflush(stdin);cin.getline(Tenphong,30);
    cout<<"dien tich";cin >>Dientich;
    x.nhap();
    cout <<"nhap n";cin >>n;
    y=new MAY[n];
    for(int i=0;i<n;i++)
    {
        y[i].nhap();
    }

}
void PHONGMAY::xuat()
{

    cout<<"ma phong"<<Maphong<<setw(20)<<"ten phong"<<Tenphong<<setw(20)<<"dien tich"<<Dientich<<endl;
      x.xuat();
     cout <<setw(20)<<"Mamay"<<setw(20)<<"Kieumay"<<setw(20)<<"Tinhtrang"<<endl;
    for(int i=0;i<n;i++)
    {

        y[i].xuat();
    }

}
void sua(PHONGMAY a)
{
    for(int i=0;i<a.n;i++)
        if(strcmp(a.y[i].Tinhtrang,"MS001")==0)
       strcmp( a.y[i].Tinhtrang,"Tot");


}
void suadt(PHONGMAY &a)
{
    a.Dientich=50;

}
int main()

{
    PHONGMAY a;
   a.nhap();
    a.xuat();
    sua(a);
    suadt(a);
    a.xuat();

}
