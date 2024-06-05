#include <iostream>
#include <string>

using namespace std;

bool UserInputX(string input)
{
    if (input.empty()) return false;

    try
    {
        int number = stoi(input);
        if (number <= 0) return false;
    }
    catch (...)
    {
        return false;
    }
    return true;
}

bool UserInputN(string input, int numX)
{
    if (input.empty()) return false;

    try
    {
        int number = stoi(input);
        if (number <= 0) return false;
        if (number >= numX) return false;
    }
    catch (...)
    {
        return false;
    }
    return true;
}

void EnterX(int &num_X)
{
    string str_input;
    getline(cin, str_input);
    while (!UserInputX(str_input))
    {
        cout << "������� X: ";
        getline(cin, str_input);
    }
    num_X = stoi(str_input);
}

void EnterN(int &num_N, int &num_X)
{
    string str_input;
    cout << "������� N: ";
    getline(cin, str_input);
    while (!UserInputN(str_input, num_X))
    {
        cout << "������� N: ";
        getline(cin, str_input);
    }
    num_N = stoi(str_input);
}

int MultiplyN(int num_X, int num_N)
{
    int res = 1;
    int mult = 0;
    for (int i = 0; i < num_N; i++)
    {
        mult = num_X % 10;
        num_X = num_X / 10;
        res = res * mult;
    }
    return res;
}
int CountNumX(int num_X)
{
    int count = 1;
    while (num_X / 10 != 0)
    {
        count++;
        num_X = num_X / 10;
    }
    return count;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int k, x, n, res, count;
    bool funX = false, funN = false;
    do {
        cout << "1. ������ ����������� ����� X" << endl;
        cout << "2. ������ ����� N (������� ������ ����� �������� ����� X)" << endl;
        cout << "3. ���������� ������������ ��������� N ���� ������������ ����� X" << endl;
        cout << "4. ���������� ���������� ���� ���������� ����� X" << endl;
        cout << "������� ����� ������� (1-4) ��� 0 ��� ������: ";

        cin >> k;
        switch (k) {
        case 1:
            EnterX(x);
            funX = true;
            break;
        case 2:
            if (funX) {
                EnterN(n, x);
                funN = true;
            }
            else { cout << "Error!" << endl; }
            break;
        case 3:
            if (funX && funN) {res = MultiplyN(x, n); 
            cout << "������������ ��������� N ����: " << res << endl;
            }
            else { cout << "Error!" << endl; }
            break;
        case 4:
            if (funX) {
                count = CountNumX(x);
                cout << "���-�� ���� � ����� X: " << count << endl;
            }
            break;
        case 0:
            break;
        default:
            cout << "������ �����!"<<endl;
            break;
        }
    } while (k != 0);
}
