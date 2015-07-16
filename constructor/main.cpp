#include <iostream>
#include "line.h"
using namespace std;

int main(int argc, char* argv[]) {
    int i = 0;
    Line newline(2);
    
    newline.arr[0] = 5;
    newline.arr[1] = 10;

    cout << newline.arr[0] << ", " << newline.arr[1] << endl;
    
    system("pause");
    return 0;
}
