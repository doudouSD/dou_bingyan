/*
ѭ����   ѭ����������
1��do - whileѭ����
��ִ��ѭ���壬Ȼ�����ж�ѭ�������Ƿ�����   ����ִ��һ��

do
{
	ѭ������䣻
}while�����ʽ����


2��whileѭ����
���ж������Ƿ����㣬Ȼ����ִ��ѭ����   ����һ��Ҳ��ִ��

ѭ����ʼǰ��ѭ���������г�ʼ��
while�����ʽ��
	{ ѭ������䣻 }      ��ѭ����������Ҫ�����޸�ѭ�����������

	
3��forѭ����
���ж������Ƿ����㣬Ȼ����ִ��ѭ����   ����һ��Ҳ��ִ��

for (���ʽ1�����ʽ2�����ʽ3)    ʽ1����ʼ���ʽ - ��2�е�ѭ�����Ʊ�������ֵ
	{ѭ������䣻}                 ʽ2��ѭ�����Ʊ������ʽ
			                       ʽ3��ѭ�����ñ��ʽ - �ı�2��ѭ�����Ʊ�����ֵ


*/



#include<iostream>
#include<cmath>
#include<iomanip>
			using namespace std;

	int main()
	{

		//����10��Բ�İ뾶���������10��Բ�İ뾶����Ӧ�����
			int i=0;
			double s,r;
			//whileѭ��
			while(i<10)
			{
				cin>>r;
				s=3.14*r*r;
				cout<<"s="<<s<<"\n";
				i++;
			}*

			//forѭ��
			for(i=0;i<10;i++) //(i=1;i<=10;i++)
			{
				cin>>r;
				s=3.14*r*r;
				cout<<"s="<<s<<"\n";
			}


			����뾶����Բ������������������ʱ���������룬ֱ������뾶Ϊ������
			double s��r;
			do
			{
			  cin>>r;
			}while(r<=0);
			s=3.14*r*r;
			cout<<"s="<<s<<"\n";

			//����뾶����Բ������������������ʱ���������룬�������3�Σ�����ֱ������뾶Ϊ������
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



					//����һ��������9λ�������������䷴�������
						/*int n;
						cin>>n;
						while(n!=0)
						{
							cout<<n%10;
							n/=10;
						}
						cout<<endl;*/



						//�����������aabb����λ��ȫƽ����
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



							//С��������10��Ԫ�Ĵ�������Ǯ������У�������Ϊ5%���������������ʣ��������С�ŵĻ����ܹ���һ����
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




								//�Ӽ�������10�������ҳ���Щ������Сֵ�������
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

									//��ʮ��������nת��Ϊ��������
										/*int n,q;
										int r;
										cin>>n;
										do{
											r=n%2;
											cout<<r;
											n=n/2;
										}while(n);
										*/


										//��ʮ��������n�������
											/*int n;
											int r;
											cin>>n;
											do{
												r=n%10;
												cout<<r;
												n=n/10;
											}while(n!=0);
											*/



											//�ۼӿ��

												/*int sum=0;
												int n;
												cin>>n;
												int item=1;
												for(int i=1;i<=n;i++)
												//2+4+...+2n;
												for(int i=1;i<=n;i++)
													sum+=2*i;
												cout<<sum<<endl;
												//1+2��+3��+...+n!;
												for(int i=1;i<=n;i++)
													item*=i,sum+=item;
												//1+2+4+8+...+2N;
												for(int i=0;i<=n;i++)
													sum+=item,item*=2;
												*/




												//��ʮ������nת��Ϊ��������
													//��λ��ȡ+�ۼӿ��
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


													//�����
													/*int n;
													cin>>n;
													int t=n,i=0;
													do//��λ��
													{
														t=t/2;
														i++;
													}while(t);
													int w,b;
													//�Ӹ�λ��ʼ��ȡ
													for(int j=i-1;j>=0;j--)
														w=pow(2.0,j),
														b=n/w,
														cout<<b,
														n=n%w;
													cout<<endl;
													*/


													//����
													/*����������
													��ĳ�˵ĳ��������ռ�����
													����������һλ�����������
													������֮����һλ�����ϵĻ���������ӣ�ֱ�����һλ��
													���磺1994 ��3 ��20 �ճ�������
													1....1+9+9+4+0+3+2+0=28
													2....28>9�����ټ���2+8=10
													3....10>9�����ټ���1+0=1

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

													//���
														/*int i,j,k;
														for(i=0;i<=20;i++)
															for(j=0;j<=33;j++)
															{
																k=100-i-j;
																if(k%3)continue;
																if(5*i+3*j+k/3==100) cout<<i<<"  "<<j<<"  "<<k<<endl;

															}
															*/


															//��������
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
																	if(flag) cout<<m<<"������"<<endl;
																	else cout<<m<<"��������"<<endl;
																	*/


																	//������n�ֽ�Ϊ������֮��
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


																		//�ҵ�[1,n]�е���ȫ��
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


		//����ͼ�δ�ӡ
			/*char in;
			cin>>in;
			int k=in-'A';
			for(int i=0;i<=k;i++)
			{
				for(int j=0;j<2*(k-i);j++) cout<<" ";
				for(int j=0;j<2*i+1;j++) cout<<char('A'+i)<<" ";
				cout<<endl;
			}*/


			//�����ַ�����
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
		cout<<"�����������ǵ�Ԫ��֮��"<<sum<<endl;
	}*/




#include<iostream>
#include<iomanip>
#include<cstring>
	using namespace std;
	int main()
	{
		//�������е����ֵ
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


		//����һ�����ڣ�����������ǵ���ĵڼ���
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


		//�ж�s2�Ƿ���s1���Ӵ�    ������ǣ����-1    ����������е�ƥ����λ��
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