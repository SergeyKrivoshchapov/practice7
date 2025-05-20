#include"Smartphone.h"
#include"Catalog.h"
#include<iostream>
using namespace std;
Catalog InitializeCatalog() {
    Catalog catalog;
    catalog.addSmartphone("iPhone 12 Pro", "Apple", "White",
    "6", "3", "64", "Apple", "iOS", 100000, 2018, 4, 52, true);
    return catalog;
}
int main(int argc, char* argv[]) {
    Catalog catalog = InitializeCatalog();
    Smartphone whatBuyerLikes{"iPhone 12 Pro", "Apple", "White",
    "6" , "3", "64", "Apple", "iOS", 100000, 2018, 4, 52, true};
    Smartphone smartphone = catalog.search(whatBuyerLikes);
    if (smartphone.getModel() != "") {
        cout << "You might like this: ";
        cout << smartphone.getManufacturer() << " ";
        cout << smartphone.getModel() << endl;
        cout << "Price: " << smartphone.getPrice() << endl;
        cout << "Color: " << smartphone.getColor() << endl;
        cout << "Display: " << smartphone.getDisplay() << endl;
        cout << "OS: " << smartphone.getOS() << endl;
        cout << smartphone.getRAM() << "Gb RAM, " << smartphone.getStorage()
        << " GB storage" << endl;
        cout << "CPU: " << smartphone.getCPU() << endl;
        cout << "Production start year: " << smartphone.getProductionStart() << endl;
        cout << "Cameras amount: " << smartphone.getCamerasAmount() << endl;
        cout << "Battery capacity: " << smartphone.getBatteryCapacity() << endl;
        cout << "NFC: " << (smartphone.getIsNFC() ? "Yes" : "No") << endl;
    }
    else cout << "Sorry, we have nothing for you.";
    return 0;
}