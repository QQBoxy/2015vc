//Chapter 3 - minus
#include <iostream>
using namespace std;
 
int main(void)
{
    int sum = 0;
    int a = 0;
    int b = 0;
    
    //a++ �ᰵ
    sum = 0;
    a = 10;
    b = 5;
    sum = a++ + b; //���`�M�A+1
    cout << sum << endl;

    //++a ����
    sum = 0;
    a = 10;
    b = 5;
    sum = ++a + b; //��+1�A�`�M
    cout << sum << endl;
    
    //a-- �ᰵ
    sum = 0;
    a = 10;
    b = 5;
    sum = a-- + b; //���`�M�A-1
    cout << sum << endl;

    //--a ����
    sum = 0;
    a = 10;
    b = 5;
    sum = --a + b; //��-1�A�`�M
    cout << sum << endl;

    /*
    ���G:
    15
    16
    15
    14
    */

    system("pause");
    return 0;
}