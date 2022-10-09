#include <bits/stdc++.h>

using namespace std;
class Khoa
{
    char Makhoa[30];
    char tenkhoa[30];
    char truongkhoa[30];
    friend class truonggdh;

};
class Ban
{
    char maban[30];
    char tenban[30];
    char ngaythanhlap[30];
    friend class truonggdh;

};
class truong
{
protected:
    char matruong[30];
    char tentruong[30];
    char diachi[30];
public :
    void nhap();
    void xuat();

};
void truong::nhap()
{
    cout <<"nhap ma truong";fflush(stdin);cin.getline(matruong,30);
        cout <<"nhap ten truong";fflush(stdin);cin.getline(tentruong,30);
            cout <<"nhap dia chi";fflush(stdin);cin.getline(diachi,30);
}
void truong::xuat()
{
      cout <<"nhap ma truong"<<matruong<<endl;
       cout <<"nhap ten truong"<<tentruong<<endl;
        cout <<"nhap dia chi"<<diachi<<endl;


}
class truonggdh:public truong
{
    Khoa *x;
    int n;
    Ban *y;
    int m;
public:
    void nhap();
    void xuat();


};
void truonggdh::nhap()
{
    truong::nhap();
    cout <<"nhap n";cin >>n;
    x=new Khoa[n];
    for(int i=0;i<n;i++)
    {
       cout <<"nhap ma khoa";fflush(stdin);cin.getline(x[i].Makhoa,30);
          cout <<"nhap ten khoa";fflush(stdin);cin.getline(x[i].tenkhoa,30);
            cout <<"nhap truong khoa";fflush(stdin);cin.getline(x[i].truongkhoa,30);
    }
    cout <<"nhap m";
    cin>>m;
    y=new Ban[m];
    for(int i=0;i<m;i++)
    {
     cout <<"nhap ma ban";fflush(stdin);cin.getline(y[i].maban,30);
          cout <<"nhap ten ban";fflush(stdin);cin.getline(y[i].tenban,30);
            cout <<"nhap ngay thanh lap";fflush(stdin);cin.getline(y[i].ngaythanhlap,30);

    }



}
void truonggdh::xuat()
{
    truong::xuat();
     for(int i=0;i<n;i++)
    {
      cout <<"nhap ma khoa"<<x[i].Makhoa<<endl;
       cout <<"nhap ten khoa"<<x[i].tenkhoa<<endl;
        cout <<"nhap truong khoa"<<x[i].truongkhoa<<endl;
    }
    for(int i=0;i<m;i++)
    {

        cout <<"nhap ma ban"<<y[i].maban<<endl;
       cout <<"nhap ten ban"<<y[i].tenban<<endl;
        cout <<"nhap ngay thannh lap"<<y[i].ngaythanhlap<<endl;
    }

}
int main()
{
    truonggdh a;
    a.nhap();
    a.xuat();

}
