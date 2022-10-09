#include<bits/stdc++.h>
//thoi gian lam bai 90 phut,khong su dung tro giup
using namespace std;
class PHIEU;

class NhaCC
{
private:
    char Manhacungcap[30];
    char Tennhacungcap[30];
    char Diachi[30];
    int SDT;
public:
    void nhap();
    void Xuat();
    friend class PHIEU;
    friend void kt(PHIEU p);
    friend void sapxep(PHIEU p);

};
void NhaCC::nhap()
{
    cout << "Ma nhap nha cung cap:";fflush(stdin);cin.getline(Manhacungcap,30);
    cout <<"nhap ten nha cung cap:";fflush(stdin);cin.getline(Tennhacungcap,30);
    cout <<"nhap dia chi:";fflush(stdin);cin.getline(Diachi,30);
    cout <<"nhap so dien thoai:";cin >> SDT;

}
void NhaCC::Xuat()
{
    cout <<"Ma nha cung cap :"<<Manhacungcap;
    cout <<setw(20)<<"Ten nha cung cap:"<<Tennhacungcap<<endl;
    cout <<"Dia chi :"<<Diachi;
    cout <<setw(20)<<"So dien thoai:"<<SDT<<endl;

}
class SP
{
private:
    char MaSP[30];
    char Tensp[30];
    int soluong;
    float dongia;

public:
    void nhap();
    void xuat();
    friend class PHIEU;
    friend void kt(PHIEU p);
    friend void sapxep(PHIEU p);
};
void SP::nhap()
{
    cout <<"nhap Ma san pham:";fflush(stdin);cin.getline(MaSP,30);
    cout <<"nhap Ten san pham:";fflush(stdin);cin.getline(Tensp,30);
    cout <<"so luong: ";cin >>soluong;
    cout <<"don gia:";cin>>dongia;

}
void SP::xuat()
{
    cout <<setw(20)<<MaSP<<setw(20)<<Tensp<<setw(20)<<soluong<<setw(20)<<dongia<<setw(20)<<soluong*dongia<<endl;

}
class PHIEU
{
private:
    char MaPhieu[30];
    char Ngaylap[30];
    NhaCC x;
    SP *y;
    int n;
public:
    void Nhap();
    void Xuat();
    friend void kt(PHIEU p);
    friend void sapxep(PHIEU p);

};
void PHIEU::Nhap()
{

    cout <<"nhap Ma phieu:";fflush(stdin);cin.getline(MaPhieu,30);
    cout <<"ngay nhap:";fflush(stdin);cin.getline(Ngaylap,30);
    x.nhap();
    cout <<"nhap n=";cin>>n;
    y=new SP[n];
    for(int i=0;i<n;i++)
    {
        cout <<"nhap SP thu:"<<i+1<<endl;
        y[i].nhap();

    }

}
void PHIEU::Xuat()
{
    cout<<"Dai hoc Victory"<<endl;
    cout <<setw(50)<<" PHIEU NHAP VAN PHONG PHAM"<<endl;
    cout <<"Ma phieu:"<<MaPhieu;
    cout <<setw(30)<<"Ngay lap:"<<Ngaylap<<endl;
    x.Xuat();
    cout <<setw(20)<<"MaSP"<<setw(20)<<"Ten San Pham"<<setw(20)<<"So Luong"<<setw(20)<<"Don Gia"<<setw(20)<<"Thanh tien"<<endl;

    for(int i=0;i<n;i++)
    {
        y[i].xuat();
    }
    float thanhtien;
    for(int i=0;i<n;i++)
    {
        thanhtien+=y[i].soluong*y[i].dongia;

    }
    cout <<setw(50)<<"TONG"<<setw(30)<<thanhtien<<endl;
    cout <<"Hieu truong"<<setw(50)<<"Phong tai chinh"<<setw(30)<<"nguoi lap"<<endl;
}
void kt(PHIEU p)
{
      int dem=0;
      for(int i=0;i<p.n;i++)
      {
          if(p.y[i].soluong<80)
            dem++;
      }
    cout <<"san pham co so luong <80:"<<dem<<endl;
}
void sapxep(PHIEU p)
{
    for(int i=0;i<p.n;i++)
        for(int j=i+1;j<p.n;j++)
            if(p.y[i].dongia>p.y[j].dongia)
                swap(p.y[i],p.y[j]);
}
int main()
{
    PHIEU p;
    p.Nhap();
    p.Xuat();
    kt(p);
    sapxep(p);
    p.Xuat();
}
