#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ 
    int day;
    int total;
    int primogems;
    int initial;
    int wishs;
    bool again = true;
    string choice;
    while(again){
        const int daily = 150;

        cout << "Input how many days you will log-in: " << endl;
        cin >> day;
        total = day * daily;

        cout << "You will earn " << total << " primogems" << endl;
        cout << "Input how many primogems you have currently:" << endl;

        cin >> initial;
        primogems = total + initial;

        cout << "Adding predicted amount of primos to your current primos, you will have around " << primogems << " primogems in total" << endl;
        wishs = primogems / 160;

        cout << "You will have " << wishs << " wishes" << endl;
        cout << "Do you want to try this again?" << "\n" << endl;
        cout << "Type in yes or no" << endl;
        cin >> choice;

        if(choice == "yes"){
        //if type in yes, you will do the process again
            again = true;
        }
        else if(choice == "no"){
        //if typed in no it will end the program
            again = false;
        }else{
            cout << "Invalid statement. Please type again" << "\n" << endl;
            cin >> choice;
        }
    }
    return 0;

}