#include <iostream>
using namespace std;

class OBJ {
public:
    OBJ() {
        this->x = 10;
    }
    ~OBJ() {
        
    }
public:
    int x;
};

int main(void) {

	OBJ Object;
    OBJ *Pointer;
    Pointer=&Object;
    
    cout << Object.x << endl;
    cout << Pointer->x << endl;

	system("pause");
	return 0;
}

/*
class Tea {
public:
    virtual void tea(){}; //放?茶葉
    void water() {
        cout << "沖泡" << endl;
    }
};

class GreenTea : public Tea {
public:
    void tea() {
        cout << "放綠茶葉" << endl;
    }
};

class BlackTea : public Tea {
public:
    void tea() {
        cout << "放紅茶葉" << endl;
    }
};

class Teapot {
public:
    Tea* maketea(int type) { //泡茶
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
*/