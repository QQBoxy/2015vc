//Chapter 1 - random

#include <iostream>
#include <windows.h> //����Sleep�禡�ϥ�
#include <time.h> //����time�Bclock�禡�ϥ�
using namespace std;

int main(void)
{
    //�g�@���b�ȵ{��?
    system("color A");
    system("title Hack System");
    
    while(1) {
        cerr << rand()%2;
        Sleep( ( ( time(NULL) + clock()*5 ) )%10 );
    }
    
    cout << "Done." << endl;
    
    //�^�ǲפ�
    return 0;
}