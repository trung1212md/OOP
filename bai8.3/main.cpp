#include <bits/stdc++.h>
using namespace std;
class TAMTB2
{
    float a,b,c;
public:
    TAMTB2();
    TAMTB2(float x,float y,float z);
    friend ostream & operator<<(ostream &x,TAMTB2 y);
    TAMTB2 operator-();
    TAMTB2 operator+(TAMTB2 y);
    TAMTB2 operator-(TAMTB2 y);

};
TAMTB2::TAMTB2()
{
    a=b=c=0;


}
TAMTB2 TAMTB2::operator-()
{
    TAMTB2 doi;
    doi.a=-a;
    doi.b=-b;
    doi.c=-c;
    return doi;

}
TAMTB2 TAMTB2::operator+(TAMTB2 y)
{
    TAMTB2 tong;
    tong.a=a+y.a;
    tong.b=b+y.b;
    tong.c=c+y.c;
    return tong;

}
TAMTB2 TAMTB2::operator-(TAMTB2 y)
{
    TAMTB2 hieu;
    hieu.a=a-y.b
    hieu.b=b-y.b;
    hieu.b=c-y.c;
    return hieu;

}
TAMTB2::TAMTB2(float x,float y,float z)
{
    a=x;
    b=y;
    c=z;

}
ostream & operator<<(ostream &x,TAMTB2 y)
{
    x<<y.a<<"X"<<(char)178<<y.b<<"X"<<y.c<<endl;
    return x;

}
int main()
{
    TAMTB2 P(1,2,3),Q(2,3,4);
    P=-P;
    Q=-Q;
    cout <<"tam thuc b2"<<P<<endl;
    cout <<"tam thuc b2"<<Q<<endl;
    TAMTB2 P3,P4;
    P3=P+Q;
    P4=P-Q;
    cout <<"tong 2 tam thuc b2"<<P3<<endl;
    cout <<"hieu 2 tam thuc b2"<<P4<<endl;
    ofstream f("D:/tamthuc.txt",ios::app);
    f<<"tam thuc b2"<<P<<endl;
    f <<"tam thuc b2"<<Q<<endl;
    f <<"tong 2 tam thuc b2"<<P3<<endl;
    f <<"hieu 2 tam thuc b2"<<P4<<endl;
    f.close();
}
