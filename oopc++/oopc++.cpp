#include<iostream>
#include <list> 
using namespace std;

    class PhoneStore {  //declaring a class 
    public: 
        string Name;
        string OwnerName;
        int CoustomerCount;
        list<string> PulishedItemsNames;
};



int main()
{
    PhoneStore  Pstore1; 
    Pstore1.Name = "wowphones";
    Pstore1.OwnerName = "Azim";
    Pstore1.CoustomerCount = 2500;
    Pstore1.PulishedItemsNames = { "Galaxy s20, s20 ultra, Iphones, ipads, accessories" };


    cout << "Name:" << Pstore1.Name<< endl;
    cout << "OwnerName:" << Pstore1.OwnerName << endl;
    cout << "CoustomerCount:" << Pstore1.CoustomerCount << endl;
    cout << "Items:" << endl;
    for (string ItemName : Pstore1.PulishedItemsNames) {
        cout << ItemName << endl;

    }
     


   

}

