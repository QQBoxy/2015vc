//Chapter 1 - if statement
#include <iostream>
#include <string>
using namespace std;
 
int main(void)
{
    int len = 0;
    string text = "";

    cout << "Input Word:";
    cin >> text;

    len = text.length();

    if(len != 0 && len < 10) {
        cout << "Less than 10." << endl;
    } else if(len != 0 && len > 10) {
        cout << "More than 10." << endl;
    } else {
        cout << text << endl;
    }

    system("pause");
    return 0;
}