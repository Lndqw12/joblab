#include <iostream>
#include <climits>
using namespace std;
int main()
{
int n_int = INT_MAX; // �������� � ���������� ������������ �����
short n_short = SHRT_MAX;
long n_long = LONG_MAX;
// ������ ������� ���������� � ��������
cout << "this n_int=  "<< n_int << endl;
cout << "look here= " << sizeof(int) << endl; // ������ �����?
cout << "persuaded,look n_short=  " << sizeof n_short << endl;
cout << "now let's look n_long= " << n_long << endl;
cout << "max log=  " << LONG_MAX << endl;
cout << "short" << sizeof(short) << endl;
cout << "short2=  " << SHRT_MAX << endl;
cout << "bit=  " << CHAR_BIT << endl;
cout << "min= int " << INT_MIN << endl;
cout << "min= long  " << LONG_MIN << endl;
cout << "min short=   " << SHRT_MIN <<endl;
//�����������
cout << "max char " << UCHAR_MAX << endl;
cout << "max= long  " << ULONG_MAX << endl;
cout << "max short=   " << USHRT_MAX <<endl;
system("Pause");
return 0;
}
 
