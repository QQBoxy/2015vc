//Chapter 1 - system
 
//�ޥΨ禡�w�A�ϥμзǨ禡�w
#include <iostream>

//�зǨ禡�w���R�W�Ŷ�
using namespace std;
 
//�D�禡�g�k
int main(void)
{
    //�e�XCommand�R�O: echo
    system("echo Executive Microsoft Paint!");
    
    //�e�XCommand�R�O: start �p�e�a
    system("start %windir%/system32/mspaint.exe");
    
    //�bWindows�t�Ω��U�A���|�i�H�ϥ����ϱ׽u
    //system("start %windir%\\system32\\mspaint.exe");

    //�Τp�e�a�}�Ҥ@�i�Ϥ�
    //system("start %windir%\\system32\\mspaint.exe \"C:\\Users\\Public\\Pictures\\Sample Pictures\\Chrysanthemum.jpg\"");
    
    //�e�XCommand�R�O: pause
    system("pause");

    //�^�ǲפ�
    return 0;
}