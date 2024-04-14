/*
Bài 5: Viết chương trình nhập vào điểm thi và hệ số của 3 môn toán lý hóa
Tính điểm trung bình của sinh viên đó
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double dt, dl, dh, dtb;
    int hst, hsl, hsh;

    cout << "Nhap diem toan, ly, hoa: ";
    cin >> dt >> dl >> dh;

    cout << "Nhap he so mon toan, mon ly, mon hoa: ";
    cin >> hst >> hsl >> hsh;

    dtb = ((dt * hst) + (dl * hsl) + (dh * hsh)) / (hst + hsl + hsh);

    cout << fixed << setprecision(1) << endl;
    cout << "Diem trung binh la: " << dtb << endl;

    return 0;
}