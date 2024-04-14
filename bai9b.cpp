#include <iostream>

using namespace std;

int main()
{
    int n = 3456;
    int temp = n;
    int tong = 0;

    // Sử dụng vòng lặp for
    for (int i = 1; i <= 4; i++)
    {
        n = temp % 10;
        tong = tong + n;
        temp = temp / 10;
        cout << temp << endl;
        cout << tong << endl;
    }

    //Tổng
    cout << "Tong la: " << tong << endl;

    return 0;
}