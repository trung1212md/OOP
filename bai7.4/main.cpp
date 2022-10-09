#include <bits/stdc++.h>

using namespace std;
class benhnhan;
class nguoi
{
    protected:
    char Hoten[30];
    int tuoi;
    public:
        void nhap();
        void xuat();
        friend void Dem(benhnhan *a,int n);
};
void nguoi::nhap()
{
    cout <<"nhap ho ten";fflush(stdin);cin.getline(Hoten,30);
    cout <<"tuoi";cin>>tuoi;

}
void nguoi::xuat()
{
   cout <<"ho ten"<<Hoten<<endl;
     cout <<"tuoi"<<tuoi<<endl;

}
class benhvien
{
    char tenbenhvien[30];
    char diachi[30];
     nguoi giamdoc;
    friend class benhnhan;

};
class benhnhan:public nguoi
{
    char ma[30];
    char tiensu[30];
    char chandoan[30];
    benhvien x;
public:
    void nhap();
    void xuat();
    friend void sua(benhnhan *a,int n);

};
void benhnhan::nhap()
{
    nguoi::nhap();
     cout <<"nhap ma";fflush(stdin);cin.getline(ma,30);
      cout <<"nhap tien su";fflush(stdin);cin.getline(tiensu,30);
     cout <<"nhap chan doan";fflush(stdin);cin.getline(chandoan,30);
        cout<<"nhap ten benh nhan";fflush(stdin);cin.getline(x.tenbenhvien,30);
       cout <<"nhap dai chi";fflush(stdin);cin.getline(x.diachi,30);
        cout <<"nhap giam doc";
        x.giamdoc.nhap();

}
void benhnhan::xuat()
{
    nguoi::xuat();
    cout <<"ma"<<ma<<endl;
     cout <<"tien su"<<tiensu<<endl;
     cout <<"chan doan"<<chandoan<<endl;
     cout <<"ten benh vien"<<x.tenbenhvien<<endl;
     cout <<"dia chi"<<x.diachi<<endl;
     x.giamdoc.xuat();

}
void Dem(benhnhan *a,int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
        if(a[i].tuoi>30)
            dem++;

    cout<<"so benh nhan hon 30 tuoi"<<dem<<endl;;
}
void sua(benhnhan *a,int n)
{
    for(int i=0;i<n;i++)
    if(strcpy(a[i].ma,"BN01")==0)
        a[i].tuoi=20;



}
int main()
{
    int n;
    cout <<"nhap n";
    cin>>n;
    benhnhan *a;
    a=new benhnhan[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
    Dem(a,n);
    sua(a,n);
    for(int i=0;i<n;i++)
        a[i].xuat();




}
