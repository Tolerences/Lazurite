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
	float 变化率;
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
	cout << "***********-----模拟投资-----***********" << endl;
	cout << "--———————————————————-" << endl;
	cout << "|---------------------------------------|" << endl;
	cout << "****************************************" << endl;
	cout << "************* 1.持股详情  **************" << endl;
	cout << "************* 2.股市信息  **************" << endl;
	cout << "************* 3.出售股票  **************" << endl;
	cout << "************* 4.买入股票  **************" << endl;
	cout << "************* 5.稍作等待  **************" << endl;
	cout << "************* 6.读入数据  **************" << endl;
	cout << "************* 7.保存数据  **************" << endl;
	cout << "************* 8.删除数据  **************" << endl;
	cout << "************* 9.退出程序  **************" << endl;
	cout << "****************************************" << endl;
	cout << "|---------------------------------------| "<< endl;
	cout << "        <请输入对应数字选择操作>            " << endl;
	}
int mainq()
{
	struct investigatation A;
	A.name = "万嘉诚";
	A.startmoney = 5000;
		A.moneytotal = readtotalmoney();
		A.revenue = 0;
		int* a = &A.stocknumber[2];
		a[0] = readstock1();
		a[1] = readstock2();
		A.stocknumber[0] = a[0];
		A.stocknumber[1] = a[1];
	struct stock 道琼斯工业指数;
	道琼斯工业指数.stockname = "道琼斯工业指数";
	道琼斯工业指数.cost = 1500;
	道琼斯工业指数.price = readprice1();
	道琼斯工业指数.totalstock = 5000;
	道琼斯工业指数.变化率 = 0;
	struct stock 标准普尔指数;
	标准普尔指数.stockname = "标准普尔指数";
	标准普尔指数.cost = 500;
	标准普尔指数.price = readprice2();
	标准普尔指数.totalstock = 25000;
	标准普尔指数.变化率 = 0;
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
			cout << "姓名：" << A.name << endl;
			cout << "总金额：" << readtotalmoney()<< endl;
			cout << "持有一型股票数量：" << readstock1() << endl;
			cout << "持有二型股票数量：" << readstock2() << endl;
			cout << "当前收益：" << A.revenue << endl;
			cout << "起始投资金额：" << A.startmoney << endl;
			system("pause");
			system("cls");
			break;
		case 2:cout << "股票名称:" << 道琼斯工业指数.stockname <<"\t" << "股票价格:" << 道琼斯工业指数.price << "\t" << "股票总数：" << 道琼斯工业指数.totalstock << "\t" << "单支股票价格变化：" << 道琼斯工业指数.变化率 << "\t" << endl;
			    cout<< "股票名称："<< 标准普尔指数.stockname << "\t" << "股票价格：" << 标准普尔指数.price << "\t" << "股票总数：" << 标准普尔指数.totalstock << "\t" << "单支股票价格变化：" << 标准普尔指数.变化率 << "\t" << endl;
			system("pause");
			system("cls");
			break;
		case 3:srand((unsigned int)time(NULL));
			道琼斯工业指数.price = readprice1();
			道琼斯工业指数.变化率 = rand() % 751 - 250.0000;
			道琼斯工业指数.price = 道琼斯工业指数.price + 道琼斯工业指数.变化率;
			标准普尔指数.price = readprice2();
			标准普尔指数.变化率 = rand() % 201 - 100.0000;
			标准普尔指数.price = 标准普尔指数.price + 标准普尔指数.变化率;
			cout << "请选择股票：" << endl;
			cout << "1:道琼斯工业指数" << endl;
			cout << "2:标准普尔指数" << endl;
			while (true)
			{
				cin >> select3;
				if (select3 == 1 || select3 == 2)
				{
					switch (select3)
					{
					case 1:
						cout << "请输入要出售股票的数量：" << endl;
						pone = &A.stocknumber[0];
						cin >> b1;
						if (sellb(A.stocknumber[0], b1) > 0 || sellb(A.stocknumber[0], b1) == 0)
						{
							cout << "该股现在价格为：" << 道琼斯工业指数.price << endl;
							cout << "出售后您将获得金额：" << b1 * 道琼斯工业指数.price << endl;
							cout << "剩余该股：" << sellb(A.stocknumber[0], b1) << endl;
							cout << "是否继续？\t" << "1.是\t" << "其他字符.否\t" << endl;
							cin >> select30;
							if (select30 == 1)
							{
								A.revenue = A.moneytotal - A.startmoney + A.stocknumber[0] * 道琼斯工业指数.price + A.stocknumber[1] * 标准普尔指数.price;
								C1 = A.stocknumber[0] - b1;
								A.stocknumber[0] = sellb(A.stocknumber[0], b1);
								A.moneytotal = sella(A.moneytotal, 道琼斯工业指数.price, b1);



								cout << "出售成功！" << endl;
								cout << "你现在的资金为：" << A.moneytotal << endl;
								cout << "你现在的该股数量为：" << A.stocknumber[0] << endl;
								cout << "您的收益是：" << A.revenue << endl;
								savetotalmoney(A.moneytotal);
								savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
								saveprice1(道琼斯工业指数.price);
								saveprice2(标准普尔指数.price);
							}
							else
							{
								cout << "请求已经取消!" << endl;

							}
						}
						else { cout << "您的该种股票不足！" << endl; }
						break;
					
					case 2:
						cout << "请输入要出售股票的数量：" << endl;
						pone = &A.stocknumber[1];
						cin >> b1;
						if (sellb(A.stocknumber[1], b1) > 0 || sellb(A.stocknumber[1], b1) == 0)
						{
							cout << "该股现在价格为：" << 标准普尔指数.price << endl;
							cout << "出售后您将获得金额：" << b1 * 标准普尔指数.price << endl;
							cout << "剩余该股：" << sellb(A.stocknumber[1], b1) << endl;
							cout << "是否继续？\t" << "1.是\t" << "其他字符.否\t" << endl;
							cin >> select30;
							if (select30 == 1)
							{
								A.revenue = A.moneytotal - A.startmoney + A.stocknumber[0] * 道琼斯工业指数.price + A.stocknumber[1] * 标准普尔指数.price;
								C1 = A.stocknumber[1] - b1;
								A.stocknumber[1] = sellb(A.stocknumber[1], b1);
								A.moneytotal = sella(A.moneytotal, 标准普尔指数.price, b1);




								cout << "出售成功！" << endl;
								cout << "你现在的资金为：" << A.moneytotal << endl;
								cout << "你现在的该股数量为：" << A.stocknumber[1] << endl;
								cout << "您的收益是：" << A.revenue << endl;
								savetotalmoney(A.moneytotal);
								savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
								saveprice1(道琼斯工业指数.price);
								saveprice2(标准普尔指数.price);
							}
							else
							{
								cout << "请求已经取消!" << endl;

							}
						}
						else { cout << "您的该种股票数量不足！" << endl; }
						break;
					
					}
					break;
				}
				cout << "请输入正确的数字。" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 4:srand((unsigned int)time(NULL));
			道琼斯工业指数.price = readprice1();
			标准普尔指数.price = readprice2();
			道琼斯工业指数.变化率 = rand() % 751 - 250.0000;
			道琼斯工业指数.price = 道琼斯工业指数.price + 道琼斯工业指数.变化率;
			标准普尔指数.变化率 = rand() % 201 - 100.0000;
			标准普尔指数.price = 标准普尔指数.price + 标准普尔指数.变化率;
			cout << "请选择股票：" << endl;
			cout << "1:道琼斯工业指数" << endl;
			cout << "2:标准普尔指数" << endl;
			while (true)
			{
				cin >> select1;
				if (select1 == 1 || select1 == 2)
				{
					switch (select1)
					{
					case 1:
						cout << "输入您要购买的股数：" << endl;
						cin >> b;
						pone = &A.stocknumber[0];
						cout << "该股现在价格为：" << 道琼斯工业指数.price << endl;
						cout << "购买后您将失去金额：" << b * 道琼斯工业指数.price << endl;
						cout << "购买后您的总余额：" << buy2(A.moneytotal, 道琼斯工业指数.cost, b, 道琼斯工业指数.变化率) << endl;
						cout << "购买后剩余该股：" << buy1(0, b,pone) << endl;
						cout << "是否继续？\t" << "1.是\t" << "其他字符.否\t" << endl;
						cin >> select30;
						if (select30 == 1)
						{
							p1price = &道琼斯工业指数.price;
							n1 = buy1(u, b, pone);
							s1 = buy2(A.moneytotal, 道琼斯工业指数.cost, b, 道琼斯工业指数.变化率);
							ss1 = buy3(道琼斯工业指数.totalstock, b);

							if (s1 > 0 || s1 == 0)
							{
								cout << "购买成功！" << endl;
								cout << "你现在的资金为：" << s1 << endl;
								cout << "你现在的该持股数量为：" << n1 << endl;
								A.moneytotal = s1;
								A.stocknumber[0] = n1;
								道琼斯工业指数.totalstock = ss1;
								道琼斯工业指数.price = 道琼斯工业指数.price + 道琼斯工业指数.变化率;
								savetotalmoney(A.moneytotal);
								savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
								saveprice1(道琼斯工业指数.price);
								saveprice2(标准普尔指数.price);
							}
							else { cout << "您的金额不足，无法购买！" << endl; }
						}
						else
						{
							cout << "购买已取消！" << endl;
						}
						break;
					case 2:
						pone = &A.stocknumber[1];
						p2price = &标准普尔指数.price;
						cout << "输入您要购买的股数：" << endl;
						cin >> v;
						cout << "该股现在价格为：" << 标准普尔指数.price << endl;
						cout << "购买后您将失去金额：" << v * 标准普尔指数.price << endl;
						cout << "购买后您的总余额：" << buy2(A.moneytotal, 标准普尔指数.cost, v, 标准普尔指数.变化率) << endl;
						cout << "购买后剩余该股：" << buy1(1, v, pone) << endl;
						cout << "是否继续？\t" << "1.是\t" << "其他字符.否\t" << endl;
						cin >> select30;
						if (select30 == 1)
						{
							n2 = buy1(u, v, pone);
							s2 = buy2(A.moneytotal, 标准普尔指数.cost, v, 标准普尔指数.变化率);
							ss2 = buy3(标准普尔指数.totalstock, v);
							if (s2 > 0 || s2 == 0)
							{
								cout << "购买成功！" << endl;
								cout << "你现在的资金为：" << s2 << endl;
								cout << "你现在的该持股数量为：" << n2 << endl;
								A.moneytotal = s2;
								A.stocknumber[1] = n2;
								标准普尔指数.totalstock = ss2;
								标准普尔指数.price = 标准普尔指数.price + 标准普尔指数.变化率;
								savetotalmoney(A.moneytotal);
								savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
								saveprice1(道琼斯工业指数.price);
								saveprice2(标准普尔指数.price);
							}
							else { cout << "您的金额不足，无法购买！" << endl; }
						}
						else{ cout << "购买已取消！" << endl; }
						break;
					}
					break;
				}
				cout << "请输入正确的数字。" << endl;
			}
			
			
			system("pause");
			system("cls");
			break;
		case 5:道琼斯工业指数.price = readprice1();
			标准普尔指数.price = readprice2();
			srand((unsigned int)time(NULL));
			道琼斯工业指数.变化率 = rand() % 751 - 250.0000;
			道琼斯工业指数.price = 道琼斯工业指数.price + 道琼斯工业指数.变化率;
			标准普尔指数.变化率 = rand() % 201 - 100.0000;
			标准普尔指数.price = 标准普尔指数.price + 标准普尔指数.变化率;
			cout << "股市已发生变化。" << endl;
			saveprice1(道琼斯工业指数.price);
			saveprice2(标准普尔指数.price);
			system("pause");
			system("cls");
			break;
		case 6:A.moneytotal=readtotalmoney();
			A.stocknumber[0] = readstock1();
			A.stocknumber[1] = readstock2();
			道琼斯工业指数.price = readprice1();
			标准普尔指数.price = readprice2();
			cout << "读入成功！" << endl;
			system("pause");
			system("cls");
			break;
		case 7:savetotalmoney(A.moneytotal);
			savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
			saveprice1(道琼斯工业指数.price);
			saveprice2(标准普尔指数.price);
			cout << "保存成功！" << endl;
			system("pause");
			system("cls");
			break;
		case 8:A.moneytotal = 5000;
			A.stocknumber[0] = 0;
			A.stocknumber[1] = 0;
			道琼斯工业指数.price = 1500;
			标准普尔指数.price = 500;
			savetotalmoney(A.moneytotal);
			savestock1(A.stocknumber[0]); savestock2(A.stocknumber[1]);
			saveprice1(道琼斯工业指数.price);
			saveprice2(标准普尔指数.price);
			cout << "数据删除成功！" << endl;
			system("pause");
			system("cls");
			break;
		case 9:cout << "欢迎下次使用。" << endl;
			system("pause");
			return 0;
			break;
		default:break;
		
		}
	}
	system("pause");
	return 0;
}