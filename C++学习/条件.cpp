/*
一、分支结构：
1、单分支：表达式 真-语句块-输出 假-输出错误
		   当有多条语句时，用  if(表达式)
							   {语句块；}
2、双分支：表达式 真-语句块1-输出 假-语句块2-输出
		   if（表达式）
		   {语句块1；}
		   else
		   {语句块2；}
3、嵌套分支（多级分支）：表达式1 真-语句1-输出 假-表达式2
						 表达式2 真-语句2-输出 假-表达式3
						 表达式3 真-语句3-输出 假-表达式4
						 ......
		   if（表达式1) {分支语句块1；}
		   else if（表达式2） {分支语句块2；}
		   else if（表达式3） {分支语句块3；}
		   ......
		   else if(表达式n-1) {分支语句块n-1；}
		   else（表达式n）{分支语句块n；}

  分支结构中if的嵌套问题:
  if()
	 {if
	 else
	 }
  else


  swtich语句：

  switch（表达式）
  {
  case 常量表达式1：语句1;break;
  case 常量表达式2：语句2;break;
  ......
  case 常量表达式n：语句n;break;
  default：语句n+1;
  }

*/
#include<iostream>
using namespace std;

int main()
{

	//判断某年是否是闰年（条件：1、能被4整除但不能被100整除。2、能被400整除）
	int year;
	cout<<"输入年份"<<endl;
	cin>>year;
	if(year%4==0&&year%100!=0||year%400==0)// !(year%4)&&year%100||!(year%400)
		cout<<year<<"年是闰年"<<endl;
	else cout<<year<<"年不是闰年"<<endl;



	//不分段计费     商场打折问题1:总金额>400,9折；总金额245-400，95折；总金额125-245，97折；总金额<125,不优惠。
	double amount;
	cout<<"输入总额";
	cin>>amount;
	if(amount>=400) amount*=0.9;
	else if(amount>=245) amount*=0.95;
	else if(amount>=125) amount*=0.97;
	else amount=amount;
	cout<<"总金额为"<<amount<<endl;



	//分段计费：从大至小  
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


	//对输入字符进行判断，如果是大写，输出其小写，否则输出原字符
	char ch;
	cout<<"ch="<<endl;
	cin>>ch;
	if(ch>='A'&&ch<<='Z')
		ch+='a'-'A';
	cout<<ch<<endl;
	else
		cout<<ch<<endl;

	//根据输入的年份输出该年的生肖，如：1998-龙；（提示：1972-鼠）
	int year;
	cout << "年份";
    cin >> year;
	int i;
    i = year % 12;
	char a[] = { "猴鸡狗猪鼠牛虎兔龙蛇马羊" };
	cout << a[2 * i] << a[2 * i + 1] << endl;

	return 0;
}

