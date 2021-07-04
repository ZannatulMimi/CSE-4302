#include<bits/stdc++.h>
using namespace std;

class Calculator{
private:
    int val;
public:
    Calculator():val(0){}
    Calculator(int value):val(value){}
    int getValue(){
        return val;
    }
    void setValue(int a){
        val=a;
    }
    void add(int Value){
        val+=Value;
    }
    void subtract(int Value){
        val-=Value;
    }
    void multiply(int Value){
        val*=Value;
    }
    void divideby(int Value){
        if(Value=0){
            cout << "Divide by 0 is undefined\n";
            return;
        }
        val/=Value;
    }
    void clear(){
        cout << "Calculator object is destroyed.";
        delete this;
    }
    void display(){
        cout << "Calculator display: " << val << '\n';
    }
    ~Calculator(){}
};
int main()
{
    Calculator a;
    a.add(10);
    a.display();
    a.clear();
}






