#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int X, Y;
    double R;
   cout << "Введите координаты X и Y"<<endl;
   cin >> X;
   cin >> Y;
   R=sqrt(X*X + Y*Y);
   cout <<"X="<<X<<" Y="<<Y<<" R="<<R;
    return 0;

}
