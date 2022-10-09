#include <bits/stdc++.h>

using namespace std;
class HANG
{
    char MaH[30];
    char TENh[30];
    float dongia;
    friend istream& operator>>(istream &x,HANG &y);
    friend ostream & operator<<(ostream &x,HANG y);

};
istream& operator>>(istream &x,HANG &y)
{
    fflush(stdin);x.getline(y.MaH,30);
    fflush(stdin):x.getline(y.TENh,30);
    x>>y.dongia:
    return x;
}
ostream & operator<<(ostream &x,HANG y)
{
    x<<setw(10)<<y.MaH<,setw(10)<<y.TENh<<setw(10)<<y.dongia<<endl;
    return x;
}
int main()
{
    HANG a;
    cin>>a;
    cout <<a;
    ofstream tep;
    tep.open("D:/TEST.TXT",ios::out);
    tep<<a;
    tep.close();
}
