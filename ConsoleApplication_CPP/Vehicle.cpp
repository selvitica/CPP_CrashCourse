#include <iostream>
using namespace std;

class VehicleClass
{
//public:
private:
	string vname;
	string vcolor;
	
protected:
	bool IsRacing;
	/*Rule of encap - keep the above private and modify via functions */
	/*Polymorphism says no */

public:
	VehicleClass(string vnameF,string vcolorF) {
		//constructor to assign values to name and color
		vname = vnameF;
		vcolor = vcolorF;
	}

public:
	void GetVehicleInfo()
	{
	cout << vcolor << " " << vname << endl;
	}

	void PaintVehicle(string customColorF)
	{
		vcolor = customColorF;
	}

	void SetVehicleStatus()
	{
		IsRacing = false;
		cout << "Is Racing " << IsRacing << endl;

	}
};

//inherit from base which are public to it.
class PoliceCarClass :public VehicleClass
{

public:
	PoliceCarClass(string vnameF,string vcolorF):VehicleClass(vnameF,vcolorF)
		//instead of initiating constructor again for policecarclass, inherit the base vehicle 
	{

	}

	void SetVehicleStatus()
	{
		IsRacing = false; //shows inaccessible as these are currently private to base vehicle
		//set them to protected to be accesible in derived class
		cout << "Is Racing " << IsRacing << endl;

	}
};


//poly demo
class GetAwayCarClass :public VehicleClass
{

public:
	GetAwayCarClass(string vnameF, string vcolorF) :VehicleClass(vnameF, vcolorF)
		//instead of initiating constructor again for policecarclass, inherit the base vehicle 
	{

	}

	void SetVehicleStatus()
	{
		IsRacing = true; //shows inaccessible as these are currently private to base vehicle
		//set them to protected to be accesible in derived class
		cout << "Is Racing " << IsRacing << endl;
	}


};