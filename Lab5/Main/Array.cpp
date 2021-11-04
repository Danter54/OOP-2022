#include "Array.h"
#include "Header_Includer.h"
void Array::InitfromFile()
{
    srand(static_cast<unsigned int>(time(0)));

    string buf;
    int sizeoffile = 0;

    string filename = "Text.txt";
    ifstream file(filename, ios::in);
    if (!file) {
        cout << "File is not open!!!\n";
        exit(-1);
    }
    else cout << "File is open!!!\n";

    while (!file.eof()) {
        file >> buf;
        size++;
    }

    file.seekg(0, ios::end);
    sizeoffile = file.tellg();

    arr = new int[size];
    file.seekg(0, ios::beg);

    int pos = rand()%sizeoffile;

    for (int i = 0; i<size; i++) {
        file >> arr[i];
       int pos = rand() % sizeoffile;
        file.seekg(pos,ios::beg);
    }

    file.close();
}

void Array::setArray()
{
    InitfromFile();
}

void Array::Output()
{
    for (int i = 0; i < size; i++) {
        cout << arr[i]<<' ';
    }
    cout<<endl;
}

void Array::operator[](string txt)
{
    setArray();
}
