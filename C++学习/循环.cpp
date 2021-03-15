/*
循环体   循环控制条件
1、do - while循环：
先执行循环体，然后再判断循环条件是否满足   至少执行一次

do
{
	循环体语句；
}while（表达式）；


2、while循环：
先判断条件是否满足，然后在执行循环体   可能一次也不执行

循环开始前对循环条件进行初始化
while（表达式）
	{ 循环体语句； }      在循环体条件中要包含修改循环条件的语句

	
3、for循环：
先判断条件是否满足，然后再执行循环体   可能一次也不执行

for (表达式1；表达式2；表达式3)    式1：初始表达式 - 对2中的循环控制变量赋初值
	{循环体语句；}                 式2：循环控制变量表达式
			                       式3：循环后置表达式 - 改变2中循环控制变量的值


*/



#include<iostream>
#include<cmath>
#include<iomanip>
			using namespace std;

	int main()
	{

		//输入10个圆的半径，并输出这10个圆的半径和相应的面积
			int i=0;
			double s,r;
			//while循环
			while(i<10)
			{
				cin>>r;
				s=3.14*r*r;
				cout<<"s="<<s<<"\n";
				i++;
			}*

			//for循环
			for(i=0;i<10;i++) //(i=1;i<=10;i++)
			{
				cin>>r;
				s=3.14*r*r;
				cout<<"s="<<s<<"\n";
			}


			输入半径，求圆的面积；当输入非正数时，反复输入，直到输入半径为正数。
			double s，r;
			do
			{
			  cin>>r;
			}while(r<=0);
			s=3.14*r*r;
			cout<<"s="<<s<<"\n";

			//输入半径，求圆的面积；当输入非正数时，反复输入，最多输入3次，或者直到输入半径为正数。
				int i=1;
				double r,s;
				do
					{
						cin>>r;
						i++;
					}while(r<=0&&i<=3);
					/*if(r>0)
					{
						s=3.14*r*r;
						cout<<"s="<<s<<"\n";
					}
					else cout<<"rerror!"<<endl;*/

					/*s=3.14*r*r;
					cout<<"s="<<s<<"\n";*/



					//输入一个不超过9位数的整数，将其反向输出；
						/*int n;
						cin>>n;
						while(n!=0)
						{
							cout<<n%10;
							n/=10;
						}
						cout<<endl;*/



						//输出所有形如aabb的四位完全平方数
							/*int i,a,b,c,d,n;
							for(i=10;i<100;i++)
							{
								n=i*i;
								if(n>=1000&&n<=9999)
								{
									a=n/1000;
									b=n/100%10;
									c=n/10%10;
									d=n%10;
									if(a==b&&c==d)
										cout<<n;

								}
							}*/



							//小张现在有10万元的储蓄，将这笔钱存进银行，年利率为5%，并且利滚利，问：多少年后，小张的积蓄能够翻一番？
								/*int i=0;
								double m=10;
								while(m<20)
								{
									m=m*1.05;
									i++;
								}
								cout<<"i="<<i<<endl;
								*/


								/*int i=0;
								double m=10;
								for(m=10;m<20;m=m*1.05)
									i++;
								cout<<"i="<<i<<endl;
								*/




								//从键盘输入10个数。找出这些数的最小值并输出。
									/*int n,x,min;
									cin>>n;
									for(int i=0;i<n;i++)
									{
										cin>>x;
										if(i==0)  min=x;
										if(x<min)  min=x;

									}
									cout<<min<<endl;
									*/

									//将十进制整数n转换为二进制数
										/*int n,q;
										int r;
										cin>>n;
										do{
											r=n%2;
											cout<<r;
											n=n/2;
										}while(n);
										*/


										//将十进制整数n逆序输出
											/*int n;
											int r;
											cin>>n;
											do{
												r=n%10;
												cout<<r;
												n=n/10;
											}while(n!=0);
											*/



											//累加框架

												/*int sum=0;
												int n;
												cin>>n;
												int item=1;
												for(int i=1;i<=n;i++)
												//2+4+...+2n;
												for(int i=1;i<=n;i++)
													sum+=2*i;
												cout<<sum<<endl;
												//1+2！+3！+...+n!;
												for(int i=1;i<=n;i++)
													item*=i,sum+=item;
												//1+2+4+8+...+2N;
												for(int i=0;i<=n;i++)
													sum+=item,item*=2;
												*/




												//将十进制数n转换为二进制数
													//数位提取+累加框架
													/*int n;
													cin>>n;
													int sum,w,item,b;
													sum=0;
													w=1;
													do{
														b=n%2;
														item=b*w;
														sum+=item;
														w*=10,n/=2;
													}while(n);
													cout<<sum<<endl;
													*/


													//除虫版
													/*int n;
													cin>>n;
													int t=n,i=0;
													do//求位长
													{
														t=t/2;
														i++;
													}while(t);
													int w,b;
													//从高位开始提取
													for(int j=i-1;j>=0;j--)
														w=pow(2.0,j),
														b=n/w,
														cout<<b,
														n=n%w;
													cout<<endl;
													*/


													//算命
													/*算命方法：
													将某人的出生年月日加起来
													如果结果不是一位数，就再相加
													如果相加之后还是一位数以上的话，就再相加，直到变成一位数
													例如：1994 年3 月20 日出生的人
													1....1+9+9+4+0+3+2+0=28
													2....28>9：需再计算2+8=10
													3....10>9：需再计算1+0=1

													*/
													/*int birth,sum;
													cin>>birth;
													do
													{
														sum=0;
														do
														{
															sum+=birth%10;
															birth=birth/10;
														}while(birth!=0);
														birth=sum;
													}while(sum>9);
													*/

													//穷举
														/*int i,j,k;
														for(i=0;i<=20;i++)
															for(j=0;j<=33;j++)
															{
																k=100-i-j;
																if(k%3)continue;
																if(5*i+3*j+k/3==100) cout<<i<<"  "<<j<<"  "<<k<<endl;

															}
															*/


															//素数问题
																/*double m;
																int t=m;
																cin>>m;
																int t=sqrt(m);
																int flag=1;
																for(int i=2;i<=t;i++)
																	if(m%i==0)
																	{
																		flag=0;
																		break;
																	}
																	if(flag) cout<<m<<"是素数"<<endl;
																	else cout<<m<<"不是素数"<<endl;
																	*/


																	//正整数n分解为质因数之积
																		/*int n;
																		cin>>n;
																		int k=2;
																		int t=n;
																		while(k<=n)
																		{
																			if(n%k==0)
																			{
																				if(t==n) cout<<n<<'='<<k;
																				else cout<<'*'<<k;
																				n=n/k;
																			}
																			else k++;
																		}
																		*/


																		//找到[1,n]中的完全数
		int n;
		cin >> n;
		int m = 2;
		for (m = 2; m <= n; m++)
		{
			int sum = 1;
			int k;
			for (k = 2; k < sqrt(double(m)); k++)
				if (m % k == 0)
					sum = sum + k + m / k;
			if (k * k == m)
				sum += k;
			if (sum == m)
				cout << m << endl;
		}


		//规则图形打印
			/*char in;
			cin>>in;
			int k=in-'A';
			for(int i=0;i<=k;i++)
			{
				for(int j=0;j<2*(k-i);j++) cout<<" ";
				for(int j=0;j<2*i+1;j++) cout<<char('A'+i)<<" ";
				cout<<endl;
			}*/


			//完整字符菱形
				/*char in;
				cin>>in;
				int k=in-'A';
				for(int i=0;i<=k;i++)
				{
					for(int j=0;j<2*(k-i)+1;j++)
						cout<<" ";
					for(int j=0;j<2*i+1;j++)
						cout<<char('A'+i)<<" ";
					cout<<endl;
				}
				for(int i=k-1;i>=0;i--)
				{
					for(int j=0;j<2*(k-i)+1;j++)
						cout<<" ";
					for(int j=0;j<2*i+1;j++)
						cout<<char('A'+i)<<" ";
					cout<<endl;
				}
				*/






		return 0;
	}


	/*#include<iostream>
	#include<iomanip>
	using namespace std;
	void main(void)
	{
		int a[5][5];
		int i,j,sum=0;
		int n=1;
		for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		a[i][j]=n++;

		for(i=0;i<5;i++)
		{
			for(j=0;j<=i;j++)
			cout<<a[i][j]<<'\t';
			cout<<endl;
		}
		for(i=0;i<5;i++)
		{
		for(j=0;j<=i;j++)

		sum+=a[i][j];
		}
		cout<<"数组左下三角的元素之和"<<sum<<endl;
	}*/




#include<iostream>
#include<iomanip>
#include<cstring>
	using namespace std;
	int main()
	{
		//查找数列的最大值
		int a[100];
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int max = 0;
		for (int i = 0; i < n; i++)
			if (a[i] > a[max])
				max = i;
		cout << a[max] << endl;


		//输入一个日期，计算该日期是当年的第几天
		int i, sum = 0;
		int year, month, day;
		cin >> year >> month >> day;
		int mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (year % 4 == 0 && year % 4 != 100 || year % 400 == 0)
			mon[2] = 29;
		for (i = 1; i < month; i++)
			sum += mon[i];
		sum += day;
		cout << sum << endl;


		//判断s2是否是s1的子串    如果不是，输出-1    否则，输出所有的匹配首位置
		char s1[100];
		char s2[100];
		cin >> s1 >> s2;
		int n = 0;
		int i = 0, j;
		while (s1[i] != '\0')
		{
			for (j = 0; s2[j] != '\0'; j++)
				if ()


					return 0;
		}