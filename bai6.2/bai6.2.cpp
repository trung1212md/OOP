#include <iostream>
//SỬA: KHI NÀO CÓ &: KHI SỬA VÀO THUỘC TÍNH KHÔNG PHẢI LÀ CON TRỎ hoặc KHI SỬA VÀO BỘ NHỚ CỦA CON TRỎ THÌ CÓ &
//Bonus 6.2: SỬA LẠI NĂM SẢN XUẤT CỦA CÁC MÁY IN thành 2021

using namespace std;
class LASERPRINTER;

class PRINTER
{
protected:
    float trongluong;
    char Hangsx[30];
    int namsx;
    int  tocdo;

};
class DOTPRINTER:public PRINTER
{
    int Matdokim;
public:
    void nhap();
    void xuat();
    friend void sua( DOTPRINTER &x,LASERPRINTER &y);

};
void DOTPRINTER::nhap()
{
    cout <<"nhap trong luong";cin >>trongluong;
    cout <<" nhap hsng san xuat";cin>>Hangsx;
    cout<<"nam san xuat";cin>>namsx;
    cout <<"nhap toc do";cin>>tocdo;
    cout <<"mat do kim";cin>>Matdokim;


}
void DOTPRINTER::xuat()

{
    cout <<"trong luong"<<trongluong<<endl;
    cout <<"hang san xuat"<<Hangsx<<endl;
    cout <<"nam san xuat"<<namsx<<endl;
    cout <<" toc do"<<tocdo<<endl;
    cout <<"mat do kim"<<Matdokim<<endl;
}
class LASERPRINTER:public PRINTER
{
    int dophangiai;
public:
    void nhap();
    void xuat();
    friend void sua( DOTPRINTER &x,LASERPRINTER &y);
};
void LASERPRINTER::nhap()
{

    cout <<"nhap trong luong";cin >>trongluong;
    cout <<" nhap hsng san xuat";cin>>Hangsx;
    cout<<"nam san xuat";cin>>namsx;
    cout <<"nhap toc do";cin>>tocdo;
    cout <<"do phan giai";cin >>dophangiai;


}
void LASERPRINTER::xuat()
{
     cout <<"trong luong"<<trongluong<<endl;
    cout <<"hang san xuat"<<Hangsx<<endl;
    cout <<"nam san xuat"<<namsx<<endl;
    cout <<" toc do"<<tocdo<<endl;
    cout <<"do phan giai"<<dophangiai<<endl;

}
void sua( DOTPRINTER &x,LASERPRINTER &y)
{
    x.namsx=y.namsx=2021;

}
int main()
{
    DOTPRINTER x;
    LASERPRINTER y;
    cout <<"nhap thong tin kim ";
    x.nhap();
    x.xuat();
    cout <<" thong tin Laser";
    y.nhap();
    y.xuat();
    cout <<"thong tin sau sua";
    sua(x,y);
    x.xuat();
    y.xuat();


}
