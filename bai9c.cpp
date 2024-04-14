#include <iostream>

using namespace std;

int main()
{
    int n = 345678910;
    int temp = n;
    int tong = 0;

    // Sử dụng vòng lặp while
    while (temp != 0)
    {
        n = temp % 10;
        tong = tong + n;
        temp = temp / 10;
    }

    //Tổng
    cout << "Tong la: " << tong << endl;

    return 0;
}