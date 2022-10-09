#include <bits/stdc++.h>

using namespace std;
class Doanhnghiep
{
    char TenDN[30];
    char DT[30];
    int Nhanvien;
    float Doanhthu;

public:
    void nhap();
    void xuat();
};
void Doanhnghiep::nhap()
{
    cout <<"nhap ten doanh nghiep:";fflush(stdin);cin.getline(TenDN,30);
    cout <<"nhap dia chi:";fflush(stdin);cin.getline(DT,30);
    cout <<"nhap so nhan vien:";cin >>Nhanvien;
    cout <<"doanh thu:";cin >>Doanhthu;
}
void Doanhnghiep::xuat()
{
        cout <<setw(20)<<TenDN<<setw(20)<<DT<<setw(20)<<Nhanvien<<setw(20)<<Doanhthu<<endl;
}
int main()
{
    Doanhnghiep *a;
    int n;
    cout<<"nhap n";cin >>n;
    for(int i=0;i<n;i++)
    {
        cout <<"nhap doanh nghiep"<<i+1;
        a[i].nhap();

    }
    cout <<setw(20)<<"Ten doanh nghiep "<<setw(20)<<"dia chi doanh nghiep "<<setw(20)<<" so luong nhan vien "<<setw(20)<<" doanh thu "<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
}
