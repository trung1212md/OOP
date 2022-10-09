#include <bits/stdc++.h>

using namespace std;
class Sinhvien
{
    char Masinhvien[30];
    char Tensinhvien[30];
    char Lop[30];
    int Khoa;
public:
    void nhap();
    void xuat();
    friend class Phieu;
};
void Sinhvien::nhap()
{
    cout <<"ma sinhvien";fflush(stdin);cin.getline(Masinhvien,30);
    cout <<"ten sinh vien";fflush(stdin);cin.getline(Tensinhvien,30);
    cout <<"lop ";fflush(stdin);cin.getline(Lop,30);
    cout <<"khoa ";cin >>Khoa;
}
void Sinhvien::xuat()
{
    cout <<"Ma sinh vien  "<<Masinhvien<<setw(20)<<"ten sinh vien  "<<Tensinhvien<<endl;
    cout <<"lop   "<<Lop<<setw(20)<<"khoa"<<Khoa<<endl;

}
class Mon
{
    char Tenmon[30];
    int sotrinh;
    float diem;
public:
    void nhap();
    void xuat();
    friend class Phieu;
};
void Mon::nhap()
{
    cout <<"ten mon ";fflush(stdin);cin.getline(Tenmon,30);
    cout <<"so trinh";cin>>sotrinh;
    cout <<"diem";cin>>diem;

}
void Mon::xuat()
{
    cout <<Tenmon<<setw(20)<<sotrinh<<setw(20)<<diem<<endl;

}
class Phieu
{
    Sinhvien y;
    Mon *a;
    int n;
public:
    void nhap();
    void xuat();
};
void Phieu::nhap()
{
    y.nhap();
    cout <<"nhap n bang diem";cin>>n;
    a=new Mon[n];
    for(int i=0;i<n;i++)
        a[i].nhap();

}
void Phieu::xuat()
{
 cout <<setw(50)<<"PHIEU BAO DIEM"<<endl;
    y.xuat();
     cout <<"Ten mon"<<setw(20)<<"so trinh"<<setw(20)<<"diem"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();

    float s=0;
    int s1=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i].diem*a[i].sotrinh;
        s1+=a[i].sotrinh;

    }
    cout <<setw(50)<<"diem trung binh"<<s/s1<<endl;
}
int main()
{
    Phieu p;
    p.nhap();
    p.xuat();

}
