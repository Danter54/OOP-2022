#include"Header_Includer.h"

Accessories::Accessories(string* a, char& b, double& c, unsigned int& d)
{
    int lenth = a->length();
    name = new string[lenth+1];
    *name = *a;
    type = b;
    denomination = c;
    this->count = d;
}

void Accessories::setall(string* a, char& b, double& c, unsigned int& d)
{
    int lenth = a->length();
    name = new string[lenth + 1];
    *name = *a;
    type = b;
    denomination = c;
    this->count = d;
}

void Accessories::getall(string* a, char& b, double& c, unsigned int& d)
{
    int leanth = name->length();
    a = new string[leanth+1];
    a = name;
    b = type;
    c = denomination;
    d = this->count;
}

void Accessories::showall(void)
{
    cout << *name << ' ';
    cout << type << ' ';
    cout << denomination << ' ';
    cout << this->count << endl;
}

Accessories Accessories::operator = ( const Accessories& o1)
{
    delete[] name;
    int lenth = o1.name->length();
    name = new string[lenth+2];
    if (!name) {
        cout << "Ошибка! Память не выделена.";
        exit(1);
    }
    *name = *(o1.name);
    type = o1.type;
    denomination = o1.denomination;
    this->count = o1.count;

    return *this;
}

int Accessories::operator == (Accessories& o1)
{
    if (this->count != o1.count) { cout << "Данные экземпляры класса не равны."; return 1;
    }
    else if (type != o1.type) { cout << "Данные экземпляры класса не равны."; return 1;
    }
    else if (denomination != o1.denomination) { cout << "Данные экземпляры класса не равны."; return 1;
    }
    else if (*name != *(o1.name)) { cout << "Данные экземпляры класса не равны."; return 1;
    }
    
    return 0;
}

Accessories Accessories::operator + (Accessories& o1)
{
    Accessories tmp;
    int lenth = this->name->length() + o1.name->length();
    string* tmp_name = new string[lenth+2];
    tmp_name = this->name;
    *tmp_name += *o1.name;
    tmp.name = new string[lenth];
    tmp.name = tmp_name;

    tmp.type = o1.type;
    tmp.denomination = denomination + o1.denomination;
    tmp.count = count + o1.count;

    return tmp;
}

ostream& operator << (ostream& stream, Accessories& obj)
{
    stream << "|" << setw(18) << *obj.name << "  |  ";
    stream << setw(3) << obj.type << "|";
    stream << setw(15) << obj.denomination << "  |";
    stream << setw(14) << obj.count << "  |\n";;
    

    return stream;

}

istream& operator >> (istream& stream, Accessories& obj)
{
    cout << "Введите Название, Тип, Номинал, Количество: \n";
    stream >> *obj.name;
    stream >> obj.type;
    stream >> obj.denomination;
    stream >> obj.count;
    return stream;
}



void head(void)
{
    cout << "_______________________________________________________________\n";
    cout << "|         Буддистские монастыри Японии периода Нара           |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "|     Обозначение     |  Тип  |     Номинал    |  Количество  |\n";
    cout << "|-------------------------------------------------------------|\n";
}



int isvalid(int& a, int& b, int& count)
{
    if ((a>count) || (a<0) || (b>count) || (b<0)) {
        cout << "Ошибка! Экземпляра с таким индексом не существует.\n";
 
        return -1;
    }
    else if (a == b) {
        cout << "Ошибка! Экземпляр не может быть записан сам в себя.\n";
        return -2;
    }
    return 0;
}
