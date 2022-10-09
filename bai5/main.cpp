#include <bits/stdc++.h>

using namespace std;
class SINHVIEN
{
    char MASV[30];
    char TENSV[30];
    int tuoi;
public:
    void nhap();
    void xuat();

};
void SINHVIEN::nhap()
{
    cout << "nhap ma sinh vien";fflush(stdin);gets(MASV);
    cout << "nhap ten sinh vien";fflush(stdin);gets(TENSV);
    cout << "nhap tuoi ";cin >> tuoi;
}
void SINHVIEN::xuat()
{
    /*cout << "ma sinh vien:"<<MASV<<endl;;
    cout <<"ten sinh vien:"<<TENSV<<endl;
    cout << "tuoi sinh vien:"<<tuoi<<endl;*/
    cout<<setw(10)<<MASV<<setw(20)<<TENSV<<setw(15)<<tuoi<<endl;


}
class LOPHOC
{
    private:
    char MALH[30];
    char PHONG[30];
    SINHVIEN *x;
    int n;
public:
    void nhap();
    void xuat();
};
void LOPHOC::nhap()
{
    cout << "nhap ma lop ";fflush(stdin);gets(MALH);
    cout << "nhap phong lop hco:";fflush(stdin);gets(PHONG);
    cout << "nhap n";cin >> n;
    x=new SINHVIEN[n];
    for(int i=0;i<n;i++)
    {
        x[i].nhap();

    }

}
void LOPHOC::xuat()
{
    cout << "ma lop"<<MALH<<endl;
    cout <<"phong hoc" << PHONG<<endl;
    cout <<setw(30)<<"DANH SACH SINH VIEN"<<endl;
    cout<<setw(10)<<"ma sinh vien"<<setw(15)<<"ten sinh vien"<<setw(20)<<"tuoi sinh vien"<<endl;

    for(int i=0;i<n;i++)
    {
        x[i].xuat();
    }

}
int main()
{
    LOPHOC p;
    p.nhap();

    p.xuat();
}
