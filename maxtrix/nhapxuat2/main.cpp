#include <bits/stdc++.h>

using namespace std;
class Hang
{
    char MaH[30];
    char TenH[30];
    float DG,TL;
    char Mausac[30];
public:
    friend istream &operator>>(istream &x,Hang &y);
    friend ostream &operator<<(ostream &x,Hang y);

};
istream &operator>>(istream &x,Hang &y)
{
    x.getline(y.MaH,30);
    x.getline(y.TenH,30);
    x>>y.DG;
    x>>y.TL;
    x.ignore();
    x.getline(y.Mausac,30);
    return x;
}
ostream &operator <<(ostream &x,Hang y)
{
    x<<y.MaH<<endl;
    x<<y.TenH<<endl;
    x<<y.DG<<endl;
    x<<y.TL<<endl;
    x<<y.Mausac<<endl;
  return x;
}

int main()
{
    Hang *a;
    int n;
    cout <<"nhap n";
    cin >>n;
    a=new Hang[n];
    for(int i=0;i<n;i++)
    {
        cout <<"nhap mat hang";
        cin>>a[i];

    }
    for(int i=0;i<n;i++)
        cout <<a[i];
    ofstream f1;
    f1.open("D:/hang.dat",ios::out);
    for(int i=0;i<n;i++)
        f1<<a[i];
        f1.close();
    ofstream f;
    f.open("D:/hang.dat",ios::in);
   Hang T;
    for(int i=0; i<n; i++)
    {
        f>>T;
        cout<<T<<endl;
    }

    f.close();
}
