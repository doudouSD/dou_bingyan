/*
һ����֧�ṹ��
1������֧�����ʽ ��-����-��� ��-�������
		   ���ж������ʱ����  if(���ʽ)
							   {���飻}
2��˫��֧�����ʽ ��-����1-��� ��-����2-���
		   if�����ʽ��
		   {����1��}
		   else
		   {����2��}
3��Ƕ�׷�֧���༶��֧�������ʽ1 ��-���1-��� ��-���ʽ2
						 ���ʽ2 ��-���2-��� ��-���ʽ3
						 ���ʽ3 ��-���3-��� ��-���ʽ4
						 ......
		   if�����ʽ1) {��֧����1��}
		   else if�����ʽ2�� {��֧����2��}
		   else if�����ʽ3�� {��֧����3��}
		   ......
		   else if(���ʽn-1) {��֧����n-1��}
		   else�����ʽn��{��֧����n��}

  ��֧�ṹ��if��Ƕ������:
  if()
	 {if
	 else
	 }
  else


  swtich��䣺

  switch�����ʽ��
  {
  case �������ʽ1�����1;break;
  case �������ʽ2�����2;break;
  ......
  case �������ʽn�����n;break;
  default�����n+1;
  }

*/
#include<iostream>
using namespace std;

int main()
{

	//�ж�ĳ���Ƿ������꣨������1���ܱ�4���������ܱ�100������2���ܱ�400������
	int year;
	cout<<"�������"<<endl;
	cin>>year;
	if(year%4==0&&year%100!=0||year%400==0)// !(year%4)&&year%100||!(year%400)
		cout<<year<<"��������"<<endl;
	else cout<<year<<"�겻������"<<endl;



	//���ֶμƷ�     �̳���������1:�ܽ��>400,9�ۣ��ܽ��245-400��95�ۣ��ܽ��125-245��97�ۣ��ܽ��<125,���Żݡ�
	double amount;
	cout<<"�����ܶ�";
	cin>>amount;
	if(amount>=400) amount*=0.9;
	else if(amount>=245) amount*=0.95;
	else if(amount>=125) amount*=0.97;
	else amount=amount;
	cout<<"�ܽ��Ϊ"<<amount<<endl;



	//�ֶμƷѣ��Ӵ���С  
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


	//�������ַ������жϣ�����Ǵ�д�������Сд���������ԭ�ַ�
	char ch;
	cout<<"ch="<<endl;
	cin>>ch;
	if(ch>='A'&&ch<<='Z')
		ch+='a'-'A';
	cout<<ch<<endl;
	else
		cout<<ch<<endl;

	//����������������������Ф���磺1998-��������ʾ��1972-��
	int year;
	cout << "���";
    cin >> year;
	int i;
    i = year % 12;
	char a[] = { "�Ｆ������ţ������������" };
	cout << a[2 * i] << a[2 * i + 1] << endl;

	return 0;
}

