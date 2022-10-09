#include <iostream>

using namespace std;
int uoc(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)//chay vong for tu 1 den n roi tinh tong cac uoc
        if(n%i==0)
        sum+=i;
    return sum;//tong cac uoc
}
int main()
{
    int n;
    do
    {
    cout <<"nhap n";//nhap n phan tu
    cin>>n;
    }
    while(n<1||n>1000000000);
    cout <<uoc(n);


}
