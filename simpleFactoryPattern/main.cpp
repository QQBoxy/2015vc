#include <iostream>
using namespace std;

class Tea {
public:
    virtual void tea(){}; //©ñ?¯ù¸­
    void water() {
        cout << "¨Rªw" << endl;
    }
};

class GreenTea : public Tea {
public:
    void tea() {
        cout << "©ñºñ¯ù¸­" << endl;
    }
};

class BlackTea : public Tea {
public:
    void tea() {
        cout << "©ñ¬õ¯ù¸­" << endl;
    }
};

class Teapot {
public:
    Tea* maketea(int type) { //ªw¯ù
        if(type == 1) {
            return new GreenTea();
        } else if(type == 2) {
            return new BlackTea();
        }
    }
};

int main(void) {
    int type = 0;
    
    cout << "1.Green Tea" << endl;
    cout << "2.Black Tea" << endl;
    cout << "Input Type:";
    cin >> type;
    
    Teapot *teapot = new Teapot();
    teapot->maketea(type)->tea();
    teapot->maketea(type)->water();
    
    system("pause");
    return 0;
}