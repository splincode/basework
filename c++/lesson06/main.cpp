#include <iostream>
using namespace std;

class Guests {

    string name;
    string lastname;

public:

   void set(string n, string ln){
       name = n;
       lastname = ln;
   }

   string get(string opt){
       if (opt == "name") return name;
       else if(opt == "lastname") return lastname;
   }

};

int main(int argc, char *argv[]){

   Guests people[3];

   people[0].set("maxim", "ivanov");
   people[1].set("igor", "petrov");
   people[2].set("nikita", "sidorov");

   cout << "список гостей:" << endl;
   for (int i = 0; i < 3; ++i){
       cout << people[i].get("name") << " "
            << people[i].get("lastname")
            << endl;
   }



   return 0;
}
