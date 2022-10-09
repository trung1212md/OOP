#include <iostream>

using namespace std;
class Hang;
class DATE
{
    public:
    int D,M,Y;
    friend class Hang;
    friend void xuatmang(Hang a[],int n);


};
class Hang
{
private:
    char Mahang[30];
    char Tenhang[30];
    DATE Ngaysc;
    public:
    void Nhap();
    void Xuat();
    friend void xuatmang(Hang a[],int n);

};
void Hang::Nhap()
{
    cout <<"nhap ma hang";fflush(stdin);cin.getline(Mahang,30);
    cout <<"nhap ten hang:";fflush(stdin);cin.getline(Tenhang,30);
    cout <<"nhap ngay thang nam";cin>>Ngaysc.D>>Ngaysc.M>>Ngaysc.Y;
}
void Hang::Xuat()
{
    cout <<"Ma hang"<<Mahang<<endl;
    cout <<"Ten hang "<<Tenhang<<endl;
    cout <<"ngay"<<Ngaysc.D<<"thang"<<Ngaysc.M<<"nam"<<Ngaysc.Y<<endl;

}
void xuatmang(Hang a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i].Ngaysc.Y==2017)
            a[i].Xuat();
    }
}
int main()
{
    int n;
    cout <<"nhap so luong mat hang";cin >>n;
    Hang *a;
    a=new Hang[n];
    for(int i=0;i<n;i++)
    {
        cout <<"nhap hang thu"<<i+1;
        a[i].Nhap();
    }
    xuatmang(a,n)



}
