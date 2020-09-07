#include"iostream"
#include"string"
using namespace std;
class test{
private:
    int flight;
    string destination;
    float dist;
    float fuel;
    float calfuel(){
    if(dist<=1000)
        fuel=500;
    else if(1000<dist>=2000)
        fuel=1100;
    else
        fuel=2200;
    }
public:
    float t;
    void feedinfo(){
    cin>>flight>>destination>>dist;
    fuel=test::calfuel();
    }
    void showinfo(){
    cout<<flight<<endl<<destination<<endl<<dist<<endl<<fuel<<endl;
    }


};
int main(){
test obj;
obj.feedinfo();
obj.showinfo();
return 0;
}
