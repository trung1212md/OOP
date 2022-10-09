#include <iostream>

using namespace std;
class NSX
{

private:
    char Mansx[30];
    char Tennsx[30];
    char DCNSX[30];
public :
    friend class HANG;

};
class HANG
{

private:
    char Mahang[30];
    char TenHang[30];
    float DOngia;
    float Trongluong;
    NSX x;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout <<"nhap ma hang";fflush(stdin);cin.getline(Mahang,30);
    cout <<"Ten hang";fflush(stdin);cin.getline(TenHang,30);
    cout <<"don gia";cin >>DOngia;
    cout <<"trong luong";cin>>Trongluong;
    cout <<"ma san xuat";fflush(stdin);gets(x.Mansx);
    cout <<"ten nha sx";fflush(stdin);gets(x.Tennsx);
    cout <<"dia chi san xuat";fflush(stidn);;gets(x.DCNSX);


}
void HANG::xuat()
{

    cout <<"ma hang"<<Mahang<<endl;
    cout <<"ten hang"<<TenHang<<endl;
    cout <<"don gia"<<DOngia<<endl;
    cout <<"trong luong"<<Trongluong<<endl;
    cout <<"ma hang sx"<<x.Mansx<<endl;
    cout <<"ten hang sx"<<x.Tennsx<<endl;
    cout <<"dia chi san xuat"<<x.DCNSX<<endl;
}

int main()
{
   HANG a;
   a.nhap();
   a.xuat();
}
