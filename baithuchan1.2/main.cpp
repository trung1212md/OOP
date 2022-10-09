#include <bits/stdc++.h>

using namespace std;
class HinhTG
{
    float a,b,c;
public:
    HinhTG();
    HinhTG(float x,float y,float z);
    float operator++();
    HinhTG operator-(HinhTG y);
    friend istream &operator>>(istream &x,HinhTG &y);
    friend ostream &operator<<(ostream &x,HinhTG y);



};
HinhTG::HinhTG()
{
    a=b=c=0;


}
HinhTG::HinhTG(float x,float y,float z)
{
    this->a=x;
    this->b=y;
    this->c=z;

}
float HinhTG::operator++()
{
    return a+b+c;

}
HinhTG HinhTG::operator-(HinhTG y)
{
    HinhTG T;
   T.a=a-y.a;
    return T;

}
istream &operator>>(istream &x,HinhTG &y)
{
    cout <<"nhap a,b,c";x>>y.a>>y.b>>y.c;
    return x;

}
ostream &operator<<(ostream &x,HinhTG y)
{
    x<<y.a<<y.b<<y.c;
    return x;

}
int main()
{
    HinhTG P(1,2,3),Q(2,3,4);
    cout <<"tam giac P"<<P<<endl;
    cout <<"tam giac Q"<<Q<<endl;
    HinhTG H=P-Q;
    cout <<"hieu"<<H<<endl;
    ofstream f("D:/TG.txt",ios::app);
    f <<"tam giac P"<<P<<endl;
    f <<"tam giac Q"<<Q<<endl;
    f <<"hieu"<<H<<endl;
    f.close();
}
