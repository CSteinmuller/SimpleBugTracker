#include <iostream>
#include <fstream>
#include <string>

using namespace std;
/**
this would be so much easier with XML
*/

    struct bug{
        int bugnum;
        string bugdesc;
    }; 
int main ()
{
    string command;
    cout<<"Are we adding bugs or resolving them, please use add or resolve \n";
    cin>>command;
    string foo;
    if (command == "add")
    {
        bug newBug;
        ofstream bugfile;
        bugfile.open("buglist.txt", ios::app);
        cout<<"Please input the bug number \n";
        cin>>newBug.bugnum;
        cout<<"Please provide a description of the bug, with underscores for spaces \n";
        cin>>foo; //getline does not work here, no matter what I do despite it working in another test program
        newBug.bugdesc = foo;
        bugfile<<newBug.bugnum<<" "<<newBug.bugdesc<<"\n";
        bugfile.close();
        cout<<newBug.bugnum<<" "<<newBug.bugdesc;
        

    }
    if (command == "resolve")
    {
        //call a function 
        ifstream bugfile;
    }
    
    return 0;
   
}
