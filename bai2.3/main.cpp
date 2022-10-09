#include <bits/stdc++.h>

using namespace std;
class Mang
{
private:
    float *a;
    int n;
public:
    void nhap();
    float Max();
    float Min();
    void xuat();
};
void Mang::nhap()
{
    cout <<"nhap n=";cin >> n;
    a=new float[n];
    for(int i=0;i<n;i++)
    {
        cout <<"["<<i<<"]=" ;
        cin >>a[i];
    }

}
float Mang::Max()
{
    float max1=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>max1)
            max1=a[i];

    return max1;

}
float Mang::Min()
{
    float min1=a[0];
    for(int i=0;i<n;i++)
        if(a[i]<min1)
            min1=a[i];
    return min1;
}
void Mang::xuat()
{
    cout <<"mang vua nhap";
    for(int i=0;i<n;i++)
    cout <<a[i];

}
int main()
{
    Mang p;
    p.nhap();
    p.xuat();
    cout <<endl;
    cout <<"max la"<<p.Max()<<endl;
    cout <<"in la"<<p.Min();
}
