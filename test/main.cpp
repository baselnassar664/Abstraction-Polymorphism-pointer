

#include<iostream>
using namespace std;
class Vehicle{
private:
     string Vehicle_model;
     string Registration_number;
     int  Vehicle_speed;
     double Fuel_capacity;
     double  Fuel_consumption;
 public:
    Vehicle(string Vehicle_model,string Registration_number,int Vehicle_speed,double Fuel_capacity,double Fuel_consumption){
     Vehicle::Vehicle_model=Vehicle_model;
      Vehicle::Registration_number=Registration_number;
      Vehicle::Vehicle_speed=Vehicle_speed;;
      Vehicle::Fuel_capacity=Fuel_capacity;
      Vehicle::Fuel_consumption=Fuel_consumption;
    }
     void setVehicle_model(string Vehicle_model){
     Vehicle::Vehicle_model=Vehicle_model;
     }
     void setRegistration_number(string Registration_number){
     Vehicle::Registration_number=Registration_number;
     }
     void setVehicle_speed(int Vehicle_speed){
     Vehicle::Vehicle_speed=Vehicle_speed;
     }
       void setFuel_capacity(double Fuel_capacity){
     Vehicle::Fuel_capacity=Fuel_capacity;
     }
       void setFuel_consumption(double Fuel_consumption){
     Vehicle::Fuel_consumption=Fuel_consumption;
     }
     string getVehicle_model(){
      return Vehicle_model;
     };
      string getRegistration_number(){
      return Registration_number;
     };
        int getVehicle_speed(){
      return Vehicle_speed;
     };
     double getFuel_capacity(){
      return Fuel_capacity;
     }
     double getFuel_consumption(){
      return Fuel_consumption;
     }
    virtual  void display()=0;
};

class Truck:public Vehicle{
private:
    double CargoWeightlimit;
public:
   Truck(string Vehicle_model,string Registration_number,int Vehicle_speed,double Fuel_capacity,double Fuel_consumption,double CargoWeightlimit):
       Vehicle(Vehicle_model,Registration_number,Vehicle_speed,Fuel_capacity,Fuel_consumption){
     Truck::CargoWeightlimit=CargoWeightlimit;
    }
     void setCargoWeightLimit(double CargoWeightlimit){
     Truck:: CargoWeightlimit=CargoWeightlimit;
     }
     double getCargoWeightLimit(){
      return CargoWeightlimit;
     }
     void display(){
          cout<<"Vehicle_model:"<<getVehicle_model()<<endl;
          cout<<"Registration_number:"<<getRegistration_number()<<endl;
          cout<<"Vehicle_speed:"<<getVehicle_speed()<<endl;
          cout<<"Fuel_capacity:"<<getFuel_capacity()<<(getFuel_capacity() >1 ? "liters":"liter")<<endl;
          cout<<"Fuel_consumption:"<<getFuel_consumption()<<endl;
          cout<<"CargoWeightlimit:"<<getCargoWeightLimit()<<(getCargoWeightLimit()>1 ? "kilograms":"kilogram")<<endl;
     }
};
class  Bus :public Vehicle{
private:
    int Num_of_passengers;
public:
    Bus(string Vehicle_model,string Registration_number,int Vehicle_speed,double Fuel_capacity,double Fuel_consumption, int Num_of_passengers):
       Vehicle(Vehicle_model,Registration_number,Vehicle_speed,Fuel_capacity,Fuel_consumption){
     Bus::Num_of_passengers=Num_of_passengers;
    }
       void setNumofpassengers( int Num_of_passengers){
     Bus::Num_of_passengers=Num_of_passengers;
     }
     int getNumofpassengers(){
      return Num_of_passengers;
     }
      void display(){
          cout<<"Vehicle_model:"<<getVehicle_model()<<endl;
          cout<<"Registration_number:"<<getRegistration_number()<<endl;
          cout<<"Vehicle_speed:"<<getVehicle_speed()<<endl;
          cout<<"Fuel_capacity:"<<getFuel_capacity()<<(getFuel_capacity() >1 ? "liters":"liter")<<endl;
          cout<<"Fuel_consumption:"<<getFuel_consumption()<<endl;
          cout<<"Num_of_passengers:"<<getNumofpassengers()<<(getNumofpassengers()>1 ? "passengers":"passengers")<<endl;
     }
};
int main() {
    cout<<"Info Of Truck:"<<endl;
    Vehicle* v=new Truck("Truck","165415",50,60,1,500);
   v->display();
    cout<<endl;
    cout<<"Info Of Bus:"<<endl;
       v=new Bus("Truck","165415",50,60,1,500);
     v->display();
}



