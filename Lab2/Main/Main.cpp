#include"Header_Includer.h"

using namespace std;

void shapka(void);
void linebuild(void);



int main() {
	setlocale(LC_ALL, "RU");

	string name;
	char type;
	double denomination;
	unsigned int count;
	int count_obj;

	int q1, q2;
	cout << "������� ���������� �������� ������: ";
	cin >> count_obj;
	while (true)
	{
		if (count_obj<0 || count_obj>INT32_MAX) {
			cout << "������� ������� ��������!!!\n";
			cout << "������� �����: ";
			cin >> count_obj;
		}
		else break;

	}

	Accessories obj[3];

	for (int i = 0; i < count_obj; i++) {
		cout << "������� ��������, ���, �������, ���������� �������������: ";
		cin >> name >> type >> denomination >> count;

		obj[i].setall(&name, type, denomination, count);
	}


	cout << "��������, ���, �������, ���������� �������������:\n";

	for (int i = 0; i < count_obj; i++)
	{
		obj[i].showall();
	}

	cout << "���������� ��������� '='.\n";
	cout << "������� ������ ����������� ������: ���������� � ����������>\n";
	cin >> q1;
	cin >> q2;
	if (isvalid(q1,q2,count_obj) != 0) exit(-1);
	obj[q1-1] = obj[q2-1];

	cout << "��������, ���, �������, ���������� �������������:\n";

	for (int i = 0; i < count_obj; i++)
	{
		obj[i].showall();
	}

	cout << "\n���������� ��������� ������������ '=='.\n";
	cout << "������� ������ ����������� ������, ������� ���� ��������>\n";
	cin >> q1;
	cin >> q2;
	if (isvalid(q1, q2, count_obj) != 0) exit(-1);
	if (obj[q1 - 1] == obj[q2 - 1]==0) {
		cout << "��������� ������ " << q1 \
			<< " ���� � ����������� ������ " << q2<<endl;
	}

	cout << "\n���������� ��������� ����� '+'.\n";
	cout << "������� ������ ����������� ������, ������� ���� �������>\n";
	cin >> q1;
	cin >> q2;
	Accessories temp;
	if (isvalid(q1, q2,count_obj) != 0) exit(-1);

	temp = obj[q1-1] + obj[q2-1];
	temp.getall(&name,type, denomination, count);
	temp.showall();

	cout << "\n���������� ��������� ���������� ����� '>>'.";
	cout << "\n������� ����� ���������� ������: ";
	cin >> q1;
	if(q1<1||q1>count_obj){ cout << "������! ���������� � ����� �������� �� ����������.";  exit(-1); }
	cin >> obj[q1 - 1];

	cout << "\n���������� ��������� ���������� ������ '<<'.";
	cout << "\n������� ����� ���������� ������: ";
	cin >> q1;
	if ((q1 > count_obj) || (q1 < 1)) { cout << "������! ���������� � ����� �������� �� ����������."; exit(-1); }
	shapka();
	cout << obj[q1 - 1];
	linebuild();


	cout << "��� ������� ������:\n";
	shapka();
	for (int i = 0; i < count_obj; i++) {
		cout << obj[i];
	}
	linebuild();
	return 0;
}


void shapka(void)
{
	cout << "_______________________________________________________________\n";
	cout << "|         ����������� ��������� ������ ������� ����           |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|      ��������      | ��� |     �������     |   ����������   |\n";
	cout << "|-------------------------------------------------------------|\n";
}


void linebuild(void)
{
	cout << "\n|-------------------------------------------------------------|\n";
}