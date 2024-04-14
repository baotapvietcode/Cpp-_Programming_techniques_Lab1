/*
Bài 6: Viết chương trình nhập tọa độ 2 điểm A và B trên mặt phẳng đề các
Tính độ dài vecto AB
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xa, ya, xb, yb, dodai;
    cin >> xa >> ya >> xb >> yb;

    dodai = sqrt((xb - xa) * (xb - xa) + (yb - ya) *(yb-ya));

    cout << "Do dai vecto AB la: " << fixed << setprecision(2) << dodai << endl;
    
    return 0;
}