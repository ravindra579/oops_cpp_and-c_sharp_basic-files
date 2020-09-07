#include"iostream"
#include"string"
using namespace std;
class sum{
public:
    void add(int a,int b){
    cout<<a+b<<endl;
    }
    void add(double a,double b){
    cout<<a+b<<endl;
    }
};
int main(){
int a=5,b=5;
double c=5.5;
double d=5.5;
sum obj;
obj.add(a,b);
obj.add(c,d);
}

