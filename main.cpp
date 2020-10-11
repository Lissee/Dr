#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int X, Y, Result = 0, Check;
    double R;
    bool check_k = true;

//Стреляем
    for (Check = 0; Check<5; Check++ ) {
        cout << "Введите координаты X и Y (Не больше 10 и не меньше -10)" << endl;
        cin >> X;
        //Проверка введенных данных
        if (X>5 || X<-5) {
            check_k = false;
            cout <<"Ошибка! Введенные координаты не соответствуют допустимым!";
            break;
        } else {
            cin >> Y;
            if (Y > 5 || Y < -5) {
                check_k = false;
                cout << "Ошибка! Введенные координаты не соответствуют допустимым!";
                break;
            } else {
                //Находим радиус мишени
                X = X + rand() % 5 + (-1);
                Y = Y + rand() % 5 + (-1);
                R = sqrt(X * X + Y * Y);
//Считаем колличество баллов
                if (R > 5) {
                } else if (R > 4) {
                    Result = Result + 1;
                } else if (R > 3) {
                    Result = Result + 2;
                } else if (R > 2) {
                    Result = Result + 3;
                } else if (R > 1) {
                    Result = Result + 4;
                } else Result = Result + 5;
                cout << "Result: " << Result << endl;
            }
        }
    }
//Выводим результат
if (check_k == true) {
    if (Result < 10) {
        cout << "Lose! Result: " << Result;
    } else cout << "Win! Result: " << Result;
}
    return 0;
}