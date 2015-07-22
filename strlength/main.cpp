#include <iostream>
using namespace std;
 
int main(const int argc, char *argv[]) {
    /*cout << "argc: " << argc << endl;
    for(i=0;i<argc;i++) {
        cout << "*argv[" << i << "]: " << argv[i] << endl;
    }*/
    
    int i = 0;
    int length = 0;
    char **params = new char*[argc]; //動態給定參數個數，節省空間
    for(i=0;i<argc;i++) {
        length = strlen(argv[i]);
        params[i] = new char[length]; //動態給定字元陣列長度，節省空間
        strcpy(params[i], argv[i]);
    }

    for(i=0;i<argc;i++) {
        cout << "param[" << i << "]: " << params[i] << endl;
    }

    system("pause");
    return 0;
}