#include <iostream>
using namespace std;
 
int main(const int argc, char *argv[]) {
    /*cout << "argc: " << argc << endl;
    for(i=0;i<argc;i++) {
        cout << "*argv[" << i << "]: " << argv[i] << endl;
    }*/
    
    int i = 0;
    int length = 0;
    char **params = new char*[argc]; //�ʺA���w�ѼƭӼơA�`�٪Ŷ�
    for(i=0;i<argc;i++) {
        length = strlen(argv[i]);
        params[i] = new char[length]; //�ʺA���w�r���}�C���סA�`�٪Ŷ�
        strcpy(params[i], argv[i]);
    }

    for(i=0;i<argc;i++) {
        cout << "param[" << i << "]: " << params[i] << endl;
    }

    system("pause");
    return 0;
}