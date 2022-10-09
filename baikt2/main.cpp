#include <bits/stdc++.h>

using namespace std;
class TUGIAC
{
    float a,b,c,d;
public:
    TUGIAC();
    TUGIAC(float x,float y,float z, float h);
    float operator++();
    TUGIAC operator+(TUGIAC y);
    bool operator==(TUGIAC y);
    friend istream& operator>>(istream &x,TUGIAC &y);
    friend ostream & operator<<(ostream &x,TUGIAC y);

};
TUGIAC::TUGIAC()
{
    a=b=c=d=0;


}
TUGIAC::TUGIAC(float x,float y,float z, float h)
{
    this->a=x;
    this->b=y;
    this->c=z;
    this->d=h;

}
float TUGIAC::operator++()
{

    return (a+b+c+d)/2;
}
TUGIAC TUGIAC::operator+(TUGIAC y)
{
    TUGIAC T;
    T.a=a+y.a;
    T.b=b+y.b;
    T.c=C+y.c;
    T.d=D+y.d;
    return T;

}
bool TUGIAC::operator==(TUGIAC y)
{
    if(a==y.a&&b==y.b&&c==y.c&&d==y.d)
        return true;
    else
        false;

}
istream& operator>>(istream &x,TUGIAC &y)
{

    x>>y.a>>y.b>>y.c>>y.d;
    return x;
}
ostream & operator<<(ostream &x,TUGIAC y)
{
    x<<y.a<<y.b<<y.c<<y.d<<endl;
    return x;

}
int main()
{
    TUGIAC P,Q;
    cout <<"tu giac 1";
    cin>>P;
    cout <<"tu giac 2";
    cin>>Q;
    cout <<"tu giac P"<<P<<endl;
    cout <<"tu giac Q"<<Q<<endl;
    TUGIAC H=P+Q;
    ofstream f("D:/TUGIAC13.txt",ios::app);
    f <<"tu giac P"<<P<<endl;
    f <<"tu giac Q"<<Q<<endl;
     f <<"nua chu vi tu giac P"<<++P*2<<endl;
    f <<"nua chu vi tu giac Q"<<++Q*2<<endl;
    f<<"tong 2 tu giac"<<H<<endl;
    f.close();
    if(P==Q)
        cout <<"bang nhau";
    else
        cout <<"ko bang nhau";
}
