#include"iostream"
#include"string"
using namespace std;
class rectangle{
public:
    float len,wid;
void setlength(float l){
len=l;
}
void setwidth(float w){
wid=w;
}
float parameter(){
return 2*(len+wid);
}
float area(){
return (len*wid);
}
void show(){
cout<<len<<endl<<wid<<endl;
}
int samearea(rectangle &object){
if (object.area()==this->area()){
    cout<<"s";

        return 1;
}
else
    return 0;

}
};
int main(){
rectangle obj1;
rectangle obj2;
obj1.setlength(5);
obj1.setwidth(2.5);
obj2.setlength(5);
obj2.setwidth(18.9);
cout<<obj1.parameter()<<endl;
cout<<obj1.area()<<endl;
cout<<obj2.parameter()<<endl;
cout<<obj2.area()<<endl;
cout<<obj1.samearea(obj2);
}s
