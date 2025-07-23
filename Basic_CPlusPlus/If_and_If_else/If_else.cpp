#include<iostream>
using namespace std;

int main() {
    int A = 0; //ตัวแปรAที่เก็บจำนวนเต็ม
    cout << "Please enter a number for A: " << endl; //โปรดใส่ค่าของA
    cin >> A;

    if (A == 8) { //เงื่อนไขของif  ถ้าA มีค่าเท่ากับ 8 ก็จะเข้าเงื่อนไขนี้เลย ถ้าไม่ใช่จะไปเงื่อนไขถัดไป
        cout << "A is 8" << endl; // ถ้าตรงตามเงื่อนไขจะปริ้น A is 8
    } else if (A > 8) { // จะเข้าเงื่อนไขนีได้ A ต้องมีค่ามากกว่า 8
        cout << "A is greater than 8" << endl; // ตรงตามเงื่อนไขจะปริ้น A is greater than 8
    } else { // จะเข้าเงื่อนไขนี้ได้ A ต้องมีค่าน้อยกว่า 8 
        cout << "A is less than 8" << endl; // ตรงตามเงื่อนไขปริ้น A is less than 8
    }

    return 0;
}