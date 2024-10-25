#include <bits/stdc++.h>
//IchBinSpark
using namespace std;
class Abstraction
{
private:
    int a, b;

public:
    void set(int x, int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main(){
    Abstraction object;
    object.set(20,40);
    object.show();

    return 0;
}