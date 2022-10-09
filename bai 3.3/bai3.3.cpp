#include<bits/stdc++.h>

using namespace std;
class HANG
{
private:
    char Mahang[30];
    char Tenhang[30];
    float Dongia;
public:
    void nhap();
    void xuat();

};
void HANG::nhap()
{
    cout <<"nhap ma hang";fflush(stdin);cin.getline(Mahang,30);
    cout <<"ten hang";fflush(stdin);cin.getline(Tenhang,30);
    cout <<"don gia";cin >>Dongia;

}
void HANG::xuat()
{
    cout <<setw(20)<<Mahang<<setw(20)<<Tenhang<<setw(20)<<Dongia<<endl;

}
class PHIEU
{
private:
    char Maphieu[30];
    HANG *x;
    int n;
public:
    void nhap();
    void xuat();

};
void PHIEU::nhap()
{
    cout <<"nhap ma phieu";fflush(stdin);cin.getline(Maphieu,30);
    cout <<"nhap n=";cin >>n;
    x=new HANG[n];
    for(int i=0;i<n;i++)
    {
        cout<<"nhap hang thu"<<i+1<<endl;
        x[i].nhap();
    }
}
void PHIEU::xuat()
{
    cout <<"ma phieu"<<Maphieu<<endl;
    cout <<setw(20)<<"Mahang"<<setw(20)<<"Tenhang"<<setw(20)<<"Dongia"<<endl;
    for(int i=0;i<n;i++)
    {

        x[i].xuat();
    }

}
int main()

{
 PHIEU a;
 a.nhap();
a.xuat();
}
