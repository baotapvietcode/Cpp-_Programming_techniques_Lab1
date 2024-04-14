/*
Bài 10: Viết chương trình nhập vào 1 cạnh a của 1 hình vuông. Tính và xuất ra chu vi, diện tích
và độ dài đường chéo của hình vuông đó
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    long long a;
    cin >> a;

    cout << "Chu vi hinh vuong la: " << 4 * a << endl;
    cout << "Dien tich hinh vuong la: " << a * a << endl;
    cout << "Duong cheo hinh vuong la: " << fixed << setprecision(2) <<  a * sqrt(2) << endl;

    return 0;
}