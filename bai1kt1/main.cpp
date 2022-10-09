#include<bits/stdc++.h>

using namespace std;

class HANG
{
    int trongluong,giatien,thetich;
public:
    HANG();
    HANG(int a,int b,int c);
    HANG operator + (HANG a);
    bool operator - (HANG a);
friend istream& operator >> (istream& in,HANG &y);
friend ostream& operator << (ostream& out,HANG y);
};
HANG::HANG()
{
    trongluong=0;giatien=0;thetich=0;
}
HANG::HANG(int a,int b,int c)
{
    trongluong=a,giatien=b;thetich=c;
}
istream& operator >> (istream& in,HANG &y)
{
    cout<<"Nhap trong luong:";in>>y.trongluong;
    cout<<"Nhap gia tien:";in>>y.giatien;
    cout<<"Nhap the tich:";in>>y.thetich;
    return in;
}
ostream& operator << (ostream& out,HANG y)
{
    out<<"\nTrong luong:"<<y.trongluong;
    out<<"\nGia tien:"<<y.giatien;
    out<<"\nThe tich:"<<y.thetich;
    return out;
}
HANG HANG::operator+(HANG a)
{
    HANG c;
    c.trongluong=trongluong+a.trongluong;
    c.thetich=thetich+a.thetich;
    c.giatien=giatien+a.giatien;
    return c;
}
bool HANG::operator - (HANG a)
{
    if(trongluong==a.trongluong and giatien==a.giatien)    return true;
    return false;
}
int main()
{
	HANG a,b;
	cout<<"NHAP HANG 1:"<<endl;
	cin>>a;
	cout<<"NHAP HANG 2:"<<endl;
	cin>>b;
	ofstream ofs ("./.txt");
	HANG c=a+b;
	cout<<c<<endl;
	ofs<<c<<endl;
	bool x=a-b;
	if(x==true)
    {
        cout<<"2 mat hang cung trong luong cung gia tien\n";
        ofs<<"2 mat hang cung trong luong cung gia tien\n";
    }
    else
    {
        cout<<"2 mat hang khong cung trong luong,khong cung gia tien\n";
        ofs<<"2 mat hang khong cung trong luong,khong cung gia tien\n";

    }
    ofs.close();


}

