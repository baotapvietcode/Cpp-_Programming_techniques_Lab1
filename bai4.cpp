/*
Bài 4: Viết chương trình nhập vào 2 giá trị gồm số lượng và đơn giá.
Tính tiền và thuế giá trị tăng phải trả, biết:
a, Tiền = Số lượng * đơn giá;
b, Thuế giá trị tăng = 10% tiền
*/

#include <iostream>

using namespace std;

int main()
{
    int soluong;
    cout << "Nhap vao so luong: ";
    cin >> soluong;

    double dongia, tien, tgtt;
    cout << "Nhap vao don gia: ";
    cin >> dongia;
    
    tien = soluong * dongia;
    tgtt = 0.1 * tien;

    cout << "Tien: " << tien << endl;
    cout << "Thue gia tri tang: " << tgtt << endl;

    return 0;
}