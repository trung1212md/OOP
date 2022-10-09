#include <bits/stdc++.h>

using namespace std;
class Oto
{
private:
    char MAOto[30];
    float GiaMM;
    int Namsd;
    float TylekH;
public:
    void nhap();
    void xuat();

};
void Oto::nhap()
{
    cout <<"nhap ma o to";fflush(stdin);cin.getline(MAOto,30);
    cout <<"gia ma moi ";cin >> GiaMM;
    cout <<"nam su dung";cin >> Namsd;
    cout <<"tyleKH";cin >>TylekH;

}
void Oto::xuat()
{

    cout <<setw(20)<<MAOto<<setw(20)<<GiaMM<<setw(20)<<Namsd<<setw(20)<<TylekH<<setw(20)<<endl;
    float GT=GiaMM;
    for(int i=0;i<Namsd;i++)
    {
        GT=GiaMM-TylekH*Namsd;
    }
    cout <<GT;

}
int main()
{
    Oto *a;
     int n;
    cout<<"nhap n";cin >>n;
    for(int i=0;i<n;i++)
    {
        cout <<"nhap o to"<<i+1<<endl;
        a[i].nhap();

    }
    cout <<setw(20)<<"Ma O to"<<setw(20)<<"Gia Ma Moi"<<setw(20)<<"Nam sd"<<setw(20)<<"TylekH"<<endl;
    for(int i=0;i<n;i++)
    {
        a[i].xuat();

    }






}
