//Chapter 1 - datatype
#include <iostream>
using namespace std;

int main(void)
{
    //資料型態
    cout << "type\tbyte" << endl;
 
    cout << "int\t"    << sizeof(int)    << endl; //4位元 整數
    cout << "long\t"   << sizeof(long)   << endl; //4位元 長整數
    cout << "float\t"  << sizeof(float)  << endl; //4位元 浮點數
    cout << "double\t" << sizeof(double) << endl; //8位元 雙精度浮點數
    cout << "char\t"   << sizeof(char)   << endl; //1位元 字元
    cout << "bool\t"   << sizeof(bool)   << endl; //1位元 布林值

    //宣告二維陣列
    int arr[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };

    int *address;
    address = &arr[0][0]; //陣列的第一筆位址
    
    cout << "\n16進制位址\t數值資料" << endl;
    cout << (address + 0) << "\t" << *(address + 0) << endl;
    cout << (address + 1) << "\t" << *(address + 1) << endl;
    cout << (address + 2) << "\t" << *(address + 2) << endl;
    cout << (address + 3) << "\t" << *(address + 3) << endl;
    cout << (address + 4) << "\t" << *(address + 4) << endl;
    cout << (address + 5) << "\t" << *(address + 5) << endl;
    cout << (address + 6) << "\t" << *(address + 6) << endl;
    cout << (address + 7) << "\t" << *(address + 7) << endl;

    system("pause");
    return 0;
}