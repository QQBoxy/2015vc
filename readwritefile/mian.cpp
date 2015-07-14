#include <iostream>
#include <fstream> //ofstream、ifstream
#include <string>
 
using namespace std;

int main(void)
{
    int i = 0, j = 0;
    int mode = 0;
    const char *filePath = "math.xls";
    
    ofstream outputFile;
    ifstream inputFile;
    string lines = "";
    
    FILE *writeFile;
    FILE *readFile;
    char line[100] = "";
    
    while(1) {
        cout << "[1]C++ write\n[2]C++ read\n[3]C write\n[4]C read\n[0]Exit\nInput Number:";
        cin >> mode;
        
        if(mode == 0) break; //跳出迴圈
        
        switch(mode) {
            case 1: //VC++ Write File
                outputFile.open(filePath, ios::trunc);
                if(outputFile.is_open()) { //Check File
                    for(j=1;j<10;j++) {
                        for(i=1;i<10;i++) {
                            outputFile << i << "*" << j << "=" << i*j << "\t";
                        }
                        outputFile << endl;
                    }
                    outputFile.close();
                }
                break;
            case 2: //VC++ Read File
                inputFile.open(filePath, ios::in); //
                if(inputFile.is_open()) { //Check File
                    while(inputFile.good()) { //確認是否還有資料
                        getline(inputFile, lines); //取得一行字串
                        cout << lines << endl;
                    }
                    inputFile.close();
                }
                break;
            case 3: //C Write File
                writeFile = fopen(filePath, "w");
                if(writeFile) { //Check File
                    for(j=1;j<10;j++) {
                        for(i=1;i<10;i++) {
                            fprintf(writeFile, "%d*%d=%d\t", i, j, i*j);
                        }
                        fprintf(writeFile, "\n");
                    }
                    fclose(writeFile);
                }
                break;
            case 4: //C Read File
                readFile = fopen(filePath, "r");
                if(readFile) { //Check File
                    while(fgets(line, sizeof(line), readFile)) {
                        printf("%s", line);
                    }
                    fclose(readFile);
                }
                break;
            default:
                cout << "您所輸入的，不是功能，是寂寞..." << endl;
                break;
        }
    }
    
    cout << "Exit" << endl;
    system("pause");
    return 0;
}