// ConsoleApplication_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2-4-2023

using namespace std; //scope to std

#include <iostream>

int main()
{
   // std::
    cout << "send it !\n";
    

    const int level = 1;
    int age = 42;
    float weight = 56; //double for more precision
    char gender = 'M';
    string user = "input_user";
    bool isCollActive = true;

    string weapon[] = { "dagger", "sword", "tomahawk" }; //address/memory is continously allocated for `weapon`
    //cout << weapon[-1]; //addr violation
   /* cin>>weapon[0];
    cout<<weapon[0];*/

    if (isCollActive)
    {
        cout << "collision is active";
        
    }
    else
    {
        cout << "reset collision";
    }






 system("pause>0");
 /*  shell redirection
     Discards the standard output of the "pause" command,
     making the program execution wait until the user presses any key without displaying any message.
    */


} //main ending