/*Amphibious Vehicle System*/
#include <bits/stdc++.h>
using namespace std;
class LandVehicle
{
public :
    void landInfo()
    {
        cout<<"This Vehicel can travle on land"<<endl;
    }
};
class WaterVehicle
{

public:
    void waterIfo()
    {
        cout <<"This Vehicel can travel on water."<<endl;
    }
};
class AmphibiousVehicle : public LandVehicle,public WaterVehicle
{
public:
    void displayVehicleType()
    {
        cout<<"Vehicle Type:Amphibious Vehicle"<<endl;
    }
};
int main()
{
    AmphibiousVehicle av;
    av.displayVehicleType();
    av.landInfo();
    av.waterIfo();

    return 0;
}
