/*
Лабораторная работа №4
Задание 10 Вариант 21
В  восточном  календаре  принят  60-летний  цикл, 
состоящий  из  12-летних  подциклов,  
обозначаемых  названиями  цвета: 
зеленый, красный, желтый, белый и голубой. 

При этом каждый цвет следует по  два  года  подряд.  
В  каждом  подцикле  годы  носят  названия  животных: 
крысы, коровы, тигра, зайца, дракона, змеи,
лошади, овцы, обезьяны, петуха, собаки и свиньи. 

По номеру года определить его название, 
если 4 год нашей эры начало цикла: «год зеленой крысы».
*/
#include <iostream>

using namespace std;
int main()
{
    int year;
    cout << "Введите год: ";
    cin >> year;

    cout << "год ";
    /*
    деление на 2, остаток 5 преобразует год в число от 0 до 4.5, с шагом 0.5
    что позволяет делать своего рода выборку. 
    Например:
    0  0.0
    1  0.5
    2  1.0
    3  1.5
    4  2.0
    5  2.5
    6  3.0
    7  3.5
    8  4.0
    9  4.5
    10 0.0
    11 0.5
    12 1.0
    Берётся лишь целое число, которое повторяеется ровно 2 раза подряд
    Поэтому данной способ можно считать подходящим.
    */
    switch (year / 2 % 5)
    {
    case 0:
    {
        cout << "Белый ";break;
    }
    case 1:
    {
        cout << "Голубой ";break;
    }
    case 2:
    {
        cout << "Зелёный ";break;
    }
    case 3:
    {
        cout << "Красный ";break;
    }
    case 4:
    {
        cout << "Жёлтый ";break;
    }
    }

    switch (year%12)
    {
    case 0:
    {
        cout << "Обезьяна"; break;
    }
    case 1:
    {
        cout << "Петух"; break;
    }
    case 2:
    {
        cout << "Собака"; break;
    }
    case 3:
    {
        cout << "Свинья 🇺🇦"; break;
    }
    case 4:
    {
        cout << "Крыса"; break;
    }
    case 5:
    {
        cout << "Корова"; break;
    }
    case 6:
    {
        cout << "Тигр"; break;
    }
    case 7:
    {
        cout << "Заяц"; break;
    }
    case 8:
    {
        cout << "Дракон";break;
    }
    case 9:
    {
        cout << "Змея"; break;
    }
    case 10:
    {
        cout << "Лошадь"; break;
    }
    case 11:
    {
        cout << "Овца"; break;
    }
    }
}

