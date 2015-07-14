#include <iostream>
#include <fstream> //ofstream�Bifstream
#include <string>
using namespace std;

int main(void) {
    int i = 0, j = 0;
    int mode = 0;
    int number = 0;
    const char *filePath = "number.binary";
    unsigned long ulcount = 10; //10�����
    
    ofstream outputFile;
    ifstream inputFile;
    
    FILE *writeFile;
    FILE *readFile;
    char header[81];
    
    while(1) {
        cout << "[1]C++ write\n[2]C++ read\n[3]C write\n[4]C read\n[0]Exit\nInput Number:";
        cin >> mode;
        
        if(mode == 0) break; //���X�j��
        
        switch(mode) {
            case 1: //VC++ Write File
                outputFile.open(filePath, ios::trunc | ios::binary);
                if(outputFile.is_open()) { //Check File
                    outputFile.seekp(80, ios::beg); //���L���Y80�Ӧr�� //UINT8
                    outputFile.write((char*)&ulcount, sizeof(unsigned long)); //�g�J�ƶq //UINT32
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
                    inputFile.seekg(80, ios::beg); //���L���Y80�Ӧr�� //UINT8
                    inputFile.read((char*)&ulcount, sizeof(unsigned long)); //Ū���ƶq //UINT32
                    cout << ulcount << endl;
                    while(1) { //�T�{�O�_�٦����
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
                    fseek(writeFile, 80, SEEK_SET); //���L���Y80�Ӧr�� //UINT8
                    fwrite(&ulcount, 4, 1, writeFile); //Ū���ƶq //UINT32
                    for(i=0;i<10;i++) {
                        fwrite(&i, 4, 1, writeFile);
                    }
                    fclose(writeFile);
                }
                break;
            case 4: //C Read File
                readFile = fopen(filePath, "rb");
                if(readFile) { //Check File
                    fseek(readFile, 80, SEEK_SET); //���L���Y80�Ӧr�� //UINT8
                    fread(&ulcount, 4, 1, readFile); //Ū���ƶq //UINT32
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
                cout << "�z�ҿ�J���A���O�\��A�O�I��..." << endl;
                break;
        }
    }
    
    cout << "Exit" << endl;
    system("pause");
    return 0;
}