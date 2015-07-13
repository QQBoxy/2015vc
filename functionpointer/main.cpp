#include <iostream>
using namespace std;
  
// 一維陣列, 乘值
void multiply(int *arr, int count, int num) {
    int i = 0;
    for(i=0;i<count;i++) {
        arr[i] *= num;
    }
}
  
int main(void) {
    int i = 0;
    int num = 0;
    int arr[5] = {1, 2, 3, 4, 5};
    const int count = sizeof(arr)/sizeof(arr[0]); //陣列數量

    cout << "Input number: ";
    cin >> num;
    multiply(&arr[0], count, num); //傳入一維陣列 與 乘值

    for(i=0;i<count;i++) { //印出一維陣列資料
        cout << arr[i] << endl;
    }
    system("pause");
    return 0;
}