#include "iostream"
#include"string"
using namespace std;
class student{
private:
    int admno;
    string sname;
    float eng;
    float math;
    float science;
    float ctotal(float en,float ma,float sci){
    return ma+sci+en;
    }
public:
    void Takedata(int a,string s,float e,float sc,float m){
    admno=a;
    sname =s;
    eng=e;
    science=sc;
    math=m;
    float total=student::ctotal(eng,math,science);
    }
    void displaydata(){
    float t=student::ctotal(eng,math,science);
    cout<<admno<<endl<<sname<<endl<<eng<<endl<<science<<endl<<math<<endl<<t<<endl;
    }
};
int main()
{
    student obj;
    obj.Takedata(1099,"ravi",80,90,99);
    obj.displaydata();
    return 0;
}
