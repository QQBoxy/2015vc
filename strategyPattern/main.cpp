#include <iostream>
using namespace std;

class Car {
public:
    void SpeedUp() {
        cout << "加速中" << endl;
    }
    void SpeedDown() {
        cout << "減速中" << endl;
    }
};

class PorscheCar : public Car { //保時捷
public:
    void UseNOS() {
        cout << "開啟氮氣加速" << endl;
    };
};

class AmbulanceCar : public Car { //救護車
public:
    void UseAlarmSiren() {
        cout << "開啟警笛" << endl;
    };
};

int main(void) {
    
    cout << "[保時捷]" << endl;
    PorscheCar A;
    A.SpeedUp();
    A.UseNOS();
    A.SpeedDown();

    cout << "====================" << endl;
    
    cout << "[救護車]" << endl;
    AmbulanceCar B;
    B.SpeedUp();
    B.UseAlarmSiren();
    B.SpeedDown();

    system("pause");
    return 0;
}

/*
class ReplaceAction {
public:
    virtual void Action(){};
};

class Common {
public:
    void SpeedUp() {
        cout << "加速中" << endl;
    }
    void SpeedDown() {
        cout << "減速中" << endl;
    }
};

class UseNOS : public ReplaceAction {
public:
	void Action() {
        cout << "開啟氮氣加速" << endl;
    }
};

class UseAlarmSiren : public ReplaceAction {
public:
	void Action() {
        cout << "開啟警笛" << endl;
    }
};

class Car : public Common {
private:
    ReplaceAction *ac;
public:
    Car(int status)  {
        if(status == 1)
            ac = new UseNOS();
        else if(status == 2)
            ac = new UseAlarmSiren();
        else 
            ac = NULL;
    }
    ~Car() {
        delete ac;
    }
    void Action() {
        ac->Action();
    }
};

int main(void) {

    cout << "[保時捷]" << endl;
    Car PorscheCar(1);
    PorscheCar.SpeedUp();
    PorscheCar.Action();
    PorscheCar.SpeedDown();

    cout << "====================" << endl;
    
    cout << "[救護車]" << endl;
    Car AmbulanceCar(2);
    AmbulanceCar.SpeedUp();
    AmbulanceCar.Action();
    AmbulanceCar.SpeedDown();
    
    system("pause");
    return 0;
}
*/