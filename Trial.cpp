#include<bits/stdc++.h>
using namespace std;
class Main{
    private:
    int num;
    public:
        void set_num(int n){
            num=n;

        
        }
        void show_num(void){
            cout<<"The number is "<<num<<endl;
        }
};
int main(){
    
    Main obj;
    obj.set_num(10);
    obj.show_num();
    return 0;
}