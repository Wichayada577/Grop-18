#include<iostream>
using namespace std;

int main (){
    int A = 0; // ตัวแปรAที่เก็บจำนวนเต็ม
    cout<<"Please enter a number to A: "<< endl; //ใส่ตัวเลข
    cin >> A;

    if(A<5){ //ถ้าจะทำตามเงื่อนไขของif A ต้องมีค่าน้อยกว่า5
        cout<<"Condition met"<<endl; //ตรงตามเงื่อนไขของifจะพิมพ์ Condition met ออกมา
    }
    
    return 0;
}