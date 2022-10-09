#include<bits/stdc++.h>
using namespace std;
class HCN
{
private:
    float D;
    float R;
public :
    void nhap();
    void ve();
    float DienTIch();
    float Chuvi();
};
void HCN::nhap()
{
    cout <<"nhap chieu dai";cin >> D;
    cout <<"nhap chieu rong";cin >>R;

}
void HCN::ve()
{
    for(int i=0;i<D;i++)
    {

        for(int j=0;j<R;j++)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}
float HCN::Chuvi()
{
    float cv=(D+R)*1.0/2;
    return cv;
}
float HCN::DienTIch()
{
    float dt=D*R;
    return dt;
}
int main()
{
    HCN p;
    p.nhap();
    p.ve();
    cout <<"chu vi"<<p.Chuvi()<<endl;;
    cout <<"dien tich"<<p.DienTIch();
}
