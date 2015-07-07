//Chapter 1 - srand random
#include <iostream>
#include <time.h> //提供time、clock函式使用
using namespace std;

int main(void)
{
    srand(time(NULL));
    cout << rand()%10 << endl;
    system("pause");
    return 0;
}