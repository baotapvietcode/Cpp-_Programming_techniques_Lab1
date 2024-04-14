/*
Bài 2: Viết chương trình nhập vào 2 cạnh a, b của 1 hình chữ nhật
tính chu vi và diện tích của hình chữ nhật đó
*/

#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    cout << "Chu vi: " << (a + b) * 2 << endl;
    cout << "Dien tich: " << a * b << endl;

    return 0;
}