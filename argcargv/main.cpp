#include <iostream>
#include <fstream> //ifstream
#include <string> //getline
using namespace std;
 
int main(const int argc, char *argv[]) //��o�~���Ѽ�
{
    int i = 0;
    ifstream inputFile;
    string lines = "";

    //�~���Ѽ�
    cout << "argc: " << argc << endl;
    for(i=0;i<argc;i++) {
        cout << "*argv[" << i << "]: " << argv[i] << endl;
    }


    cout << "Read File ------------------------------------------------" << endl;
    //��Ԥ覡Ū����r��
    if(argc>1) {
        inputFile.open(argv[1], ios::in);
        if(inputFile.is_open()) {
            while(inputFile.good()) {
                getline(inputFile, lines);
                cout << lines << endl;
            }
            inputFile.close();
        }
    }
 
    system("pause");
    return 0;
}