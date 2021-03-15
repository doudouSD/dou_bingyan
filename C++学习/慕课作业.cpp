/*
#include<iostream>
using namespace std;

int main()
{
	return 0;
}
*/


/*#include<iostream>
using namespace std;

int main()       慕课第一章
{
	cout<<"华中科技大学欢迎你"<<"\n";
	return 0;
}*/


/*#include<iostream>
#include<iomanip>
using namespace std;
int main()        慕课第一章

{
	char x;
	cin>>x;
	cout<<setw(9)<<x<<"\n";  //12
	cout<<setw(7)<<x<<setw(2)<<x<<"\n";  //9,3
	cout<<setw(5)<<x<<setw(2)<<x<<setw(2)<<x<<"\n";  //6,3,3
	return 0;
}*/


/*#include<iostream>             慕课第二章
#include<cmath>
using namespace std;

int main()
{
	int n;
	double y;
	cin>>n;
	if(-10<n&&n<10)
		y=pow(2.0,n)+1;
	cout<<y<<endl;
	return 0;
}*/


/*#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int r;
	int s=0;
	do{
		r=n%10;
		s=s*10+r;
		cout<<s;
		n=n/10;
	}while(n);
	return 0;
}*/


/*#include<iostream>
using namespace std;

int main()
{
	char in;	cin>>in; //输入大写字符
	int k=in-'A'; //计算in与‘A’的距离，k为末行编号
	int i,j;
	for(i=0;i<=k;i++)
	{
		for(j=0;j<2*(k-i);j++) cout<<' ';
		for(j=0;j<2*i+1;j++) cout<<char('A'+i)<<' ';
		cout<<endl;
	}
	return 0;
}*/


/*#include<iostream>
using namespace std;

int main()
{
	char in;
	cin>>in;
	int k=in-'A';
	int i,j;
	for(i=0;i<=k;i++)
	return 0;
}*/


/*#include<iostream>
using namespace std;

int main()
{
	int t;cin>>t;
	int sg,sr;
	int station=0;//0:
	for(int i=1;i<=t;i++)
	{
		sg+=3;
	}
	return 0;
}*/


/*#include<iostream>
using namespace std;

int main()
{
	return 0;
}*/


/*#include<iostream>

using namespace std;
int main()
{int n,a,b,c;

	for(n=100;n<1000;n++)

	{a=n/100;

	b=n/10-a*10;

	c=n%10;

	if(n==a*a*a+b*b*b+c*c*c)

		cout<<n;}
		return 0;

}*/


/*#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	int t;
	cout<<"输入三个整数";
	cin>>a>>b>>c;
	if(a<b)
		t=a,a=b,b=t;
	if(a<c)
		t=a,a=c,c=t;
	if(b<c)
		t=b,b=c,c=t;
	cout<<a<<'\t'<<b<<'\t'<<c;
	return 0;
}*/


#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "输入n的值";
	cin >> n;
	int sum = 1;
	int i;
	int j;
	for (i = 1; i <= n; i++)
	{
		for (j = 2; j < n; j++)
			if (i % j == 0)
				sum = sum + j;
		if (i == sum)
			cout << i << endl;
		sum = 1;
	}


	return 0;
}