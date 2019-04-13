#include <iostream>
#include <cmath>
using namespace std;
int mult (int x1,int x2)
{
    int yushu;
    yushu=x1%x2;
    return yushu;
}
int main()
{
    cout << "下面我们来做个游戏吧，亲，请输入两个整数，看这两个数是不是成倍数关系"<<endl;
    cout << "如果成倍数关系则你获胜，不是则我获胜。" << endl;
    int x=0;
    int y=0;
    int z=0;
    cout << "亲，请输入两个整数。";
    cin >> x >> y;
    z=mult(x,y);
    if (z==0)
        cout << "恭喜你答对了";
    else
        cout << "下次努力呦";
    return 0;
}
