//Chapter 1 - random

#include <iostream>
#include <windows.h> //提供Sleep函式使用
#include <time.h> //提供time、clock函式使用
using namespace std;

int main(void)
{
    //寫一支駭客程式?
    system("color A");
    system("title Hack System");
    
    while(1) {
        cerr << rand()%2;
        Sleep( ( ( time(NULL) + clock()*5 ) )%10 );
    }
    
    cout << "Done." << endl;
    
    //回傳終止
    return 0;
}