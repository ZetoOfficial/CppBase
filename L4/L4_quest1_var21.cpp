/*
Лабораторная №4
Задание 1 Вариант 21
Постановка задачи:
Напишите программу: Переменной k присвоить номер четверти плоскости, в которой находится точка с координатами (x,y) (xy < > 0) 

1: x > 0; y > 0;
2: x < 0; y > 0;
3: x < 0; y < 0;
4: x > 0; y < 0;
*/
#include <iostream>

using namespace std;
int main()
{
    int x, y, k;
    cin >> x >> y;
    
    if (x > 0 && y > 0) k = 1;
    else if (x < 0 && y > 0) k = 2;
    else if (x < 0 && y < 0) k = 3;
    else if (x < 0 && y > 0) k = 4;
    
    cout << k;
    
    return 0;
}