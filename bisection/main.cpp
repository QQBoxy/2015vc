#include <iostream>
using namespace std;

const int No = 1000; //�̤j���N����
const double tolerance = 0.00001; //�e�\�~�t��
const double minimal = 0; //����ɭ�
const double maximal = 1; //�k��ɭ�

double equation(double);
double determine(double, double, double=equation(minimal), int=0);

int main(void) {
    cout << "Best P: " << scientific << determine(0, 1) << endl;
    system("pause");
    return 0;
}

//determine(������Ia, �k����Ib, �ثe�̨θ�, ���N����)
double determine(double a, double b, double fa, int n) {
    double p = 0;
    double fp = 0;
    
    p = a+(b-a)/2; //�s�����IP
    fp = equation(p); //�N�J�s��P�ȨD��
    
    cout << dec << n << '\t' << scientific << p << '\t' << fixed << abs(fp) << endl;
    
    //(��n���̨θ� �� ��F�~�t�e�\) �� ���N���Ƥw��
    if(( fp==0 || (b-a)/2 < tolerance ) || n >= No) {
        return p;
    }
    
    //�P�_���I�O�_���P
    return (fa*fp>0) ? determine(p, b, fp, n+1) : determine(a, p, fa, n+1);
}

double equation(double x) {
    return x - 1/pow(2.0, x);
}

/*double equation(double x) {
    return pow(x, 4)-2*pow(x, 3)-4*pow(x, 2)-4*x+4;
}*/