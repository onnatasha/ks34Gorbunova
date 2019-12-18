

#include "windows.h"
#include <iostream>
#include "cube.h"
#include "cube.cpp"

using namespace std;
int main() {
    setlocale(LC_ALL,"Russian");
    cout << "Введите число" << endl;
    double x;
    cin >> x;
    cube(&x);
    cout << " по указателю " << x << endl;
    cube(x);
    cout << "по ссылке" << x;

    return 0;
}
