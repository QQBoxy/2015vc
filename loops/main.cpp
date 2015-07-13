//Chapter 1 - advanced loop
#include <iostream>
using namespace std;
 
int main(void)
{
    int i = 0;
    int n[10] = {10,20,30,40,50,60,70,80,90,100};

    //驗票才給上車
    cout << "while:" << endl;
    i = 0;
    while(i<10) { //改成i<0會發生什麼事?
        cout << i << endl;
        i++;
    }

    //先上車後補票
    cout << "\ndo while:" << endl;
    i = 0;
    do {
        cout << i << endl;
        i++;
    } while(i<10); //改成i<0會發生什麼事?

    cout << "\n[com] for:" << endl;
    //給電腦看的時候常這樣用
    for(i=0;i<10;i++) {
        cout << i+1 << ". " << n[i] << endl;
    }
    
    cout << "\n[human] for:" << endl;
    //給人看的時候常這樣用
    for(i=1;i<=10;i++) {
        cout << i << ". " << n[i-1] << endl;
    }

    system("pause");
    return 0;
}