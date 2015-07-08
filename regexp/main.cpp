#include <iostream>
#include <fstream>
#include <regex> //string lib here
using namespace std;

int main(void)
{
    int i = 0;
    string line = "";
    smatch matchStr; //�ŧi�@�ӪŪ��ǰt
    const char *filePath = "fdm.cfg";
    ifstream inputFile;
    
    //�ŧi���W��F��
    regex pattern_temperature;
    regex pattern_max_fan_speed;
    regex pattern_fan_always_on;

    pattern_temperature   = "temperature = ([0-9]+)"; //�n�ǰt���ҫ�
    pattern_max_fan_speed = "max_fan_speed = ([0-9]+)";
    pattern_fan_always_on = "fan_always_on = ([0-9]+)";

    inputFile.open(filePath, ios::in);
    if(inputFile.is_open()) { //Check File
        while(inputFile.good()) { //�T�{�O�_�٦����

            getline(inputFile, line); //���o�@����

            if(regex_match(line, matchStr, pattern_temperature)) { //�ҫ����
                cout << "Temperature: "   << matchStr[1] << endl; //��ܷū�
            } else if(regex_match(line, matchStr, pattern_max_fan_speed)) {
                cout << "Max fan speed: " << matchStr[1] << endl; //��̤ܳj������t
            } else if(regex_match(line, matchStr, pattern_fan_always_on)) {
                cout << "Fan always on: " << matchStr[1] << endl; //�����O�_�Ұ�
            }
        }
        inputFile.close();
    }
    system("pause");
 
    return 0;
}