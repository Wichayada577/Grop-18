#include <iostream>
using namespace std;

int main() {

  	// for loop to print "Hi" 5 times
    for (int i = 0; i < 5; i++) { // คำสั่งแบบวนซ้ำ i มีค่าเป็นจำนวนเต็ม i เริ่มต้น = 0 ;เงื่อนไขการวนซ้ำ ถ้า i มีค่าน้อยกว่า 5 ก็จะทำงานวนลูปต่อ ; เพิ่มค่า i+1 ทีละรอบหลังวนจบ
      	cout << "Hi => i = " << i << endl; //ปริ้น Hi => i ตามจำนวนการวนซ้ำ
    }
  
    return 0;
}