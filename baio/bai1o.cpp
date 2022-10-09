#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    do
    {
    cout <<"nhap n";//nhap n phan tu
    cin>>n;
    }
    while(n<0||n>1000);
    int a[];
    for(int i=0;i<n;i++)
    {

    cout<<"nhap mang"<<i<<":";
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j])
            swap(a[i],a[j])

    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[n-1]+a[n-2]+a[n-3];
         cout<<"xuat mang:"<<sum;
    }


}
