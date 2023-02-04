// ConsoleApplication_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2-4-2023

using namespace std; //scope to std

#include <iostream>

//enum int 0-running ?
enum class PlayerModes {running,walking,swimmming,idle};



int main()
{
   // std::
    cout << "send it !\n";
    

    const int level = 1;
    int age = 42;
    float weight = 56; //double for more precision
    char gender = 'M';
    string user = "input_user";
    bool isCollActive = false;
    bool isPlayerActive = false;

    string weapon[] = { "dagger", "sword", "tomahawk" }; //address/memory is continously allocated for `weapon`
    //cout << weapon[-1]; //addr violation
   /* cin>>weapon[0];     cout<<weapon[0];*/

    if (isCollActive && isPlayerActive)
    {
        cout << "collision & player is active"<<endl;
        
    }
    else if(isCollActive && !isPlayerActive)
    {
        cout << "Only collision active";
    }

    //Prefer enum class over enum to prevent pollution in the global namespace.

    PlayerModes pm = PlayerModes::idle;
    switch (pm)
    {
    case PlayerModes::running: cout << "running state ";
        break;
    /*case walking:
        break;
    case swimmming:
        break;*/
    case PlayerModes::idle:cout << "idle state ";
        break;
    default:
        break;
    }





 system("pause>0");
 /*  shell redirection
     Discards the standard output of the "pause" command,
     making the program execution wait until the user presses any key without displaying any message.
    */


} //main ending