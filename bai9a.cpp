#include <iostream>

using namespace std;

int main()
{
    int n = 3456;
    int temp = n;
    int tong = 0;

    // Lần 1:
    n = n % 10;
    tong = tong + n;
    n = temp / 10;

    // Lần 2:
    n = n % 10;
    tong = tong + n;
    n = temp / 100;

    // Lần 3:
    n = n % 10;
    tong = tong + n;
    n = temp / 1000;

    // lần 4: 
    n = n % 10;
    tong = tong + n;
    n = temp / 10000;

    //Tổng
    cout << "Tong la: " << tong << endl;

    return 0;
}