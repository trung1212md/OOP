#include <bits/stdc++.h>

using namespace std;
class mang
{
    int *a;
    int n;
public:
    friend istream &operator>>(istream &x,mang y);
    friend iostream &operator<<(iostream&x,mang y);

};
istream &operator>>(istream &x,mang y)
{
    x>>y.n;
    for(int i=0;i<y.n;i++)
        x>>y.a[i];
    return x;

}
iostream &operator<<(iostream&x,mang y)
{
    for(int i=0;i<y.n;i++)
    {
        x<<y.a[i];

    }
    return x;

}
int main()
{
    mang K,Q;
    ifstream f;
    f.open("D:/vector.dat",ios::in)
    f>>K;
    cout <<K<<endl;
    f>>P;
    f.close();
}
