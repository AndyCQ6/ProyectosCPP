#include <iostream>
using namespace std;

int main () 
{
    int num1 = 0;
    int num2 = 0;
    char signo;

    cout << "Ingresa dos números enteros: ";
    cin >> num1 >> num2;
    cout << "Ingresa un signo de operación + ó - ó *: ";
    cin >> signo;
    cout << "Num1: " << num1 << "\tnum2: " << num2 << "\tsigno: " << signo;

    return 0;
}