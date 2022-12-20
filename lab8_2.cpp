#include<iostream>
#include<string>
using namespace std;
int main(){
    string name,movie,day,quote;
    int stdID=0;
    int std1 = stdID, n2 = stdID;

    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout<<"?????: ";
    getline(cin,name);
    cout<<"Fahsai: Wow!!! "<<name<<" is a really cool name.\n";
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout<<name<<": ";
    cin>>stdID;
    cin.ignore();
    while(stdID){
        n2=std1;
        std1=stdID;
        stdID /= 10;
        }
    cout<<"Fahsai: I think you may be GEAR "<<n2-12<<". I have a free movie ticket for you.\n";
    cout<<"Fahsai: Let's go to the cinema together!!!\n";
    cout<<"Fahsai: What movie do you want to watch?\n";
    cout<<name<<": ";
    getline(cin,movie);
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<name<<": ";
    getline(cin,day);
    cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";
    cout<<name<<": ";
    getline(cin,quote);
    cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/";
    return 0;


}