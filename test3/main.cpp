#include <bits/stdc++.h>

using namespace std;
class hang
{
    char MaH[30];
    char TEnH[30];
    float DG;
    int TL;
    char MAUSAC[30];
public:
    friend istream & operator >>(istream &x,hang &y);
    friend ostream & operator<<(ostream &x,hang y);

};
istream & operator >>(istream &x,hang &y)
{
    fflush(stdin); x.getline(y.MaH,30);
    fflush(stdin);x.getline(y.TEnH,30);
    x>>y.DG;
    x>>y.TL;
    x.ignore();
    x.getline(y.MAUSAC,30);
    return x;
}
ostream & operator<<(ostream &x,hang y)
{
    x<<y.MaH<<endl;
    x<<y.TEnH<<endl;
    x<<y.DG<<endl;
    x<<y.TL<<endl;
    x<<y.MAUSAC<<endl;
    return x;

}
int main()
{
    hang *a;
    int n;
    cout <<"nhap n";cin >>n;
    a=new hang [n];
    for(int i=0;i<n;i++)
        cin >>a[i];
    for(int i=0;i<n;i++)
        cout <<a[i];
    fstream f("D:/ABS.DAT",ios::out);
    for(int i=0;i<n;i++)
    f<<a[i];
    f.close();
    fstream f("D:/ABS.DAT",ios::in);
    for(int i=0;i<n;i++)
    f>>a[i];
    f.close();
    for(int i=0;i<n;i++)
      cout <<a[i];
