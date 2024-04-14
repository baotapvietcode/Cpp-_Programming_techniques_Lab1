/*
Bài 8: Viết chương trình nhập vào số Km đã đi của 1 xe taxi. Tính tổng tiền phải trả cho quãng
đường đó. Biết rằng: Km đầu tiên giá: 15000đ/Km. Từ Km 2 trở đi giá 12000đ/Km. Thuế giá trị
gia tăng: 10% trên tổng tiền trả.

Note: Trong ngôn ngữ lập trình C++, khi gán một giá trị số nguyên vào một biến kiểu số thực (float hoặc double)
chúng ta cần ghi rõ chữ số thập phân (decimal point) để biểu thị rằng giá trị đó là kiểu số thực. 

Trong trường hợp này, giá 15000 là một kiểu số nguyên. Để đảm bảo rằng giá trị 15000 được xem như là một số thực
ta cần ghi thêm chữ số thập phân 0 vào cuối (15000.0) để ngầm hiểu rằng giá trị này là kiểu số thực,
chứ không phải số nguyên.

Nếu không ghi rõ chữ số thập phân (15000), C++ sẽ hiểu đó là một số nguyên và có thể gây ra sai sót 
trong tính toán với các biến kiểu số thực khác.
*/

#include <iostream>

using namespace std; 

int main()

{
    long long km;
    double thue, tongtien;
    cin >> km;
    
    if (km <= 0)
    {
        cout << "Du lieu nhap vao khong hop le!!!" << endl;
        //return 0;
    }
    else if (km <= 1) // = (km > 0 && km <= 1)
    {
        tongtien = 1 * 15000.0;
        //cout << "Tong tien phai tra cho quang duong la: " << tongtien << endl;
    }
    else
    {
        tongtien = 1 * 15000.0 + (km - 1) * 12000.0;
        //thue = 0.1 * tongtien;
        //cout << "Tong tien phai tra cho ca quang duong la: " << tongtien + thue << endl;
    }
    
    thue = 0.1 * tongtien;
    tongtien = tongtien + thue;

    cout << "Tong tien phai tra cho ca quang duong la: " << tongtien << " VND" << endl;

    return 0;
}