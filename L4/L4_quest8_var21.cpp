/*
Лабораторная работа №4
Задание 8 Вариант 21
Даны действительные числа A,B,C,D. 
21)
Если A<B<C<D, то каждое число заменить на 133 
Если A>B>C>D, то числа заменить на противоположные значения; 
в противном случае оставить без изменения.
*/
#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << a << " " << b << "" << c << " " << d << endl;

    if (a < b && b < c && c < d) {
        a = 133;
        b = 133;
        c = 133;
        d = 133;
    } else if (a > b && b > c && c > d) {
        a = !a;
        b = !b;
        c = !c;
        d = !d;
    }
    cout << a << " " << b << "" << c << " "<< d;
}