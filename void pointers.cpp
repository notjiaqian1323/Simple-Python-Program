#include <iostream>
using namespace std;

void printPtr(void* ptr, char type){
    switch (type)
    {
    case 'i':
        cout <<"The value of integer transferred: "<<*((int*)ptr)<<endl;
        break;
    case 's':
        cout <<"The value of string transferred: "<<*((string*)ptr)<<endl;
        break;
    case 'd':
        cout <<"The value of double transferred: "<<*((double*)ptr)<<endl;
        break;
    case 'c':
        cout <<"The value of char transferred: "<<((char*)ptr)<<endl;
        break;
    default:
        break;
    }
}


int main(){
    string names[6];
    cout<<names<<endl;
    cout<<*names<<endl;
    for(int i=0;i<6;i++){
        cout<<"Enter your "<<i+1<<"st element: ";
        cin>>names[i];
    }
    cout<<"\n\n\n";
    for(int j=0;j<6;j++){
        cout<<"The "<<j+1<<"st element is: "<<*(names+j)<<endl;
    }
}