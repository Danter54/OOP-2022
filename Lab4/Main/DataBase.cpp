#include "DataBase.h"

DataBase::DataBase(string a)
{
	title = a;
	col = 0;
	sorted = 0;
}

void DataBase::Add_rec(string a, char& b, double& c, unsigned int d)
{
	if (col >= 12)
	{
		cout << "Больше 12 записей невозможно поместить!!!" << endl;
		return;
	}
	else col++;
	rows[col - 1] = new Accesories(a, b, c, d);
	sorted = 0;
}

void DataBase::Del_rec()
{
	if (col <= 0) {
		cout << "Записей нет!!!\n";
		return;
	}
	delete rows[col - 1];
	cout << "Запись удалена ...\n";
	col--;

}

void DataBase::Sort_DB()
{
	if (col < 2) {
		cout << "В таблице меньше значений чем 2!\n";
		return;
	}
	else if (sorted == 1) {
		cout << "Таблица отсортирована!\n";
		return;
	}
	string tmp1, tmp2;
	Accesories *temp;

	for (int i = 0; i < col; i++) {
		for (int j = i + 1; j < col; j++) {

			tmp1 = rows[i]->Retname();
			tmp2 = rows[j]->Retname();

			if (tmp1 > tmp2) {
				temp = rows[i];
				rows[i] = rows[j];
				rows[j] = temp;
			}
		}
		sorted = 1;
	}
	



}

void DataBase::Output_DB()
{
	if (col<=0) {
		cout << "Нет значений в базе данных!\n";
		return;
	}
	cout << title;
	cout << "_______________________________________________________________\n";
	cout << "|                   Ведоость комплектующих                    |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|   Обозначение   | Тип |      Номинал      |   Количество    |\n";
	cout << "|-------------------------------------------------------------|\n";

	for (int i = 0; i < col;i++) {
		cout << "|"<< *rows[i]<<"|\n";
	}

	cout << "|-------------------------------------------------------------|\n";
}
