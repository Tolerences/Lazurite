#include<iostream>
using namespace std;
#include<string>
#include<ctime>
#include <fstream>
struct investigatation
{
	float startmoney;
	string name;
	float revenue;
	float moneytotal;
	int stocknumber[2];
	string stockname;
};
struct stock 
{
	string stockname;
	float cost;
	float �仯��;
	int totalstock;
	float price;
};
int buy1( int g,int number,int stocknumber[])
{
	return stocknumber[g]+number;
}
double buy2(float totalmoney,float cost,int number,float change)
{
	cost = cost + change;
	return totalmoney - number * cost;
}
int buy3(int totalstock, int number)
{
	return totalstock - number;
}
double sella(float totalmoney,  int number, int price) 
{
	return totalmoney + number * price;
}
int sellb(int totalstock, int number)
{
	return  totalstock - number;
}
int sellc(int personstock, int number)
{
	return  personstock - number;
}
void savetotalmoney(float totalmoney)
{
	fstream data1;
	data1.open("savetotalmoney.txt", ios::out);
	data1 << totalmoney;
	data1.close();
}
void savestock1(float stock1)
{
	fstream data2;
	data2.open("savestock1.txt", ios::out);
	data2 << stock1;
	data2.close();
}
void savestock2(float stock2)
{
	fstream data3;
	data3.open("savestock2.txt", ios::out);
	data3 << stock2;
	data3.close();
}
void saveprice1(float price1)
{
	fstream data1;
	data1.open("saveprice1.txt", ios::out);
	data1 << price1;
	data1.close();
}
void saveprice2(float price2)
{
	fstream data1;
	data1.open("saveprice2.txt", ios::out);
	data1 << price2;
	data1.close();
}
float readtotalmoney()
{
	ifstream data;
	data.open("savetotalmoney.txt", ios::in);
	float buf;
	data >> buf;
	data.close();
	return buf;
}
float readstock1()
{
	ifstream data;
	data.open("savestock1.txt", ios::in);
	float buf;
	data >> buf;
	data.close();
	return buf;
}
float readstock2()
{
	ifstream data;
	data.open("savestock2.txt", ios::in);
	float buf;
	data >> buf;
	data.close();
	return buf;
}
float readprice1()
{
	ifstream data;
	data.open("saveprice1.txt", ios::in);
	float buf;
	data >> buf;
	data.close();
	return buf;
}
float readprice2()
{
	ifstream data;
	data.open("saveprice2.txt", ios::in);
	float buf;
	data >> buf;
	data.close();
	return buf;
}
int isexist()
{

	return 0;
}

void showmenu()
	{
	cout << "***********-----ģ��Ͷ��-----***********" << endl;
	cout << "--��������������������������������������-" << endl;
	cout << "|---------------------------------------|" << endl;
	cout << "****************************************" << endl;
	cout << "************* 1.�ֹ�����  **************" << endl;
	cout << "************* 2.������Ϣ  **************" << endl;
	cout << "************* 3.���۹�Ʊ  **************" << endl;
	cout << "************* 4.�����Ʊ  **************" << endl;
	cout << "************* 5.�����ȴ�  **************" << endl;
	cout << "************* 6.��������  **************" << endl;
	cout << "************* 7.��������  **************" << endl;
	cout << "************* 8.ɾ������  **************" << endl;
	cout << "************* 9.�˳�����  **************" << endl;
	cout << "****************************************" << endl;
	cout << "|---------------------------------------| "<< endl;
	cout << "        <�������Ӧ����ѡ�����>            " << endl;
	}
int mainq()
{
	struct investigatation A;
	A.name = "��γ�";
	A.startmoney = 5000;
		A.moneytotal = readtotalmoney();
		A.revenue = 0;
		int* a = &A.stocknumber[2];
		a[0] = readstock1();
		a[1] = readstock2();
		A.stocknumber[0] = a[0];
		A.stocknumber[1] = a[1];
	struct stock ����˹��ҵָ��;
	����˹��ҵָ��.stockname = "����˹��ҵָ��";
	����˹��ҵָ��.cost = 1500;
	����˹��ҵָ��.price = readprice1();
	����˹��ҵָ��.totalstock = 5000;
	����˹��ҵָ��.�仯�� = 0;
	struct stock ��׼�ն�ָ��;
	��׼�ն�ָ��.stockname = "��׼�ն�ָ��";
	��׼�ն�ָ��.cost = 500;
	��׼�ն�ָ��.price = readprice2();
	��׼�ն�ָ��.totalstock = 25000;
	��׼�ն�ָ��.�仯�� = 0;
	float* p1price = 0;
	float* p2price = 0;
	int select1 = 0;
	int b = 0;
	int* pone = 0;
	int n1 = 0;
	int s1 = 0;
	int select = 0;
	int n2 = 0;
	int s2 = 0;
	int v = 0;
	int ss1 = 0;
	int ss2 = 0;
	int select3 = 0;
	int select30 = 0;
	int b1 = 0;
	int nsella = 0;
	int ssella = 0;
	int sstocka = 0;
	int nsellb = 0;
	int ssellb = 0;
	int sstockb = 0;
	int C1 = 0;
	int C2 = 0;
	int u = 0;
	while (true)
	{
		A.revenue = readtotalmoney() - A.startmoney + readstock1() *readprice1()  + readstock2() * readprice2();
		showmenu();
		cin >> select;
		switch (select)
		{
		case 1:
			cout << "������" << A.name << endl;
			cout << "�ܽ�" << readtotalmoney()<< endl;
			cout << "����һ�͹�Ʊ������" << readstock1() << endl;
			cout << "���ж��͹�Ʊ������" << readstock2() << endl;
			cout << "��ǰ���棺" << A.revenue << endl;
			cout << "��ʼͶ�ʽ�" << A.startmoney << endl;
			system("pause");
			system("cls");
			break;
		case 2:cout << "��Ʊ����:" << ����˹��ҵָ��.stockname <<"\t" << "��Ʊ�۸�:" << ����˹��ҵָ��.price << "\t" << "��Ʊ������" << ����˹��ҵָ��.totalstock << "\t" << "��֧��Ʊ�۸�仯��" << ����˹��ҵָ��.�仯�� << "\t" << endl;
			    cout<< "��Ʊ���ƣ�"<< ��׼�ն�ָ��.stockname << "\t" << "��Ʊ�۸�" << ��׼�ն�ָ��.price << "\t" << "��Ʊ������" << ��׼�ն�ָ��.totalstock << "\t" << "��֧��Ʊ�۸�仯��" << ��׼�ն�ָ��.�仯�� << "\t" << endl;
			system("pause");
			system("cls");
			break;
		case 3:srand((unsigned int)time(NULL));
			����˹��ҵָ��.price = readprice1();
			����˹��ҵָ��.�仯�� = rand() % 751 - 250.0000;
			����˹��ҵָ��.price = ����˹��ҵָ��.price + ����˹��ҵָ��.�仯��;
			��׼�ն�ָ��.price = readprice2();
			��׼�ն�ָ��.�仯�� = rand() % 201 - 100.0000;
			��׼�ն�ָ��.price = ��׼�ն�ָ��.price + ��׼�ն�ָ��.�仯��;
			cout << "��ѡ���Ʊ��" << endl;
			cout << "1:����˹��ҵָ��" << endl;
			cout << "2:��׼�ն�ָ��" << endl;
			while (true)
			{
				cin >> select3;
				if (select3 == 1 || select3 == 2)
				{
					switch (select3)
					{
					case 1:
						cout << "������Ҫ���۹�Ʊ��������" << endl;
						pone = &A.stocknumber[0];
						cin >> b1;
						if (sellb(A.stocknumber[0], b1) > 0 || sellb(A.stocknumber[0], b1) == 0)
						{
							cout << "�ù����ڼ۸�Ϊ��" << ����˹��ҵָ��.price << endl;
							cout << "���ۺ�������ý�" << b1 * ����˹��ҵָ��.price << endl;
							cout << "ʣ��ùɣ�" << sellb(A.stocknumber[0], b1) << endl;
							cout << "�Ƿ������\t" << "1.��\t" << "�����ַ�.��\t" << endl;
							cin >> select30;
							if (select30 == 1)
							{
								A.revenue = A.moneytotal - A.startmoney + A.stocknumber[0] * ����˹��ҵָ��.price + A.stocknumber[1] * ��׼�ն�ָ��.price;
								C1 = A.stocknumber[0] - b1;
								A.stocknumber[0] = sellb(A.stocknumber[0], b1);
								A.moneytotal = sella(A.moneytotal, ����˹��ҵָ��.price, b1);



								cout << "���۳ɹ���" << endl;
								cout << "�����ڵ��ʽ�Ϊ��" << A.moneytotal << endl;
								cout << "�����ڵĸù�����Ϊ��" << A.stocknumber[0] << endl;
								cout << "���������ǣ�" << A.revenue << endl;
								savetotalmoney(A.moneytotal);
								savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
								saveprice1(����˹��ҵָ��.price);
								saveprice2(��׼�ն�ָ��.price);
							}
							else
							{
								cout << "�����Ѿ�ȡ��!" << endl;

							}
						}
						else { cout << "���ĸ��ֹ�Ʊ���㣡" << endl; }
						break;
					
					case 2:
						cout << "������Ҫ���۹�Ʊ��������" << endl;
						pone = &A.stocknumber[1];
						cin >> b1;
						if (sellb(A.stocknumber[1], b1) > 0 || sellb(A.stocknumber[1], b1) == 0)
						{
							cout << "�ù����ڼ۸�Ϊ��" << ��׼�ն�ָ��.price << endl;
							cout << "���ۺ�������ý�" << b1 * ��׼�ն�ָ��.price << endl;
							cout << "ʣ��ùɣ�" << sellb(A.stocknumber[1], b1) << endl;
							cout << "�Ƿ������\t" << "1.��\t" << "�����ַ�.��\t" << endl;
							cin >> select30;
							if (select30 == 1)
							{
								A.revenue = A.moneytotal - A.startmoney + A.stocknumber[0] * ����˹��ҵָ��.price + A.stocknumber[1] * ��׼�ն�ָ��.price;
								C1 = A.stocknumber[1] - b1;
								A.stocknumber[1] = sellb(A.stocknumber[1], b1);
								A.moneytotal = sella(A.moneytotal, ��׼�ն�ָ��.price, b1);




								cout << "���۳ɹ���" << endl;
								cout << "�����ڵ��ʽ�Ϊ��" << A.moneytotal << endl;
								cout << "�����ڵĸù�����Ϊ��" << A.stocknumber[1] << endl;
								cout << "���������ǣ�" << A.revenue << endl;
								savetotalmoney(A.moneytotal);
								savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
								saveprice1(����˹��ҵָ��.price);
								saveprice2(��׼�ն�ָ��.price);
							}
							else
							{
								cout << "�����Ѿ�ȡ��!" << endl;

							}
						}
						else { cout << "���ĸ��ֹ�Ʊ�������㣡" << endl; }
						break;
					
					}
					break;
				}
				cout << "��������ȷ�����֡�" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 4:srand((unsigned int)time(NULL));
			����˹��ҵָ��.price = readprice1();
			��׼�ն�ָ��.price = readprice2();
			����˹��ҵָ��.�仯�� = rand() % 751 - 250.0000;
			����˹��ҵָ��.price = ����˹��ҵָ��.price + ����˹��ҵָ��.�仯��;
			��׼�ն�ָ��.�仯�� = rand() % 201 - 100.0000;
			��׼�ն�ָ��.price = ��׼�ն�ָ��.price + ��׼�ն�ָ��.�仯��;
			cout << "��ѡ���Ʊ��" << endl;
			cout << "1:����˹��ҵָ��" << endl;
			cout << "2:��׼�ն�ָ��" << endl;
			while (true)
			{
				cin >> select1;
				if (select1 == 1 || select1 == 2)
				{
					switch (select1)
					{
					case 1:
						cout << "������Ҫ����Ĺ�����" << endl;
						cin >> b;
						pone = &A.stocknumber[0];
						cout << "�ù����ڼ۸�Ϊ��" << ����˹��ҵָ��.price << endl;
						cout << "���������ʧȥ��" << b * ����˹��ҵָ��.price << endl;
						cout << "�������������" << buy2(A.moneytotal, ����˹��ҵָ��.cost, b, ����˹��ҵָ��.�仯��) << endl;
						cout << "�����ʣ��ùɣ�" << buy1(0, b,pone) << endl;
						cout << "�Ƿ������\t" << "1.��\t" << "�����ַ�.��\t" << endl;
						cin >> select30;
						if (select30 == 1)
						{
							p1price = &����˹��ҵָ��.price;
							n1 = buy1(u, b, pone);
							s1 = buy2(A.moneytotal, ����˹��ҵָ��.cost, b, ����˹��ҵָ��.�仯��);
							ss1 = buy3(����˹��ҵָ��.totalstock, b);

							if (s1 > 0 || s1 == 0)
							{
								cout << "����ɹ���" << endl;
								cout << "�����ڵ��ʽ�Ϊ��" << s1 << endl;
								cout << "�����ڵĸóֹ�����Ϊ��" << n1 << endl;
								A.moneytotal = s1;
								A.stocknumber[0] = n1;
								����˹��ҵָ��.totalstock = ss1;
								����˹��ҵָ��.price = ����˹��ҵָ��.price + ����˹��ҵָ��.�仯��;
								savetotalmoney(A.moneytotal);
								savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
								saveprice1(����˹��ҵָ��.price);
								saveprice2(��׼�ն�ָ��.price);
							}
							else { cout << "���Ľ��㣬�޷�����" << endl; }
						}
						else
						{
							cout << "������ȡ����" << endl;
						}
						break;
					case 2:
						pone = &A.stocknumber[1];
						p2price = &��׼�ն�ָ��.price;
						cout << "������Ҫ����Ĺ�����" << endl;
						cin >> v;
						cout << "�ù����ڼ۸�Ϊ��" << ��׼�ն�ָ��.price << endl;
						cout << "���������ʧȥ��" << v * ��׼�ն�ָ��.price << endl;
						cout << "�������������" << buy2(A.moneytotal, ��׼�ն�ָ��.cost, v, ��׼�ն�ָ��.�仯��) << endl;
						cout << "�����ʣ��ùɣ�" << buy1(1, v, pone) << endl;
						cout << "�Ƿ������\t" << "1.��\t" << "�����ַ�.��\t" << endl;
						cin >> select30;
						if (select30 == 1)
						{
							n2 = buy1(u, v, pone);
							s2 = buy2(A.moneytotal, ��׼�ն�ָ��.cost, v, ��׼�ն�ָ��.�仯��);
							ss2 = buy3(��׼�ն�ָ��.totalstock, v);
							if (s2 > 0 || s2 == 0)
							{
								cout << "����ɹ���" << endl;
								cout << "�����ڵ��ʽ�Ϊ��" << s2 << endl;
								cout << "�����ڵĸóֹ�����Ϊ��" << n2 << endl;
								A.moneytotal = s2;
								A.stocknumber[1] = n2;
								��׼�ն�ָ��.totalstock = ss2;
								��׼�ն�ָ��.price = ��׼�ն�ָ��.price + ��׼�ն�ָ��.�仯��;
								savetotalmoney(A.moneytotal);
								savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
								saveprice1(����˹��ҵָ��.price);
								saveprice2(��׼�ն�ָ��.price);
							}
							else { cout << "���Ľ��㣬�޷�����" << endl; }
						}
						else{ cout << "������ȡ����" << endl; }
						break;
					}
					break;
				}
				cout << "��������ȷ�����֡�" << endl;
			}
			
			
			system("pause");
			system("cls");
			break;
		case 5:����˹��ҵָ��.price = readprice1();
			��׼�ն�ָ��.price = readprice2();
			srand((unsigned int)time(NULL));
			����˹��ҵָ��.�仯�� = rand() % 751 - 250.0000;
			����˹��ҵָ��.price = ����˹��ҵָ��.price + ����˹��ҵָ��.�仯��;
			��׼�ն�ָ��.�仯�� = rand() % 201 - 100.0000;
			��׼�ն�ָ��.price = ��׼�ն�ָ��.price + ��׼�ն�ָ��.�仯��;
			cout << "�����ѷ����仯��" << endl;
			saveprice1(����˹��ҵָ��.price);
			saveprice2(��׼�ն�ָ��.price);
			system("pause");
			system("cls");
			break;
		case 6:A.moneytotal=readtotalmoney();
			A.stocknumber[0] = readstock1();
			A.stocknumber[1] = readstock2();
			����˹��ҵָ��.price = readprice1();
			��׼�ն�ָ��.price = readprice2();
			cout << "����ɹ���" << endl;
			system("pause");
			system("cls");
			break;
		case 7:savetotalmoney(A.moneytotal);
			savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
			saveprice1(����˹��ҵָ��.price);
			saveprice2(��׼�ն�ָ��.price);
			cout << "����ɹ���" << endl;
			system("pause");
			system("cls");
			break;
		case 8:A.moneytotal = 5000;
			A.stocknumber[0] = 0;
			A.stocknumber[1] = 0;
			����˹��ҵָ��.price = 1500;
			��׼�ն�ָ��.price = 500;
			savetotalmoney(A.moneytotal);
			savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
			saveprice1(����˹��ҵָ��.price);
			saveprice2(��׼�ն�ָ��.price);
			cout << "����ɾ���ɹ���" << endl;
			system("pause");
			system("cls");
			break;
		case 9:cout << "��ӭ�´�ʹ�á�" << endl;
			system("pause");
			return 0;
			break;
		default:break;
		
		}
	}
	system("pause");
	return 0;
}