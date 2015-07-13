#include <iostream>
#include <iomanip>
using namespace std;
 
int main(void)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    int scores[5][5] = {
        {99, 100, 85, 93, 65},
        {98, 95,  72, 63, 75},
        {97, 100, 93, 80, 95},
        {80, 85,  95, 70, 85},
        {66, 43,  75, 35, 87}
    };
    float average = 0.0;
    char items[5][10] = {"QQBoxy", "CCUBoxy", "CodeBoxy", "FoodBoxy", "ToolBoxy"};

    for(i=0;i<5;i++) {
        cout << setw(2)  << i + 1;
        cout << setw(10) << items[i];

        sum = 0;
        for(j=0;j<5;j++) {
            cout << setw(4) << scores[i][j];
            sum += items[i][j];
        }
        average = sum / 5.0;

        cout << " |" << dec << setw(4) << sum;
        cout << " |" << fixed << setw(5) << setprecision(1) << average << endl;
    }

    system("pause");
    return 0;
}