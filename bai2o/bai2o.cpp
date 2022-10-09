#include <iostream>

using namespace std;
int  Fibonacci(int n)
{
	if(n==1||n==2)//n==1||n==2 tra ve 1
	return 1;
	return Fibonacci(n-1)+Fibonacci(n-2);// dung de quy de tinh tong tu 1 1 2...
}
int main()
{
    int n;
	do
	{
		cout <<"nhap n";//nhap n
		cin>>n;
	}while(n<2||n>1000);nhap trong khoan 2 den 1000
	cout <<Fibonacci(n-1)-Fibonacci(n-2);//tra ve ket qua
}
