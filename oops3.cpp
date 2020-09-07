#include"iostream"
#include"string"
using namespace std;
class test{
private:
    int testcode;
    string description;
    int nocan;
    int cenreq;
    float calcen(){
    return nocan/100+1;
    }
public:
    float t;
    void schedule(){
    cin>>testcode>>description>>nocan;
    t=test::calcen();
    }
    void disptest(){
    cout<<testcode<<endl<<description<<endl<<nocan<<endl<<cenreq<<endl<<t<<endl;
    }


};
int main(){
test obj;
obj.schedule();
obj.disptest();
return 0;
}
