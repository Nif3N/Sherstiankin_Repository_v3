
#include <iostream>

using namespace std;

void EnterX(int &num_X)
{

}
void EnterN(int &num_N)
{

}
void MultiplyN(int num_X, int num_N)
{

}
void CountNumX(int num_X)
{

}

int main()
{
    cout << "1. Ввести натуральное число X";
    cout << "2. Ввести цифру N (которая меньше числа разрядов числа X)";
    cout << "3. Определить произведение последних N цифр натурального числа X";
    cout << "4. Определить количество цифр введенного числа X";
    cout << "Введите номер функции (1-4) или 0 для выхода: ";

    int k, x, n;
    cin >> k;
    switch (k) {
    case 1: 
        EnterX(x);
    case 2:
        EnterN(n);
    case 3: 
        MultiplyN(x, n);
    case 4:
        CountNumX(x);
    default:
        cout << "Ошибка ввода!";
    }
}

