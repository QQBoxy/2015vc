#include <iostream>
#include <string>
#include <sstream> //ostringstream
using namespace std;
 
int main(int argc, char* argv[])
{
    //Character Sequences
    //char c[13] = "CharVariable";
    char c[13] = {'C', 'h', 'a', 'r', 'V', 'a', 'r', 'i', 'a', 'b', 'l', 'e', '\0'};
 
    //Pointer
    char *p = "Pointer";
 
    //Class
    string s = "String";
 
    //String to Char
    strcpy(c, s.c_str());
    cout << c << endl;
     
    //Char to String
    s.assign(c);
    cout << s << endl;
 
    //Pointer to Char
    strcpy(c, p);
    cout << c << endl;
 
    //Char to Pointer
    p = &c[0];
    cout << p << endl;
 
    //String to Float
    float num1 = 0.0f;
    s = "233.42";
    num1 = atof(s.c_str());
    cout << num1 << endl;
 
    //Float to String
    float num2 = 233.42f;
    ostringstream buffer;
    buffer << num2;
    s = buffer.str();
    cout << s << endl;

    system("pause");
    return 0;
}