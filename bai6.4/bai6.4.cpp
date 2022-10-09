#include <bits/stdc++.h>

using namespace std;

class ELECTRONIC
{
protected:
    float Congxuat;
    int dienap;
public:
    ELECTRONIC(float a, int b);


};
ELECTRONIC::ELECTRONIC(float a, int b)
{
    Congxuat=a;
    dienap=b;

}
class MAYGIAT:public ELECTRONIC
{
    float dungtich;
    char loai[30];
public:
    MAYGIAT(float a,int b,float c,char *d);
    void xuat();

};
MAYGIAT::MAYGIAT(float a,int b,float c,char *d):ELECTRONIC(a,b)
{
    dungtich=c;
    strcpy(loai,d);

}
void MAYGIAT::xuat()
{
    cout<<"cong xuat"<<Congxuat<<endl;
    cout <<"dien ap"<<dienap<<endl;
    cout <<"dung tich "<<dungtich<<endl;
    cout <<"loai"<<loai<<endl;

}
class TULANH:public ELECTRONIC
{
    float dungtich;
    int songan;
public:
    TULANH(float a,int b,float c,int d);
    void xuat();

};
TULANH::TULANH(float a,int b,float  c,int  d):ELECTRONIC(a,b)
{
    dungtich=c;
    songan=d;

}
void TULANH::xuat()
{
    cout<<"cong xuat"<<Congxuat<<endl;
    cout <<"dien ap"<<dienap<<endl;
    cout <<"dung tich"<<dungtich<<endl;
    cout <<"so ngan"<<songan<<endl;
}
int main()
{
    MAYGIAT a(1,2,3,"TRA");
    cout<<"thong tin";
    a.xuat();
    TULANH b(4,2,1,1);
    cout <<"thong tin tu lanh";
    b.xuat();



}
