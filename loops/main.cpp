//Chapter 1 - advanced loop
#include <iostream>
using namespace std;
 
int main(void)
{
    int i = 0;
    int n[10] = {10,20,30,40,50,60,70,80,90,100};

    //�粼�~���W��
    cout << "while:" << endl;
    i = 0;
    while(i<10) { //�令i<0�|�o�ͤ����?
        cout << i << endl;
        i++;
    }

    //���W����ɲ�
    cout << "\ndo while:" << endl;
    i = 0;
    do {
        cout << i << endl;
        i++;
    } while(i<10); //�令i<0�|�o�ͤ����?

    cout << "\n[com] for:" << endl;
    //���q���ݪ��ɭԱ`�o�˥�
    for(i=0;i<10;i++) {
        cout << i+1 << ". " << n[i] << endl;
    }
    
    cout << "\n[human] for:" << endl;
    //���H�ݪ��ɭԱ`�o�˥�
    for(i=1;i<=10;i++) {
        cout << i << ". " << n[i-1] << endl;
    }

    system("pause");
    return 0;
}