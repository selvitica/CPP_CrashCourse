// ConsoleApplication_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2-4-2023

using namespace std; //scope to std

#include <iostream>
#include "Vehicle.cpp"

//enum int 0-running ?
enum class PlayerModes {running,walking,swimmming,idle};


float AddDamageFunc(float damage);

void AddDamageDefault(float damage, float hitBoost=rand()%100); //two digit random num as default param //add bounds if needed

void Gun9mmReload(int* gun9mmBulletReload); // integer pointer 

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
   /* switch (pm)
    {
    case PlayerModes::running: cout << "running state ";
        break;
    case walking:
        break;
    case swimmming:
        break;
    case PlayerModes::idle:cout << "idle state ";
        break;
    default:
        break;
    }*/



    int counter = 10;
  /*  while (counter>0)
    {
        cout << counter << endl;
        counter = counter - 1;
    }*/


  /*  do
    {
        cout << counter << endl;
        counter = counter - 1;
    } while (counter>0);            set or do something, then work with loop*/



 /*   for (int i = 0; i <=2; i++)
    {
        cout <<weapon[i] <<"\n";
    }*/


//functions def goes above and declartion after!
    //float retDamage = AddDamageFunc(21.21);
    //cout << "Current Damage: " << retDamage;
    //AddDamageDefault(1000); //doesn't matter value send to func


//var pointers (^_^)
    /*
    srand(time(NULL));  //one bad way to generate random --seed change to prevent same output
    int gun9mmBulletReload = rand()%10;
    
    cout << gun9mmBulletReload <<" " << &gun9mmBulletReload<<endl;

    Gun9mmReload(&gun9mmBulletReload); //pass value using & 
    cout << gun9mmBulletReload << " " << &gun9mmBulletReload<<endl;
    */


//array pointers (^_^)
    //int numarry[] = { 1, 2, 3, 4, 5 };
    //int* numarrpointer;
    //numarrpointer = numarry; //point to 1st loc //proof that array has continous mem alloc
    //cout << *numarrpointer << endl << *numarrpointer++;


 //class
    //use extensions to create class faster
  /*
  VehicleClass maruti;
  maruti.vname = "alto";
  maruti.vcolor = "violet";
  cout << maruti.vcolor << " " << maruti.vname<<endl;

  VehicleClass audi;
  audi.vname = "R8";
  audi.vcolor = "silver";
  cout << audi.vcolor << " " << audi.vname << endl;
 */

//constructor to assign values on obj construction 
    VehicleClass bmw("z3","blue");
  //  cout << bmw.vcolor << " " << bmw.vname << endl;
   /* bmw.GetVehicleInfo();
    bmw.PaintVehicle("green");
    bmw.GetVehicleInfo();*/

    //PoliceCarClass fiat( "punto", "blue");
    //
    //fiat.PaintVehicle("punto_red");
    //fiat.GetVehicleInfo();


//polymorphism a.k.a tonnivasm

    GetAwayCarClass Policebmw("m3", "white");
    Policebmw.SetVehicleStatus();
    
//class ptr

    PoliceCarClass pc1("pc1","blue"); //dervied class obj
    VehicleClass* gw1 =&pc1; //baseclass ptr to pc1
    gw1->GetVehicleInfo(); //-> operator to access
    

    




 //system("pause>0");
 //getchar();
 return 0;
 /*  shell redirection
     Discards the standard output of the "pause" command,
     making the program execution wait until the user presses any key without displaying any message.
    */


} //main ending

float AddDamageFunc(float damage)
{
    return damage-10;
}

void AddDamageDefault(float damage, float hitBoost)
{
    cout << hitBoost;
    //throw gcnew System::NotImplementedException();
}

void Gun9mmReload(int* gun9mmBulletReload)
{
    //de-ref (*  )
     
    (*gun9mmBulletReload) = 13;

    //throw gcnew System::NotImplementedException();
}
