#include <bits/stdc++.h>
using namespace std;

class SINHVIEN
{
    char Masv[30];
    char Hoten[30];
    int tuoi;
    float diem;
public:
    void nhap();
    void xuat();

};
void SINHVIEN::nhap()
{
    cout << "Ma sinh vien";fflush(stdin);cin.getline(Masv,30);
    cout <<"Ho ten";fflush(stdin);cin.getline(Hoten,30);
    cout << "tuoi";cin >> tuoi;
    cout << "nhap diem";cin >>diem;
}
void SINHVIEN::xuat()
{
    cout << "ma sinh vien"<<Masv<<endl;
    cout <<"Ho ten sinh vien"<<Hoten<<endl;
    cout <<"tuoi "<<tuoi<<endl;
    cout <<"diem"<<diem<<endl;

}
int main()
{
    SINHVIEN sv;
    sv.nhap();
    cout <<"DANH SACH SINH VIEN"<<endl;
    sv.xuat();
}
