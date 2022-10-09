#include <bits/stdc++.h>

using namespace std;
class LOPHOC;
class NGUOI
{
protected:
    char Hoten[30];
    char NgaySinh[30];
    char QueQuan[30];
public:
    void Nhap();
    void xuat();

};
void NGUOI::Nhap()
{
    cout <<"nhap ho ten:";fflush(stdin);cin.getline(Hoten,30);
    cout <<"nhap ngay sinh:";fflush(stdin);cin.getline(NgaySinh,30);
    cout <<"nhap que quan:";fflush(stdin);cin.getline(QueQuan,30);

}
void NGUOI::xuat()
{
    cout <<Hoten<<setw(20)<<NgaySinh<<setw(20)<<QueQuan;


}
class SINHVIEN:public NGUOI
{
    char Masv[30];
    char Nganh[30];
    int khoahoc;
public:
    void nhap();
    void xuat();
    friend void kt(LOPHOC p);
    friend void sapxep(LOPHOC p);

};
void SINHVIEN::nhap()
{
    NGUOI::Nhap();
    cout <<"ma sinh vien:";fflush(stdin);cin.getline(Masv,30);
    cout <<"nganh :";fflush(stdin);cin.getline(Nganh,30);
    cout <<"khoa hoc :";cin >>khoahoc;


}
void SINHVIEN::xuat()
{
    NGUOI::xuat();
    cout <<setw(20)<<Masv<<setw(20)<<Nganh<<setw(20)<<khoahoc<<endl;
}
class LOPHOC
{
    char MALH[30];
    char TenLH[30];
    char NgayMo[30];
    SINHVIEN *x;
    int n;
    char GIAOVIEN[30];
public:
    void nhap();
    void xuat();
    friend void kt(LOPHOC p);
    friend void sapxep(LOPHOC p);

};
void LOPHOC::nhap()
{
    cout <<"nhap ma lop:";fflush(stdin);cin.getline(MALH,30);
    cout <<"nhap Ten lop:";fflush(stdin);cin.getline(TenLH,30);
    cout <<"nhap ngay mo:";fflush(stdin);cin.getline(NgayMo,30);
    cout<<"nhap n sinh vien:";cin >>n;
    x=new SINHVIEN[n];
    for(int i=0;i<n;i++)
        x[i].nhap();
    cout <<"nhap giao vien:";fflush(stdin);cin.getline(GIAOVIEN,30);
}
void LOPHOC::xuat()
{
    cout <<"ma lop hoc:  "<<MALH<<setw(20)<<"Ten LH:  "<<TenLH<<setw(20)
    <<"ngay mo: "<<NgayMo<<endl;

      cout <<"Ho Ten "<<setw(20)<<"Ngay sinh "<<setw(20)<<"Que Quan "<<setw(20)<<"ma sinh vien "<<setw(20)<<"nganh "<<setw(20)<<"khoa hoc "<<endl;
    for(int i=0;i<n;i++)
        x[i].xuat();
    cout <<"giao vien:"<<GIAOVIEN<<endl;

}
void kt(LOPHOC p)
{
    int dem=0;
    for(int i=0;i<p.n;i++)
        if(p.x[i].khoahoc==11)
        dem++;
    cout <<"so sinh vien khoa 11 la:"<<dem;
}
void sapxep(LOPHOC p)
{
    for(int i=0;i<p.n;i++)
        for(int j=i+1;j<p.n;j++)
        if(p.x[i].khoahoc>p.x[j].khoahoc)
        swap(p.x[i],p.x[j]);

}
int main()
{
    LOPHOC p;
    p.nhap();
    p.xuat();
    kt(p);
    sapxep(p);
    p.xuat();
}
