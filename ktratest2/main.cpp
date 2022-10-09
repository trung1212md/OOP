#include <bits/stdc++.h>

using namespace std;
class LOPHOC;
class Nguoi
{
protected:
    char hoten[30];
    char ngaysinh[30];
    char quenquan[30];
public:
    void nhap();
    void xuat();

};
void Nguoi::nhap()
{
    cout<<"hoten";fflush(stdin);cin.getline(hoten,30);
     cout <<"ngay sinh";fflush(stdin);cin.getline(ngaysinh,30);
      cout <<"que quan";fflush(stdin);cin.getline(quenquan,30);

}
void Nguoi::xuat()
{
    cout <<"ho ten:"<<hoten<<endl;
    cout <<"ngay sinh:"<<ngaysinh<<endl;
    cout <<"quen quan:"<<endl;

}
class SINHVIEN:public Nguoi
{
    char Masv[30];
    char Nganh[30];
    int Khoahoc;
public:
    void nhap();
    void xuat();
    friend class LOPHOC;
    friend void kt(LOPHOC p);
    friend void sapxep(LOPHOC p);

};
void SINHVIEN::nhap()
{
    Nguoi::nhap();
     cout <<"ma sinh vien:";fflush(stdin);cin.getline(Masv,30);
     cout <<"nganh";fflush(stdin);cin.getline(Nganh,30);
     cout <<"khoa hoc";cin>>Khoahoc;


}
void SINHVIEN::xuat()
{
    Nguoi::xuat();
    cout <<"ma sinh vien:"<<Masv<<endl;;
    cout <<"nganh"<<Nganh<<endl;;
     cout <<"khoa hoc"<<Khoahoc<<endl;
}
class LOPHOC
{
    char MaLH[30];
    char TenLH[30];
    char ngaymo[30];
    SINHVIEN *x;
    int n;
    char giaovien[30];
public:
    void nhap();
    void xuat();
    friend void kt(LOPHOC p);
    friend void sapxep(LOPHOC p);

};
void LOPHOC::nhap()
{
    cout <<"ma lop hoc:";fflush(stdin);cin.getline(MaLH,30);
    cout <<"ten lop hoc:";fflush(stdin);cin.getline(TenLH,30);
    cout <<"ngay mo:";fflush(stdin);cin.getline(ngaymo,30);
    cout <<"nhap n";cin>>n;
    x=new SINHVIEN[n];
    for(int i=0;i<n;i++)
        x[i].nhap();
     cout <<"giao vien:";fflush(stdin);cin.getline(giaovien,30);

}
void LOPHOC::xuat()
{
    cout <<"ma lop hoc:"<<MaLH<<endl;;
    cout <<"ten lop hoc:"<<TenLH<<endl;;
     cout <<"ngay mo:"<<ngaymo<<endl;;
      for(int i=0;i<n;i++)
        x[i].xuat();
       cout <<"giao vien:"<<giaovien<<endl;

}
void kt(LOPHOC p)
{
    int dem=0;
        for(int i=0;i<p.n;i++)
            if(p.x[i].Khoahoc==11)
            dem++;
    cout <<"so sinh vien khoa 11:"<<dem<<endl;
}
void sapxep(LOPHOC p)
{
    for(int i=0;i<p.n;i++)
        for(int j=i+1;j<p.n;j++)
        if(p.x[i].Khoahoc>p.x[j].Khoahoc)
        swap(p.x[i],p.x[j]);

}
int main()
{
    LOPHOC p;
    p.nhap();
    p.xuat();
    kt(p);
    sapxep(p);
     p.nhap();
}
