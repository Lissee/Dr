#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int X, Y, Result =0;
    bool check_k = true;
    double R;
   cout << "Введите координаты X и Y"<<endl;
   cin >> X;
    //Проверка введенных данных
    if (X>5 || X<-5) {
        check_k = false;
        cout <<"Ошибка! Введенные координаты не соответствуют допустимым!";
    } else {
        cin >> Y;
        if (Y > 5 || Y < -5) {
            check_k = false;
            cout << "Ошибка! Введенные координаты не соответствуют допустимым!";
        } else {
            //Находим радиус мишени
            X = X + rand() % 5 + (-1);
            Y = Y + rand() % 5 + (-1);
            R = sqrt(X * X + Y * Y);
            cout << "X=" << X << " Y=" << Y << " R=" << R;
            Result = Result + 5;
            cout << "Result: " << Result << endl;


//Выводим результат
cout << "Result: " << Result;

}
    }
    return 0;

}
