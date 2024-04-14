#include <iostream>

using namespace std;

int main()
{
    int n = 3456;
    int temp = n;
    int tong = 0;

    // Sử dụng vòng lặp do while
    do
    {
        n = temp % 10;
        tong = tong + n;
        temp = temp / 10;
    }
    while (temp != 0);

    //Tổng
    cout << "Tong la: " << tong << endl;

    return 0;
}