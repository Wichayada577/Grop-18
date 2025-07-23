#include <iostream>
using namespace std;

int main() {
  
  	// while loop to print numbers from 1 to 5 //คำสั่งวนซ้ำในกรณีที่ยังไม่รู้จำนวนรอบแน่นอน
    int i = 0; // i เป็นจำนวนเต็มมีค่า = 0
     while (i < 5) { // จะวนซ้ำจน i มีค่าเท่ากับ 4 ถึงจะหยุด  
         cout << "Hi  => i = " << i << endl; //จะปริ้น Hi => i ตามที่วนคำสั่ง
         i++; // รันโค้ดก่อนวนคำสั่ง i จะ + 1
     }

    // while (true) { // คำสั่งจะวนซ้ำโดยไม่มีการสิ้นสุด จะวนไปเรื่อยๆ
      //  cout << "Hi  => i = " << i << endl;
        //i++;
    //}

    return 0;
}