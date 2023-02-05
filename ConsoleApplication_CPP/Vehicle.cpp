#include <iostream>
using namespace std;

class VehicleClass
{
//public:
private:
	string vname;
	string vcolor;
	/*Rule of encap - keep the above private and modify via functions */

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

};


