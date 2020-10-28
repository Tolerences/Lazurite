#include<iostream>
using namespace std;
#include<algorithm>
#include<ctime>
#include<math.h>
#include<numeric>
#include<string>
#include<cmath>
#include<vector>
#include<stdexcept>
float ex; float e = 0; float e1 = 0; float logfirst = 0; float logsecond = 0; float logthird = 0; float xn; float logret;
float xn1 = 0; float xn2 = 0; float constant = 0;  float constret; 
float xend;
float FX0;
float DS;
float x0;
float numerator;
float denominator;
int i1 = 0;
int i2 = 0;
int i3 = 0;
int i4 = 0;
int ia = 0;
int ib = 0;
int ic = 0;
int id = 0;
int ie = 0;
int iea = 0;
int ie1 = 0;
int ie2 = 0;
int ig = 0;
int iga = 0;
int ig1 = 0;
int ig2 = 0;
int ih = 0;
int iha = 0;
int ih1 = 0;
int ih2 = 0;
int ii = 0;
int iia = 0;
int ii1 = 0;
int ii2 = 0;
float fenzivalue = 0;
float fenmuvalue = 0;
float fenmuvaluedouble = 0;
int frationfenzi = 0;
int frationfenmu = 0;
float arrayex[10][3];
float arrayxn[10][3];
float arraylog[10][3];
float arrayconst[10][3];
float arrayfenmu1[10][4][3];
float arrayfenmu2[10][4][3];
float arrayfenmu3[10][4][3];
float arrayfenmu4[10][4][3];
float arrayfenzi1[10][4][3];
float arrayfenzi2[10][4][3];
float arrayfenzi3[10][4][3];
float arrayfenzi4[10][4][3];
int numberoffenshu = 0;
vector<float>vexvalue;
vector<float>vxnvalue;
vector<float>vlogvalue;
vector<float>vconstvalue;
vector<float>vfration_numeratorvalue;
vector<float>vfration_denominatorvalue;
vector<float>vexvalueDS;
vector<float>vxnvalueDS;
vector<float>vlogvalueDS;
vector<float>vconstvalueDS;
vector<float>vfration_numeratorvalueDS;
vector<float>vfration_denominatorvalueDS;
void showfunctionxn(float array[][3])
{
	cout << "xn的项为：";
	if (array[0][0] == 0)
	{
		cout << "xn没有数据" << endl;
	}
	else
	{
		for (int i = 0; i < ia; i++)
		{
			cout << array[i][0] << "*x^" << array[i][1] << "    ";
		}
		cout << endl;
	}
}
void showfunctionex(float array[][3])
{
	cout << "e^x的项为：";
	if (array[0][0] == 0)
	{
		cout << "ex没有数据" << endl;
	}
	else
	{
		for (int i = 0; i < ib; i++)
		{
			cout << array[i][0] << "*e^(" << array[i][1]<<"*x)" << "    ";
		}
		cout << endl;
	}
}
void showfunctionlog (float array[][3])
{
	cout << "logx的项为：";
	if (array[0][0] == 0)
	{
		cout << "log没有数据" << endl;
	}
	else
	{
		for (int i = 0; i < ic; i++)
		{
			cout << array[i][0] << "*log^" << array[i][1]<<"(x)" << "    ";
		}
		cout << endl;
	}
}
void showfunctionconst(float array[][3])
{
	cout << "常数的项为：";
	if (array[0][0] == 0)
	{
		cout << "constant没有数据" << endl;
	}
	else
	{
		for (int i = 0; i < id; i++)
		{
			cout << array[i][0] << "    ";
		}
		cout << endl;
	}
}
void showfenshuxn(float array1[][4][3],int q,int p)
{
	cout << "xn的项为：";
		for (int j = 0; j < q; j++)
		{
			for (int i = 0; i < p; i++)
			{
				cout << array1[j][i][0] << "*x^" << array1[j][i][1] << "   ";
			}
		}
	
	cout << endl;
}
void showfenshuex(float array2[][4][3], int q, int p)
{
	cout << "ex的项为：";
		for (int j = 0; j < q; j++)
		{
			for (int i = 0; i < p; i++)
			{
				cout << array2[j][i][0] << "*e^(" << array2[j][i][1] << "x)" << "  ";
			}
		}
	cout << endl;
}
void showfenshulog(float array3[][4][3], int q, int p)
{
	cout << "logx的项为：";
	for (int j = 0; j < q; j++)
	{
		for (int i = 0; i < p; i++)
		{
			cout << array3[j][i][0] << "*log" << array3[j][i][1] << "(x)" << "  ";
		}
	}
	cout << endl;
}
void showfenshuconst(float array4[][4][3], int q, int p)
{
	cout << "constant的项为：";
	for (int j = 0; j < q; j++)
	{
		for (int i = 0; i < p; i++)
		{
			cout << array4[j][i][0] << "  ";
		}
	}
	cout << endl;
}
void showfunctionfration()
{
	cout << "第" << numberoffenshu << "个分数的分母为：" << endl; ;
		showfenshuxn(arrayfenmu1,ie,ie1);
		showfenshuex(arrayfenmu2,ig,ig1);
		showfenshulog(arrayfenmu3,ih,ih1);
		showfenshuconst(arrayfenmu4,ii,ii1);
		cout << endl;
		cout << "第" << numberoffenshu << "个分数的分子为："<<endl ;
		showfenshuxn(arrayfenzi1,iea,ie2);
		showfenshuex(arrayfenzi2,iga,ig2);
		showfenshulog(arrayfenzi3,iha,ih1);
		showfenshuconst(arrayfenzi4,iia,ii1);
		cout << endl;
}



void createfunction()
{
	ex = e * exp(e1 * x0);
	xn = xn1 * pow(x0, xn2);
	logret = logfirst * (log(logsecond) / log(x0));
	constret = constant;
}
struct functionworkc
{
public:virtual float derivative() = 0;
};
struct exc :public functionworkc
{
	static float derivative(float a, float b, float x0)
	{
		float s;
		s = a * b * exp(b * x0);
		return s;
	}
};
struct xnc :public functionworkc
{
	static float derivative(float a, float b, float x0)
	{
		float s;
		s = a * b * pow(x0, b - 1);
		return s;
	}
};
struct logcalculatec :public functionworkc
{
	static float derivative(float a, float b, float x0)
	{
		float s;
		s = a / (x0 * (log(10) / log(b)));
		return s;
	}
};
struct constantc :public functionworkc
{
	static float derivative()
	{
		return 0;
	}
};

void addvectorFX0(vector<float>& v)
{
	for (vector<float>::iterator it = v.begin(); it != v.end(); it++)
	{
		FX0 = *it + FX0;
	}
}
void addvectorDS(vector<float>& v)
{
	for (vector<float>::iterator it = v.begin(); it != v.end(); it++)
	{
		DS = *it + DS;
	}
}
void arrayaddfunc(int j,float array[][3],float goal1,float goal2,float goal3,vector<float>&v)
{
	for (int i=0; i < j; i++)
	{
			goal1 = array[i][0];
			goal2 = array[i][1];
			createfunction();
			v.push_back(goal3);
	}
}
void arrayaddfuncconst(int j, float array[][3], float goal, float goalret, vector<float>& v)
{
	for (int i = 0; i < j; i++)
	{
			goal = array[i][0];
			createfunction();
			v.push_back(goalret);
		
	}
}
void arrayderivativeex(int j,float array[][3], float goal1, float goal2, float goalret)
{
	for (int i = 0; i < j; i++)
	{
			goal1 = array[i][0];
			goal2 = array[i][1];
			goalret = exc::derivative(goal1, goal2, x0);
			vexvalueDS.push_back(goalret);
	}
}
void arrayderivativexn(int j, float array[][3], float goal1, float goal2, float goalret)
{
	for (int i = 0; i < j; i++)
	{
			goal1 = array[i][0];
			goal2 = array[i][1];
			goalret = xnc::derivative(goal1, goal2, x0);
			vexvalueDS.push_back(goalret);
		
	}
}
void arrayderivativelog(int j, float array[][3], float goal1, float goal2, float goalret)
{
	for (int i = 0; i < j; i++)
	{
			goal1 = array[i][0];
			goal2 = array[i][1];
			goalret = logcalculatec::derivative(goal1, goal2, x0);
			vexvalueDS.push_back(goalret);
	}
}
void arrayfenmuex( float array[][4][3])
{
	float goal1; float goal2;
	for (int j = 0; j < ig; j++)
	{
		for (int i = 0; i < ig1; i++)
		{
			goal1 = array[j][i][0];
			goal2 = array[j][i][0];
			fenmuvalue = fenmuvalue + goal1 *exp(goal2*x0);
		}
	}
}
void arrayfenmuxn(float array[][4][3])
{
	float goal1; float goal2;
	for (int j = 0; j < ie; j++)
	{
		for (int i = 0; i < ie1; i++)
		{
			goal1 = array[j][i][0];
			goal2 = array[j][i][0];
			fenmuvalue = fenmuvalue + goal1*pow(x0,goal2);
		}
	}
}
void arrayfenmulog( float array[][4][3])
{
	float goal1; float goal2;
	for (int j = 0; j < ih; j++)
	{
		for (int i = 0; i < ih1; i++)
		{
			goal1 = array[j][i][0];
			goal2 = array[j][i][0];
			fenmuvalue = fenmuvalue + goal1 * (log(goal2) / log(x0));
		}
	}
}
void arrayfenmuconst( float array[][4][3])
{
	float goal1;
	for (int j = 0; j < ii; j++)
	{
		for (int i = 0; i < ii1; i++)
		{
			goal1 = array[j][i][0];
			fenmuvalue = fenmuvalue + goal1;
		}
	}
}
void calculateNEWTON()
{
	arrayfenmuxn(arrayfenmu1); arrayfenmuex(arrayfenmu2); arrayfenmulog(arrayfenmu3); arrayfenmuconst(arrayfenmu4);
	fenmuvaluedouble = pow(fenmuvalue, 2);
	arrayderivativeex(ib, arrayex, e, e1, ex);
	arrayderivativexn(ia, arrayxn, xn1, xn2, xn);
	arrayderivativelog(ic, arraylog, logfirst, logsecond, logret);
	addvectorFX0(vexvalue);
	addvectorFX0(vxnvalue);
	addvectorFX0(vlogvalue);
	addvectorFX0(vconstvalue);
	addvectorDS(vexvalueDS);
	addvectorDS(vxnvalueDS);
	addvectorDS(vlogvalueDS);
	cout << "第" << 1 << "次FX0:" << FX0 << endl;
	cout << "第" << 1 << "次DS:" << DS << endl;
	cout << "   " << endl;
	int max=0 ;
	cout << "请输入您要进行逼近的次数：" << endl;
	cin >> max;
	cout << "您输入的起始x0值为:"<<x0 << endl;
	for (int i = 0; i < max; i++)
	{
		vexvalueDS.clear(); vxnvalueDS.clear(); vlogvalueDS.clear(); 
		vexvalue.clear(); vxnvalue.clear(); vlogvalue.clear(); vconstvalue.clear();
		x0 = (-FX0 / DS) + x0;
		cout << "第" << i+2 << "次x0:" << x0 << endl;
		arrayaddfunc(ia,arrayxn,xn1,xn2,xn,vxnvalue);
		arrayaddfunc(ib, arrayex, e, e1, ex, vexvalue);
		arrayaddfunc(ic, arraylog, logfirst, logsecond, logret, vlogvalue);
		arrayaddfuncconst(id, arrayconst, constant, constret, vconstvalue);
		arrayderivativeex(ib, arrayex, e, e1, ex);
		arrayderivativexn(ia, arrayxn, xn1, xn2, xn);
		arrayderivativelog(ic, arraylog, logfirst, logsecond, logret);
		FX0 = 0;
		DS = 0;
		addvectorFX0(vexvalue);
		addvectorFX0(vxnvalue);
		addvectorFX0(vlogvalue);
		addvectorFX0(vconstvalue);
		addvectorDS(vexvalueDS);
		addvectorDS(vxnvalueDS);
		addvectorDS(vlogvalueDS);
		cout << "第" << i+2 << "次DS:" << DS << endl;
		cout <<"第"<<i+2<<"次FX0:"<< FX0 << endl;
		cout << " " << endl;
	}
	
	cout << "方程的解为：" << x0 << endl;
}

void showmenu1()
{
	cout << " *************-----NEWTON CACULATOR-----*************" << endl;
	cout << "--—————————————————————————-" << endl;
	cout << "|---------------------------------------------------|" << endl;
	cout << "请输入对应数字添加入运算的函数类型或运行功能：" << endl;
	cout << "1.ax^n型" << endl;
	cout << "2.ae^(bx)型" << endl;
	cout << "3.alogb(c)型" << endl;
	cout << "4.自定义分式型" << endl;
	cout << "5.常数型" << endl;
	cout << "6.结束输入,设置x0值并开始运算" << endl;
	cout << "7.查看已输入的函数项" << endl;
	cout << "8.清除所有已输入的数据" << endl;
	cout << "9.温馨提示" << endl;
	cout << "10.退出程序" << endl;
	cout << "|---------------------------------------------------|" << endl;
	cout << "--—————————————————————————-" << endl;
	cout << "--—————————-AUTHOR WJC-——————————-" << endl;
}
int main()
{ 
	while (true)
	{
		showmenu1();
		vexvalue.reserve(10); vxnvalue.reserve(10); vlogvalue.reserve(10); vconstvalue.reserve(10);
		vfration_denominatorvalue.reserve(20); vfration_denominatorvalueDS.reserve(20); vfration_numeratorvalue.reserve(20); vfration_numeratorvalueDS.reserve(20);
		int select;
		cin >> select;
		switch (select)
		{
		case 1:cout << "请输入ax^n的系数a：" << endl;
			cin >> xn1;
			cout << "请输入ax^n的幂指数n：" << endl;
			cin >> xn2;
			arrayxn[ia][0] = xn1;
			arrayxn[ia][1] = xn2;
			createfunction();
			vxnvalue.push_back(xn);
			cout << "输入成功！" << endl;
			cout << arrayxn[ia][0] << "*x^(" << arrayxn[ia][1] << ")" << endl;
			ia++;
			system("pause");
			system("cls");
			break;
		case 2:cout << "请输入ae^(bx)的系数a：" << endl;
			cin >> e;
			cout << "请输入ae^(bx)的幂指数系数b:" << endl;
			cin >> e1;
			arrayex[ib][0] = e;
			arrayex[ib][1] = e1;
			createfunction();
			vexvalue.push_back(ex);
			cout << "输入成功！" << endl;
			cout << arrayex[ib][0] << "e^(" << arrayex[ib][1] << "x)" << endl;
			ib++;
			system("pause");
			system("cls");
			break;
		case 3:cout << "请输入alogb(x)的系数a：" << endl;
			cin >> logfirst;
			cout << "请输入alogb(x)的底数b:" << endl;
			cin >> logsecond;
			arraylog[ic][0] = logfirst;
			arraylog[ic][1] = logsecond;
			createfunction();
			vlogvalue.push_back(logret);
			cout << "输入成功！" << endl;
			cout << arraylog[ic][0] << "log" << arraylog[ic][1] << "(x)" << endl;
			ic++;
			system("pause");
			system("cls");
			break;
		case 4:numberoffenshu++;
			while (select != 5)
			{
				system("cls");
				showmenu1();
				cout << "请输入分式型的分母：" << endl;
				cout << "请根据数字选取函数：" << endl;
				cout << "--—————————————————" << endl;
				cout << "1.ax^n型" << endl;
				cout << "2.ae^(bx)型" << endl;
				cout << "3.alogb(c)型" << endl;
				cout << "4.常数型" << endl;
				cout << "5.退出输入分母并开始输入分子" << endl;
				cout << "温馨提示：分母请务必输入非零值！" << endl;
				cout << "--—————————————————" << endl;
				cin >> select;
				switch (select)
				{
				case 1:cout << "请输入ax^n的系数a：" << endl;
					cin >> xn1;
					cout << "请输入ax^n的幂指数n：" << endl;
					cin >> xn2;
					arrayfenmu1[ie][ie1][0] = xn1;
					arrayfenmu1[ie][ie1][1] = xn2;
					createfunction();
					cout << "输入成功！" << endl;
					cout << arrayfenmu1[ie][ie1][0] << "*x^(" << arrayfenmu1[ie][ie1][1] << ")" << endl;
					ie++; ie1++;
					system("pause");
					system("cls");
					break;
				case 2:cout << "请输入ae^(bx)的系数a：" << endl;
					cin >> e;
					cout << "请输入ae^(bx)的幂指数系数b:" << endl;
					cin >> e1;
					arrayfenmu2[ig][ig1][0] = e;
					arrayfenmu2[ig][ig1][1] = e1;
					createfunction();
					cout << "输入成功！" << endl;
					cout << arrayfenmu2[ig][ig1][0] << "e^(" << arrayfenmu2[ig][ig1][1] << "x)" << endl;
					ig++; ig1++;
					system("pause");
					system("cls");
					break;
				case 3:cout << "请输入alogb(x)的系数a：" << endl;
					cin >> logfirst;
					cout << "请输入alogb(x)的底数b:" << endl;
					cin >> logsecond;
					arrayfenmu3[ih][ih1][0] = logfirst;
					arrayfenmu3[ih][ih1][1] = logsecond;
					createfunction();
					cout << "输入成功！" << endl;
					cout << arrayfenmu3[ih][ih1][0] << "log" << arrayfenmu3[ih][ih1][1] << "(x)" << endl;
					ih++; ih1++;
					system("pause");
					system("cls");
					break;
				case 4:cout << "请输入常数数值：" << endl;
					cin >> constant;
					arrayfenmu4[ii][ii1][0] = constant;
					createfunction();
					cout << "输入成功！" << endl;
					cout << constant << endl;
					ii++; ii1++;
					system("pause");
					system("cls");
					break;
				case 5:while (select != 0)
					{
						system("cls");
						showmenu1();
						cout << "停止输入成功！开始输入分子:" << endl;
						cout << "请选择相应数字输入函数：" << endl;
						cout << "--—————————————————" << endl;
						cout << "1.ax^n型" << endl;
						cout << "2.ae^(bx)型" << endl;
						cout << "3.alogb(c)型" << endl;
						cout << "4.常数型" << endl;
						cout << "0.结束输入分子" << endl;
						cout << "--—————————————————" << endl;
						cin >> select;
						switch (select)
						{
						case 1:cout << "请输入ax^n的系数a：" << endl;
							cin >> xn1;
							cout << "请输入ax^n的幂指数n：" << endl;
							cin >> xn2;
							arrayfenzi1[iea][ie2][0] = xn1;
							arrayfenzi1[iea][ie2][1] = xn2;
							createfunction();
							cout << "输入成功！" << endl;
							cout << arrayfenzi1[iea][ie2][0] << "*x^(" << arrayfenzi1[iea][ie2][1] << ")" << endl;
							iea++; ie2++;
							system("pause");
							system("cls");
							break;
						case 2:cout << "请输入ae^(bx)的系数a：" << endl;
							cin >> e;
							cout << "请输入ae^(bx)的幂指数系数b:" << endl;
							cin >> e1;
							arrayfenzi2[iga][ig2][0] = e;
							arrayfenzi2[iga][ig2][1] = e1;
							createfunction();
							cout << "输入成功！" << endl;
							cout << arrayfenzi2[iga][ig2][0] << "e^(" << arrayfenzi2[iga][ig2][1] << "x)" << endl;
							iga++; ig2++;
							system("pause");
							system("cls");
							break;
						case 3:cout << "请输入alogb(x)的系数a：" << endl;
							cin >> logfirst;
							cout << "请输入alogb(x)的底数b:" << endl;
							cin >> logsecond;
							arrayfenzi3[iha][ih2][0] = logfirst;
							arrayfenzi3[iha][ih2][1] = logsecond;
							createfunction();
							cout << "输入成功！" << endl;
							cout << arrayfenzi3[iha][ih2][0] << "log" << arrayfenzi3[iha][ih2][1] << "(x)" << endl;
							iha++; ih2++;
							system("pause");
							system("cls");
							break;
						case 4:cout << "请输入常数数值：" << endl;
							cin >> constant;
							arrayfenzi4[iia][ii2][0] = constant;
							createfunction();
							cout << "输入成功！" << endl;
							cout << constant << endl;
							iia++; ii2++;
							system("pause");
							system("cls");
							break;
						case 0:cout << "结束输入分式成功！" << endl;
							system("cls"); 
							break;
						default:cout << "输入错误！请重试." << endl;  system("pause"); system("cls"); break;
						}
					}
					  select = 5;  system("cls"); break;
				default:cout << "输入错误！请重试." << endl;  system("pause"); system("cls"); break;
				} showmenu1(); cout << "结束输入分式成功！" << endl;
			}system("pause"); system("cls"); break;
		case 5:cout << "请输入常数数值：" << endl;
			cin >> constant;
			arrayconst[id][0] = constant;
			createfunction();
			vconstvalue.push_back(constret);
			cout << "输入成功！" << endl;
			cout << constant << endl;
			id++;
			system("pause");
			system("cls");
			break;
		case 6:cout << "结束输入成功" << endl;
			cout << "请输入选择的数作为初始值代入方程：" << endl;
			cin >> x0;
			calculateNEWTON();
			system("pause");
			system("cls");
			break;
		case 7:showfunctionxn(arrayxn);
			showfunctionex(arrayex);
			showfunctionlog(arraylog);
			showfunctionconst(arrayconst);
			cout << endl;
			showfunctionfration();
			system("pause");
			system("cls");
			break;
		case 8:vexvalueDS.clear(); vxnvalueDS.clear(); vlogvalueDS.clear();
			vexvalue.clear(); vxnvalue.clear(); vlogvalue.clear(); vconstvalue.clear();
			for (int i = 0; i < ia; i++)
			{
				arrayxn[i][0] = 0;
				arrayxn[i][1] = 0;
			}
			for (int i = 0; i < ib; i++)
			{
				arrayex[i][0] = 0;
				arrayex[i][1] = 0;
			}
			for (int i = 0; i < ic; i++)
			{
				arraylog[i][0] = 0;
				arraylog[i][1] = 0;
			}
			for (int i = 0; i < id; i++)
			{
				arrayconst[i][0] = 0;
				arrayconst[i][1] = 0;
			}
			cout << "清除完成。" << endl;
			system("pause");
			system("cls");
			break;
		case 9:cout << "牛顿法逼近最好选取合适的起始值" << endl;
			cout << "如果偏差太大请尝试多次改变x0的起始值" << endl;
			cout << "NAN值一般解为0；inf解值为无穷" << endl;
			cout << "               ——WJC" << endl;
			system("pause");
			system("cls");
			break;
		case 10:cout << "退出成功，欢迎下次使用。" << endl;
			system("pause");
			return 0;
			break;
		default:cout << "输入错误！请重试." << endl;  system("pause"); system("cls"); break;
		}
	}
	system("pause");
	return 0;
}