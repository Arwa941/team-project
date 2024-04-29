#include<iostream>
using namespace std;

int main()
{
    int process;
    int flag=0;
    while(true){
    cout<<"\t\t************ school system *************"<<endl;
    cout<<"Please inter your process that you need to do"<<endl;
    cout<<"1.add student"<<endl;
    cout<<"2.delete student"<<endl;
    cout<<"3.update student"<<endl;
    cout<<"4.show student"<<endl;
    cout<<"5.exit"<<endl;
    cin>>process;
    switch(process){
        case 1:
            cout<<"add student"<<endl;
            break;
        case 2:
            cout<<"delete student"<<endl;
            break;
        case 3:
            cout<<"update student"<<endl;
            break;
        case 4:
            cout<<"show student"<<endl;
            break;
        case 5:
            cout<<"exit"<<endl;
            flag=1;
            break;
        default:
            cout<<"error"<<endl;
            break;
    }
    if(flag==1)
    {
        break;
    }

}
}