/*#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a,b,c,p,s;
	cout<<"请输入三条边的长度：";
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<< "三角形面积"<<s<<endl;
	return 0;
	}*/


	/*#include <iostream>
	using namespace std;

	int main()
	{
	int x;
	char n;
	cout<< "请输入一个不大于127的正整数>>";
	cin>>x;
	n=x;
	cout<< "字符"<<n<<endl;
	cout<< "ASCII码"<<x<<endl;
	return 0;
	}*/


	/*#include <iostream>
	#include <iomanip>
	using namespace std;

	int main()
	{
		int R;
		double S,V;
		const double B=3.1415;
		cout<< "请输入球体半径:";
		cin>>R;
		S=4*B*R*R;
		V=B*R*R*R*(4.0/3);
		cout<< "半径"<<R<<"的球体体积为"<<setiosflags(ios::fixed)<<setprecision(4)<<V<<endl;
		cout<< "半径"<<R<<"的球体表面积为"<<setiosflags(ios::fixed)<<setprecision(4)<<S<<endl;
		return 0;
	}
	*/


	/*#include<iostream>
	#include<cmath>
	using namespace std;

	int main()
	{
		double x,y;
		cout<<"输入x的值";
		cin>>x;
		if(x<=0)
			x=fabs(x),y=cos(x);
		else
			if(x>0&&x<=38)
				y=2.0*x+2;
			else
				if(x<67)
					y=x*x;
				else
					if(x>=67)
						y=4.0*x+x/1.0;
		cout<<"函数值为"<<y<<endl;
		return 0;
	}*/


	/*#include<iostream>
	using namespace std;

	int main()
	{
		int x,A,B;
		cin>>x;
		A=x%3;B=x%5;
		if(A==0&&B!=0)
			cout<<x<<"能被3但不能被5整除"<<endl;
		if(B==0&&A!=0)
			cout<<x<<"能被5整除但不能被3整除"<<endl;
		if(A==0&&B==0)
			cout<<x<<"能被3和5同时整除"<<endl;
		if(A!=0&&B!=0)
			cout<<x<<"既不能被3整除也不能被5整除"<<endl;

			return 0;
	}*/


#include<iostream>
using namespace std;
void main()
{
	float a, b, X; char op;
	cout << "Bejin cout:\n ";
	cin >> a >> op >> b;
	switch (op)
	{
	case'+':
	case'-':
	case'*':
	case'/':
		X = a; char op; b;
		cout << X << endl;
		break;
	default:
		cout << "error" << endl;
	}
}


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
	cout<<a<<'\t'<<b<<'\t'<<c<<endl;
	return 0;
}*/


/*#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long int i;
	cin>>i;
	int bonus;
	if(i<=100000)
		bonus=0.1*i;
	else
		if(i<=200000)
			bonus=100000*0.1+(i-100000)*0.075;
		else
			if(i<=400000)
				bonus=100000*0.1+100000*0.075+(i-200000)*0.05;
			else
				if(i<=600000)
					bonus=100000*0.1+100000*0.075+200000*0.05+(i-400000)*0.03;
				else
					if(i<=1000000)
						bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015;
					else
						if(i>1000000)
							bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01;
	cout<<"bonus = "<<bonus<<endl;
	return 0;
}*/


/*#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long int i;
	cin>>i;
	int bonus=0;
	if(i>1000000)
		bonus=(i-1000000)*0.01,i=1000000;
	else if(i>600000)
		bonus+=(i-600000)*0.015,i=600000;
	else if(i>400000)
		bonus+=(i-400000)*0.03,i=400000;
	else if(i>200000)
		bonus+=(i-200000)*0.05,i=200000;
	else if(i>100000)
		bonus+=(i-100000)*0.075,i=100000;
	else if(i>=0)
		bonus=i*0.1;
	cout<<"bonus="<<bonus<<endl;
		return 0;
}*/








/*#include<iostream>
using namespace std;

int main()
{
	int n,a,b,c;
	for(n=100;n<1000;n++)
	{
		a=n/100;
		b=n/10-a*10;
		c=n%10;
		if(n==a*a*a+b*b*b+c*c*c)
			cout<<n<<"是水仙花数"<<endl;
	}
	return 0;
}*/