#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
/**
this would be so much easier with XML
*/

    struct bug{
        int bugnum;
        string bugdesc;
     //   bug (string desc, int k) : bugdesc(desc), bugnum(k){}
    }; 
int main ()
{
    string command;
    cout<<"Are we adding bugs or resolving them, please use add or resolve \n";
    cin>>command;
    string foo;
    bug buggy;
    if (command == "add")
    {
        bug newBug;
        ofstream bugfile;
        bugfile.open("buglist.txt", ios::app);
        cout<<"Please input the bug number \n";
        cin>>newBug.bugnum;
        cin.ignore();
        cout<<"Please provide a description of the bug, with underscores for spaces \n";
        cin>>newBug.bugdesc; 
        bugfile<<newBug.bugnum<<" "<<newBug.bugdesc<<"\n";
        bugfile.close();
        cout<<newBug.bugnum<<" "<<newBug.bugdesc;
        

    }
    if (command == "resolve")
    {

    	cout<<"Loading buglist... \n";
        ifstream bugfile;
        vector<bug> bugList;
        while (! bugfile.eof())
        {
            bugfile>>buggy.bugnum;
            bugfile.ignore();
            getline(bugfile, buggy.bugdesc);
            bugList.push_back(buggy);
        }
    }
    
    return 0;
   
}
