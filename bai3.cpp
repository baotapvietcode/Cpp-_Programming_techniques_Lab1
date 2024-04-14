/*
Bài 3: Viết chương trình nhập vào bán kính r của một hình tròn, tính chu vi và diện tích của hình tròn đó
*/

#include <iostream>

using namespace std;

int main()
{
    const double pi = 3.14;
    long long r;
    cin >> r;

    double chuvi = 2 * pi * r;
    double dientich = pi * r * r;
    
    cout << "Chu vi hinh tron la: " << chuvi << endl;
    cout << "Dien tich hinh tron la: " << dientich << endl;
    
    return 0;
}