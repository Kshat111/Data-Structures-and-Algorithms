#include<iostream>
using namespace std;
class box{
    public:
    int a;
    int b;
    void operator+ (box &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"Output: "<<value2-value1<<endl;
    }
};
int main(){
    box obj1,obj2;
    obj1.a=6;
    obj2.a=10;
    obj1+obj2;
}