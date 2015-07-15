#include <iostream>
#include <vector>
using namespace std;

class P {
public:
    void set(int id);
    long int get() {
        return this->id;
    };

public:
    int x;
    int y;
    int z;

private:
    long int id;
};

void P::set(int id) {
    this->id = id;
};

int main(int argc, char* argv[]) {

    int i = 0;
    P temp;
    vector<P> arr;

    i = 0;
    while(1) {
        cout << " Input X Y Z :";
        cin >> temp.x >> temp.y >> temp.z;
        if(temp.x!=0 && temp.y!=0 && temp.z!=0) {
            //temp.id = i; //Wrong!!
            temp.set(i);
            arr.push_back(temp);
        } else {
            break;
        }
        i++;
    }

    for(i=0;i<arr.size();i++) {
        //cout << "[" << temp.id << "]"; //Wrong!!
        cout << "[" << arr[i].get() << "]";
        cout << "( " << arr[i].x << ", " << arr[i].y << ", " << arr[i].z << " )" << endl;
    }
    
    system("pause");
    return 0;
}

