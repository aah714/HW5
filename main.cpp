#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <deque>
#include "MyList.cpp"

using namespace std;

struct Profile
{
    string fullname;
    string state;
    bool operator==( Profile rhs)
    {if (fullname==rhs.fullname) return true; return false; }

    bool operator!=(Profile rhs)
    {if (fullname!=rhs.fullname) return true; return false; }

};

ostream& operator<< (ostream &out, Profile &user)
{
    out << user.fullname<<"--" <<user.state;
    return out;
}

bool searchDeque(deque<Profile> &pq, Profile &president);

int main() {
    Profile pQueue; //create a Profile queue called pQueue;
    Profile pDeque; //create a Profile deque called pDeque;
    Profile temp;
    string line;
    MyList<Profile> pMyList;
/*this part is just informative. If you wanna practice how sstream and getline works
    string test = "truck	car";
    string token;
    stringstream ss(test);
    getline(ss, token, '\t');
    cout<<token<<endl;
    getline(ss, token, '\t');
    cout<<token<<endl;
*/

    //let's practice file I/O
    ifstream file("presidentsWstates.txt");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, temp.fullname, '\t');
            getline(ss, temp.state, '\t');
            pMyList.insertHead(temp);                //use push for your queue to insert president Profiles.
            pMyList.deleteHead();                            //use push_front for your deque to insert president Profiles

        }
    }

    cout<<"Printing queue members by using pop and front***********************"<<endl;
//use a while loop by using front and pop function to both empty and print your President profiles.




    cout<<"Printing deque members with iterator***********************"<<endl;
//use an iterator print your President profiles.
    deque<Profile>::iterator dIter;





//use a for loop which works with indices to print your President profiles.
    cout<<"Printing deque members with indices***********************"<<endl;


//Uncomment below to when you have your search function ready
/*
temp.fullname = "Gerald R. Ford";
if(searchDeque(pDeque, temp))
  cout<<"found:"<<temp<<endl;
else
  cout<<"not found: "<<temp<<endl;
*/
    return 0;
}

bool searchDeque( deque<Profile> &pq,   Profile &president)
{
    return 0;
}



