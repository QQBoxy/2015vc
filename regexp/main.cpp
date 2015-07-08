#include <iostream>
#include <fstream>
#include <regex> //string lib here
using namespace std;

int main(void)
{
    int i = 0;
    string line = "";
    smatch matchStr; //宣告一個空的匹配
    const char *filePath = "fdm.cfg";
    ifstream inputFile;
    
    //宣告正規表達式
    regex pattern_temperature;
    regex pattern_max_fan_speed;
    regex pattern_fan_always_on;

    pattern_temperature   = "temperature = ([0-9]+)"; //要匹配的模型
    pattern_max_fan_speed = "max_fan_speed = ([0-9]+)";
    pattern_fan_always_on = "fan_always_on = ([0-9]+)";

    inputFile.open(filePath, ios::in);
    if(inputFile.is_open()) { //Check File
        while(inputFile.good()) { //確認是否還有資料

            getline(inputFile, line); //取得一行資料

            if(regex_match(line, matchStr, pattern_temperature)) { //模型比對
                cout << "Temperature: "   << matchStr[1] << endl; //顯示溫度
            } else if(regex_match(line, matchStr, pattern_max_fan_speed)) {
                cout << "Max fan speed: " << matchStr[1] << endl; //顯示最大風扇轉速
            } else if(regex_match(line, matchStr, pattern_fan_always_on)) {
                cout << "Fan always on: " << matchStr[1] << endl; //風扇是否啟動
            }
        }
        inputFile.close();
    }
    system("pause");
 
    return 0;
}