#include <bits/stdc++.h>

using namespace std;
class Nguoi
{
protected:
    char Hoten[30];
    int tuoi;
public:
    void nhap();
    void xuat();
    friend class Benhvien;

};
void Nguoi::nhap()
{
    cout <<"ho ten";fflush(stdin);cin.getline(Hoten,30);
    cout <<"tuoi:";cin>>tuoi;

}
void Nguoi::xuat()
{
    cout<<"ho ten:"<<Hoten<<endl;
    cout<<"tuoi"<<tuoi<<endl;

}
class Benhvien
{
    char Tenbenhvien[30];
    char Diachi[30];
    Nguoi Giamdoc;
    friend class Benhnhan;

};
class Benhnhan:public Nguoi
{
    char Ma[30];
    char Tiensu[30];
    char Chandoan[30];
    Benhvien x;
public:
    void nhap();
    void xuat();
    friend void kt(Benhnhan *a,int n);
    friend void sua(Benhnhan *a,int n);

};
void Benhnhan::nhap()
{
    Nguoi::nhap();
    cout <<"ma :";fflush(stdin);cin.getline(Ma,30);
     cout <<"tien su :";fflush(stdin);cin.getline(Tiensu,30);
     cout <<"chan doan :";fflush(stdin);cin.getline(Chandoan,30);
      cout <<"ten benh vien :";fflush(stdin);cin.getline(x.Tenbenhvien,30);
       cout <<"dia chi :";fflush(stdin);cin.getline(x.Diachi,30);
        x.Giamdoc.nhap();

}
void Benhnhan::xuat()
{
    Nguoi::xuat();
    cout <<"ma :"<<Ma<<endl;
     cout <<"tien su :"<<Tiensu<<endl;
      cout <<"chan doan :"<<Chandoan<<endl;
        cout <<"ten benh vien :"<<x.Tenbenhvien<<endl;
          cout <<"dia chi :"<<x.Diachi<<endl;
          x.Giamdoc.xuat();
}
void kt(Benhnhan *a,int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
        if(a[i].tuoi>30)
        dem++;
    cout <<"so benh nhan lon hon 30 tuoi"<<dem<<endl;
}
void sua(Benhnhan *a,int n)
{
    for(int i=0;i<n;i++)
        if(strcmp(a[i].Ma,"BN01")==0)
            a[i].tuoi=20;
}
int main()
{
    int n;

    cout <<"nhap n";cin>>n;
    Benhnhan *a;
    a=new Benhnhan[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
    for(int i=0;i<n;i++)
        a[i].xuat();
}
