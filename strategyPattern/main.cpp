#include <iostream>
using namespace std;

class Car {
public:
    void SpeedUp() {
        cout << "�[�t��" << endl;
    }
    void SpeedDown() {
        cout << "��t��" << endl;
    }
};

class PorscheCar : public Car { //�O�ɱ�
public:
    void UseNOS() {
        cout << "�}�Ҵ��[�t" << endl;
    };
};

class AmbulanceCar : public Car { //���@��
public:
    void UseAlarmSiren() {
        cout << "�}��ĵ��" << endl;
    };
};

int main(void) {
    
    cout << "[�O�ɱ�]" << endl;
    PorscheCar A;
    A.SpeedUp();
    A.UseNOS();
    A.SpeedDown();

    cout << "====================" << endl;
    
    cout << "[���@��]" << endl;
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
        cout << "�[�t��" << endl;
    }
    void SpeedDown() {
        cout << "��t��" << endl;
    }
};

class UseNOS : public ReplaceAction {
public:
	void Action() {
        cout << "�}�Ҵ��[�t" << endl;
    }
};

class UseAlarmSiren : public ReplaceAction {
public:
	void Action() {
        cout << "�}��ĵ��" << endl;
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

    cout << "[�O�ɱ�]" << endl;
    Car PorscheCar(1);
    PorscheCar.SpeedUp();
    PorscheCar.Action();
    PorscheCar.SpeedDown();

    cout << "====================" << endl;
    
    cout << "[���@��]" << endl;
    Car AmbulanceCar(2);
    AmbulanceCar.SpeedUp();
    AmbulanceCar.Action();
    AmbulanceCar.SpeedDown();
    
    system("pause");
    return 0;
}
*/