#include <iostream>
using namespace std;

const int No = 1000; //最大迭代次數
const double tolerance = 0.00001; //容許誤差值
const double minimal = 0; //左邊界值
const double maximal = 1; //右邊界值

double equation(double);
double determine(double, double, double=equation(minimal), int=0);

int main(void) {
    cout << "Best P: " << scientific << determine(0, 1) << endl;
    system("pause");
    return 0;
}

//determine(左邊界點a, 右邊界點b, 目前最佳解, 迭代次數)
double determine(double a, double b, double fa, int n) {
    double p = 0;
    double fp = 0;
    
    p = a+(b-a)/2; //新的中點P
    fp = equation(p); //代入新的P值求解
    
    cout << dec << n << '\t' << scientific << p << '\t' << fixed << abs(fp) << endl;
    
    //(剛好找到最佳解 或 到達誤差容許) 或 迭代次數已滿
    if(( fp==0 || (b-a)/2 < tolerance ) || n >= No) {
        return p;
    }
    
    //判斷兩點是否不同
    return (fa*fp>0) ? determine(p, b, fp, n+1) : determine(a, p, fa, n+1);
}

double equation(double x) {
    return x - 1/pow(2.0, x);
}

/*double equation(double x) {
    return pow(x, 4)-2*pow(x, 3)-4*pow(x, 2)-4*x+4;
}*/