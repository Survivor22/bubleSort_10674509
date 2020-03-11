#include <iostream>

using namespace std;

int main()
{
   string name,age,pob,attached;
   int day,daycheck;

    cout << "What is your name?" << endl;

    cin>> name;

    cout << "How old are you?" << endl;

    cin >> age;

    cout << "Where were you born?" << endl;

    cin >> pob;

    cout << "Which day of the month were you born" <<endl;

    cin >> day;

    if(0>=day || day>30){

        cout<< "The date is not valid" <<endl;
    }

    else{

        daycheck = day%10 ;

        if(11< day && day< 14 || daycheck>3)

         attached ="th";

         else if(daycheck==1)

          attached = "st";

          else if(daycheck==2)

          attached = "nd";


           else if(daycheck==3)

          attached = "rd";


          cout<< "My name is " <<name<<". "<<"I am "<<age<<" years old"<<". "<<"I was born in "<<pob<<". "<<"I was born in the year "<<day<<" "<<attached<< " August,1999.";



    }






    return 0;
}
