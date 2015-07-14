#include <iostream>
#include <fstream> //ofstream、ifstream
#include <string>
using namespace std;

int main(void) {
    int i = 0, j = 0;
    int mode = 0;
    int number = 0;
    const char *filePath = "number.binary";
    unsigned long ulcount = 10; //10筆資料
    
    ofstream outputFile;
    ifstream inputFile;
    
    FILE *writeFile;
    FILE *readFile;
    char header[81];
    
    while(1) {
        cout << "[1]C++ write\n[2]C++ read\n[3]C write\n[4]C read\n[0]Exit\nInput Number:";
        cin >> mode;
        
        if(mode == 0) break; //跳出迴圈
        
        switch(mode) {
            case 1: //VC++ Write File
                outputFile.open(filePath, ios::trunc | ios::binary);
                if(outputFile.is_open()) { //Check File
                    outputFile.seekp(80, ios::beg); //跳過標頭80個字元 //UINT8
                    outputFile.write((char*)&ulcount, sizeof(unsigned long)); //寫入數量 //UINT32
                    for(i=0;i<ulcount;i++) {
                        //outputFile.write(reinterpret_cast<char*>(&i), sizeof(int));
                        outputFile.write((char*)&i, sizeof(int));
                    }
                    outputFile.close();
                }
                break;
            case 2: //VC++ Read File
                inputFile.open(filePath, ios::in | ios::binary);
                if(inputFile.is_open()) { //Check File
                    inputFile.seekg(80, ios::beg); //跳過標頭80個字元 //UINT8
                    inputFile.read((char*)&ulcount, sizeof(unsigned long)); //讀取數量 //UINT32
                    cout << ulcount << endl;
                    while(1) { //確認是否還有資料
                        inputFile.read((char*)&number, sizeof(int));
                        if(inputFile.good()) {
                            cout << number << endl;
                        } else {
                            break;
                        }
                    }
                    inputFile.close();
                }
                break;
            case 3: //C Write File
                writeFile = fopen(filePath, "wb");
                if(writeFile) { //Check File
                    fseek(writeFile, 80, SEEK_SET); //跳過標頭80個字元 //UINT8
                    fwrite(&ulcount, 4, 1, writeFile); //讀取數量 //UINT32
                    for(i=0;i<10;i++) {
                        fwrite(&i, 4, 1, writeFile);
                    }
                    fclose(writeFile);
                }
                break;
            case 4: //C Read File
                readFile = fopen(filePath, "rb");
                if(readFile) { //Check File
                    fseek(readFile, 80, SEEK_SET); //跳過標頭80個字元 //UINT8
                    fread(&ulcount, 4, 1, readFile); //讀取數量 //UINT32
                    cout << ulcount << endl;
                    while(1) {
                        fread(&number, 4, 1, readFile);
                        if(!feof(readFile)) {
                            printf("%d\n", number);
                        } else {
                            break;
                        }
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