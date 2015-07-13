//Chapter 3 - minus
#include <iostream>
using namespace std;
 
int main(void)
{
    int sum = 0;
    int a = 0;
    int b = 0;
    
    //a++ 後做
    sum = 0;
    a = 10;
    b = 5;
    sum = a++ + b; //先總和再+1
    cout << sum << endl;

    //++a 先做
    sum = 0;
    a = 10;
    b = 5;
    sum = ++a + b; //先+1再總和
    cout << sum << endl;
    
    //a-- 後做
    sum = 0;
    a = 10;
    b = 5;
    sum = a-- + b; //先總和再-1
    cout << sum << endl;

    //--a 先做
    sum = 0;
    a = 10;
    b = 5;
    sum = --a + b; //先-1再總和
    cout << sum << endl;

    /*
    結果:
    15
    16
    15
    14
    */

    system("pause");
    return 0;
}