#include <iostream>
#include <vector>
using namespace std;

class Point2D {
public:
    Point2D() {
        this->x = 0;
        this->y = 0;
    }
public:
    int x;
    int y;
};

class Point3D : public Point2D {
public:
    Point3D() { 
        this->z = 0;
    }
public:
    int z;
};

int main(int argc, char* argv[]) {

    Point3D newpoint;
    
    newpoint.x = 1;
    newpoint.y = 2;
    newpoint.z = 3;
    
    cout << newpoint.x << ", " << newpoint.y << ", " << newpoint.z << endl;

    system("pause");
    return 0;
}