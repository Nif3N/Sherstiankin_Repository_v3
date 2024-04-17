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
    int count = 1;
    while (num_X / 10 != 0)
    {
        count++;
        num_X = num_X / 10;
    }
    cout << "Кол-во цифр в числе X: " << count;
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "1. Ввести натуральное число X" << endl;
    cout << "2. Ввести цифру N (которая меньше числа разрядов числа X)" << endl;
    cout << "3. Определить произведение последних N цифр натурального числа X" << endl;
    cout << "4. Определить количество цифр введенного числа X" << endl;
    cout << "Введите номер функции (1-4) или 0 для выхода: ";
    int k, x, n;
    cin >> k;
    switch (k) {
    case 1: 
        EnterX(x);
        break;
    case 2:
        EnterN(n);
        break;
    case 3: 
        MultiplyN(x, n);
        break;
    case 4:
        CountNumX(x);
        break;
    default:
        cout << "Ошибка ввода!";
        break;
    }
}

