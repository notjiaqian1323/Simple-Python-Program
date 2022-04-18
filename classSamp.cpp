#include <iostream>
using namespace std;
class YourName{
    public:
    string name;
    int age;
    string classes;
    string hobby;
    string place;
    int medal;
    void dosurvey(){
        cout<<"What is your hobby?\nAnswer: ";
        cin>>hobby;
        cout<<"\nWhere do you live?\nAnswer: ";
        cin>>place;
        cout<<"\nHow many awards have you achieved?\nAnswer: ";
        cin>>medal;
    }
};
class ShowName:public YourName{
    public:
        ShowName(string nam,string classs,int agee){
            name=nam;
            classes=classs;
            age=agee;
            cout<<"Name: "<<nam<<endl;
            cout<<"Age: "<<agee<<endl;
            cout<<"Class: "<<classs<<endl;
            cout<<"\n\n\nThe Form start from here...\n\n\n";
        }
        void showresult(){
            cout<<"Result: Your name is "<<name<<", your age is "<<age<<" and you are studying in "<<classes<<".\n\n----------------------------------------------------------------------------\n\n";
            cout<<"What we know is you like "<<hobby<<", you live in "<<place<<" and you have won "<<medal<<" awards since you are young\n\n\nCongratulations, you have passed the test!";
        }
        ~ShowName(){
            cout<<"\n\n\nThe Form ended here!\n\n\n";
        }
};
int main(){
    ShowName me("Wo Jia Qian","6RUM2",18);
    me.dosurvey();
    me.showresult();
}