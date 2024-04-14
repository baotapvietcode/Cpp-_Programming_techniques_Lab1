/*
Bài 1: Viết chương trình nhập vào 3 số nguyên a, b, c. Tính tổng và tích
của 3 số nguyên đó
*/

#include <iostream>

using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    
    cout << "Tong: " << a + b + c << endl;
    cout << "Tich: " << a * b * c << endl;

    return 0;
}