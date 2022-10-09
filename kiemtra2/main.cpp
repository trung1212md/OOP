#include <bits/stdc++.h>

using namespace std;
class TUGIAC
{
    float a,b,c,d;
public:
    TUGIAC();
    TUGIAC(float x,float y,float z,float h );
    friend iostream &operator>>(iostream &x,TUGIAC &y);
    friend ostream &operator<<(ostream &x,TUGIAC y);
    float operator++();
    TUGIAC operator+(TUGIAC y);
    bool operator=(TUGIAC y);

};
TUGIAC::TUGIAC()
{
    a=b=c=d=0;

}
float TUGIAC::operator++()
{
    return (a+b+c+d)/2;

}
TUGIAC::TUGIAC(float x,float y,float z,float h)
{
    this->a=x;
    this->b=y;
    this->c=z;
    this->d=h;

}
TUGIAC TUGIAC::operator+(TUGIAC y)
{
    TUGIAC T;
    T.a=a+y.a;
    T.b=b+y.b;
    T.c=c+y.c;
    T.d=d+y.d;
    return T;

}
iostream &operator>>(iostream &x,TUGIAC &y)
{
    x>>y.a>>y.b>>y.c>>y.d;
    return x;

}
ostream &operator<<(ostream &x,TUGIAC y)
{
    x<<y.a<<y.b<<y.c<<y.d<<endl;
        return x;
}
bool TUGIAC::operator=(TUGIAC y)
{
    if(a+b+c+d==y.a+y.b+y.c+y.d)
        return true;
    else
    return false;
}
int main()
{
   TUGIAC a,b;
   cout <<"nhap tu giac a";
   cin>>a;
   cout <<"nhap tu giac b";
   cin >>b;
   TUGIAC H=a+b;
   cout <<"tong tu giac "<<H;
   cout <<"nua chu vi"<<++a;
    cout <<"nua chu vi"<<++b;
    ofstream f("D:/TUGIAC12.txt");
    f <<"nhap tu giac a"<<b;
     f <<"nhap tu giac b"<<b;
    f <<"tong tu giac "<<H;
    f<<"chu vi a,b"<<++a*2<<++b*2<<endl;
    f.close();
    if(a=b)
        cout <<"bang nhau";
    else
        cout <<"ko bang nhau";

}
