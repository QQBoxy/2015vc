//Chapter 1 - srand random
#include <iostream>
#include <time.h> //����time�Bclock�禡�ϥ�
using namespace std;

int main(void)
{
    srand(time(NULL));
    cout << rand()%10 << endl;
    system("pause");
    return 0;
}