//Chapter 1 - system
 
//引用函式庫，使用標準函式庫
#include <iostream>

//標準函式庫的命名空間
using namespace std;
 
//主函式寫法
int main(void)
{
    //送出Command命令: echo
    system("echo Executive Microsoft Paint!");
    
    //送出Command命令: start 小畫家
    system("start %windir%/system32/mspaint.exe");
    
    //在Windows系統底下，路徑可以使用雙反斜線
    //system("start %windir%\\system32\\mspaint.exe");

    //用小畫家開啟一張圖片
    //system("start %windir%\\system32\\mspaint.exe \"C:\\Users\\Public\\Pictures\\Sample Pictures\\Chrysanthemum.jpg\"");
    
    //送出Command命令: pause
    system("pause");

    //回傳終止
    return 0;
}