#include"iostream"
#include"string"
using namespace std;
class batsman{
private:
    int bcode=1000;
    char bname[20]="ravi";
    int innings=10,notout=1,runs=20000;
    float batavg;
    void calcavg(){
    batavg=runs/(innings-notout);
    }
public:
    void readdata(){
    bcode;
    bname;
    innings;
    notout;
    runs;
    batavg;
    batsman::calcavg();
    }
    void displaydata(){
    cout<<bcode<<endl<<bname<<endl<<innings<<endl<<notout<<endl<<runs<<endl<<batavg<<endl;
    }


};
int main(){
batsman obj;
obj.readdata();
obj.displaydata();
return 0;
}
