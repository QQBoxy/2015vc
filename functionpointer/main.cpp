#include <iostream>
using namespace std;
  
// �@���}�C, ����
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
    const int count = sizeof(arr)/sizeof(arr[0]); //�}�C�ƶq

    cout << "Input number: ";
    cin >> num;
    multiply(&arr[0], count, num); //�ǤJ�@���}�C �P ����

    for(i=0;i<count;i++) { //�L�X�@���}�C���
        cout << arr[i] << endl;
    }
    system("pause");
    return 0;
}