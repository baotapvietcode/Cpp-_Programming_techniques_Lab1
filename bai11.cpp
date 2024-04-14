/*
Bài 11: Viết chương trình tính khoảng cách từ điểm A(x, y, z)
tới mặt phẳng(P): ax + by + cz + d =0
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, z;
    long long a, b, c, d;

    cout << "Nha toa do diem A: ";
    cin >> x >> y >> z;

    cout << "Nhap tham so mat phang a, b, c, d: ";
    cin >> a >> b >> c >> d;

    double ts = fabs(a * x + b * y + c * z + d); 
    double ms = sqrt(a * a + b * b + c * c);
    double kc = ts / ms;

    //cout << fixed << setprecision(2);
    cout << "Khoang cach tu diem A toi mat phan (p) la: " << kc << endl;

    return 0;
    
}