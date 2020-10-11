#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int X, Y;
    bool check_k;
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
            R = sqrt(X * X + Y * Y);
            cout << "X=" << X << " Y=" << Y << " R=" << R;
        }
    }
    return 0;

}
