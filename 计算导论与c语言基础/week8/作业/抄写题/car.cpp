#include<iostream>
using namespace std;
int main()
{
    int best;
//用best枚举最好的车
    for(best =1;best <= 4;best++)
    {
// a b c d记录四位专家的话
        bool a=(best==2);
        bool b=(best==4);
        bool c=!(best==3);
        bool d=!b;
        if(a+b+c+d !=1)
        continue;
        else//需要添加
        cout << best << endl;
//输出判断正确的专家
        if ( a == 1)
            cout << "A" << endl;
        else if ( b == 1)
            cout << "B" << endl;
        else  if ( c == 1)
            cout << "C" << endl;
        else
            cout << "D" << endl;
    }
    return 0;
}
    
