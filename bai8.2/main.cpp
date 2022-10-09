#include <bits/stdc++.h>

using namespace std;
class SOPHUC
{
private:
    float thuc;
    float ao;
public:
    SOPHUC ();
    SOPHUC(float x,float y);
    SOPHUC operator+(SOPHUC y);
    SOPHUC operator-(SOPHUC y);
    friend ostream &operator<<(ostream &x,SOPHUC y);

};
 SOPHUC::SOPHUC()
{
    thuc=ao=0;

}
SOPHUC::SOPHUC(float x,float y)
{
    thuc=x;
    ao=y;

}
SOPHUC SOPHUC::operator+(SOPHUC y)
{
    SOPHUC tong;
    tong.thuc=thuc+y.thuc;
    tong.ao=ao+y.ao;
    return tong;

}
SOPHUC SOPHUC::operator-(SOPHUC y)
{
    SOPHUC tru;
    tru.thuc=thuc-y.thuc;
    tru.ao=ao-y.ao;
    return tru;

}
ostream &operator<<(ostream &x,SOPHUC y)
{

    x<<y.thuc<<"+"<<y.ao<<"*i"<<endl;
    return x;
}
int main()
{
   SOPHUC SP1(1,2),SP2(3,4);
   SOPHUC SP3,SP4;
   SP3= SP1+SP2;
   SP4=SP1-SP2;
   cout <<"tong so phuc"<<SP3<<endl;
   cout <<"hieu so phuc"<<SP4<<endl;
   ofstream f("D:/sophuc.txt",ios::app);
    f <<"tong so phuc"<<SP3<<endl;
   f<<"hieu so phuc"<<SP4<<endl;
   f.close();
}
