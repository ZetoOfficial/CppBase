/*
Лабораторная №4
Задание 5 Вариант 21
Составить  программу,  которая  в  зависимости  от  
порядкового номера месяца (1, 2, ..., 12) 
выводит на экран количество дней в этом месяце. 
Рассмотреть два случая: 
1) год не является високосным; 
2) год  может  быть  високосным  (информация  об  этом 
вводится  с клавиатуры). 
*/

#include <iostream>

using namespace std;
int main(){
    int m;
    cin >> m;

    switch (m)
    {
    case 2:
        cout << "28 дней в дефолтном";
        cout << "29 в високосном";
        break;
    case 4:
        cout << "30 дней";
        break;
    case 6:
        cout << "30 дней";
        break;
    case 9:
        cout << "30 дней";
        break;
    case 11:
        cout << "30 дней";
        break;   
    default:
        cout << "31 день";
        break;
    }    
    return 0;
}