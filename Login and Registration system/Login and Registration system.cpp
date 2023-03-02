#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct cpp
{
    string name1;
    string name;
    string pass1;
    string pass;
    int n=0;
};

void registration(vector<cpp>& cpps)
{
    cpp c;
    cout<<"Enter your username:"<<endl;
    cin>>c.name;
    cout<<endl;
    cout<<"Enter your password:"<<endl;
    cin>>c.pass;
    cout<<endl;
    cpps.push_back(c);
}

void logging(vector<cpp>& cpps)
{
    cpp c;
    cout<<"Enter your username:"<<endl;
    cin>>c.name1;
    cout<<endl;
    if(c.name1 == c.name)
    {
        cout<<"Enter your password:"<<endl;
        cin>>c.pass;
        cout<<"Re-enter your password:"<<endl;
        cin>>c.pass1;

    }
    if(c.name1 == c.name)
    {
        cout<<"user data"<<endl;
    }
    else
    {
        cout<<"username not available"<<endl;
    }
    cout<<endl;

    cpps.push_back(c);

}
int main()
{
    std::vector<cpp> cpps;
    int choice;

    do
    {
        cout<<"registration"<<endl<<"logging"<<endl;
        std::cin>>choice;
        switch(choice)
        {
        case 1:
            registration(cpps);
            break;
        case 2:
            logging(cpps);
            break;
        default:
            std::cout<<"Invalid choice\n";
        }
    }while(choice != 3);
    
return 0;
}