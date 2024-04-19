#include <iostream>

using namespace std;

void EnterX(int &num_X)
{
    do {
        cout << "¬ведите X:";
        cin >> num_X;
    } while (num_X <= 0);
}
void EnterN(int &num_N, int &num_X)
{
    do {
        cout << "¬ведите N: ";
        cin >> num_N;
    } while (num_N >= num_X || num_N <= 0);
}
void MultiplyN(int num_X, int num_N)
{

}
void CountNumX(int num_X)
{

}

int main()
{
<<<<<<< HEAD
=======
    setlocale(LC_ALL, "rus");
>>>>>>> 969c4fe1bc45bbfe24f07870ada95b5c9e14ea0b
    cout << "1. ¬вести натуральное число X" << endl;
    cout << "2. ¬вести цифру N (котора€ меньше числа разр€дов числа X)" << endl;
    cout << "3. ќпределить произведение последних N цифр натурального числа X" << endl;
    cout << "4. ќпределить количество цифр введенного числа X" << endl;
    cout << "¬ведите номер функции (1-4) или 0 дл€ выхода: ";
    int k, x, n;
    cin >> k;
    switch (k) {
    case 1: 
        EnterX(x);
        break;
    case 2:
<<<<<<< HEAD
        EnterN(n, x);
=======
        EnterN(n);
>>>>>>> 969c4fe1bc45bbfe24f07870ada95b5c9e14ea0b
        break;
    case 3: 
        MultiplyN(x, n);
        break;
    case 4:
        CountNumX(x);
        break;
    default:
        cout << "ќшибка ввода!";
        break;
    }
}

