#include <iostream>
using namespace std;

int main(){
    bool home = true;
    int temp = 79;
    if(home == false){
        cout << "System idle. No one is home" << endl;
    }
     if(home == true && temp > 75){
        cout << "Activate cooling system" << endl;
    }
     if(home == true && temp < 65){
        cout << "Activate heating system" << endl;
    }
     if(home == true && 65 <= temp <= 75){
        cout << "Temperature is stable. System standby" << endl;
    }







    string username;
    int password;
    cout << "Enter a username" << endl;
    cin >> username;
    cout << "Enter a password" << endl;
    cin >> password;
   if(username == "admin" && password == 1234){
    cout << "Access Granted" << endl;
   }
   else{
    cout << "Access Denied" << endl;
   }

   bool tuesday = true;
   int age;
   cout << "Enter your age: " << endl;
   cin >> age;
   if(age <= 12 || tuesday == true){
    cout << "You qualify for a free pass at the arcade!" << endl;
   }
  else{
    cout << "You do not qualify for a free pass..." << endl;
  }

   return 0;

} 
