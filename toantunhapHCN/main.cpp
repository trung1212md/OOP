#include <iostream>

using namespace std;
class HCN
{
    float D,R;
public:
    void nhap();
    void xuat();
    float operator!();
    float operator+(HCN y);
    bool operator==(HCN y);

};
void HCN::nhap()
{
    cout <<"D=";cin>>D;
    cout <<"R=";cin >>R;


}
void HCN::xuat()
{
    cout<<"D="<<D<<"R="<<R<<endl;

}
float HCN::operator!()
{
    return (R+D)/2;

}
float HCN::operator+(HCN y)
{
    return R*D+y.D*y.R;

}
bool HCN::operator==(HCN y)
{
    return (R*D==y.D*y.R);

}

int main()
{
    HCN P,Q;
    P.nhap(); P.xuat();
    Q.nhap(); Q.xuat();
    cout <<"chu vi P"<<!P<<endl;
    cout <<"chu vi Q"<<!Q<<endl;
    cout <<"tong dien tich P"<<P+Q<<endl;
    if(P==Q)
        cout <<"hai hinh chu nhat bang nhau";
    else
        cout <<"hai hinh chu nhat khac nhau";
 }
