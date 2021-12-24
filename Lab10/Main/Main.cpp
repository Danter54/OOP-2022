#include <iostream>
#include <cassert>

using namespace std;

//default: compare == 1, return min
//compare == 2, return max
template <typename T>
T Min(T value1, T value2, const int& compare = 1)
{
    if (compare == 1)
        return value1 < value2 ? value1 : value2;
    else
        return value1 > value2 ? value1 : value2;
}

//default: compare == 1, return min
//compare == 2, return max
template <>
string Min(string value1, string value2, const int& compare)
{
    if (compare == 1)
        return strcmp(&value1[0], &value2[0]) > 0 ? value1 : value2;
    else
        return value1 > value2 ? value1 : value2;
}

//default: compare == 1, sort min - max
//compare == 2, sort max - min
template <typename T>
void sort(T* array_, const int& size, const int& compare = 1)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - 1; j++)
            if ((array_[j] > array_[j + 1]) && compare == 1)
            {
                T temp = array_[j];
                array_[j] = array_[j + 1];
                array_[j + 1] = temp;
            }
            else if ((array_[j] < array_[j + 1]) && compare == 2)
            {
                T temp = array_[j];
                array_[j] = array_[j + 1];
                array_[j + 1] = temp;
            }
}

//default: compare == 1, sum positive number
//compare == 2, sum positive and negative number
template <typename T>
T sum(T* array_, const int& size, const int& compare = 1)
{
    T sum(0);
    for (int i = 0; i < size; i++)
        if (array_[i] > 0 && compare == 1)
            sum += array_[i];
        else  if (compare == 2)
            sum += array_[i];

    return sum;
}

void testMin()
{
    int a = -4, b = 5;
    int resInt = Min(a, b);
    int resIntExpected = -4;
    assert(resInt == resIntExpected && "Exception: search min");

    resInt = Min(a, b, 2);
    assert(resInt == resIntExpected && "Exception: search max");


    double c = 5.89, d = 3.67;
    double resDouble = Min(c, d);
    double resDoubleExpected = 3.67;
    assert(resDouble == resDoubleExpected && "Exception: search min");

    resDouble = Min(c, d, 2);
    assert(resDouble == resDoubleExpected && "Exception: search max");
}

void testSum()
{
    int* arrI = new int[6]{ 2, 3, 5, -6, 7, 1 };
    int resInt = sum(arrI, 6);
    int resIntExpected = 18;
    assert(resInt == resIntExpected && "Exception: sum of positive numbers");

    resInt = sum(arrI, 6, 2);
    assert(resInt == resIntExpected && "Exception: sum of all numbers");

    double* arrD = new double[6]{ 2.56, 7.9, -5.76, 23.5, -8.15, 2.38 };
    double resDouble = sum(arrD, 6);
    double resDoubleExpected = 36.34;
    assert(resDouble == resDoubleExpected && "Exception: sum of positive numbers");

    resDouble = sum(arrD, 6, 2);
    //assert(resDouble == resDoubleExpected && "Exception: sum of all numbers");

    delete[] arrI;
    delete[] arrD;
}

void testSort()
{
    int* resArrInt = new int[6]{ 2, 3, 5, -6, 7, 1 };
    int* resArrIntExpected = new int[6]{ -6, 1, 2, 3, 5, 7 };
    sort(resArrInt, 6);
    for (int i = 0; i < 6; i++)
        assert(resArrInt[i] == resArrIntExpected[i] && "Exception: sort min - max");

    delete[] resArrInt;
    resArrInt = new int[6]{ 2, 3, 5, -6, 7, 1 };

    sort(resArrInt, 6, 2);
    for (int i = 0; i < 6; i++) assert(resArrInt[i] == resArrIntExpected[i] && "Exception: sort max - min");


    double* arrD = new double[6]{ 2.56, 7.9, -5.76, 23.5, -8.15, 2.38 };
    double* arrDExpected = new double[6]{ -8.15, -5.76, 2.38, 2.56, 7.9, 23.5 };
    sort(arrD, 6);

    for (int i = 0; i < 6; i++)
        assert(arrD[i] == arrDExpected[i] && "Exception: sort min - max");

    delete[] arrD;
    arrD = new double[6]{ 2.56, 7.9, -5.76, 23.5, -8.15, 2.38 };
    sort(arrD, 6, 2);

    //for (int i = 0; i < 6; i++) assert(arrD[i] == arrDExpected[i] && "Exception: sort max - min");

    delete[] resArrInt;
    delete[] resArrIntExpected;
    delete[] arrD;
    delete[] arrDExpected;
}

int main()
{
    //testMin();
  testSum();
   // testSort();
}