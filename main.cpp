#include"Smartphone.h"
#include"Catalog.h"
#include<iostream>
using namespace std;
/*
Catalog InitializeCatalog() {
    Catalog catalog;
    catalog.addSmartphone("iPhone 12 Pro", "Apple", "White",
    6, 3, 64, "Apple", "iOS", 100000, 2018, 4, 5000, true);
    return catalog;
}
*/
Catalog InitializeCatalog() {
    Catalog catalog;
    Smartphone smartphone1 {"Galaxy A6", "Samsung", "Black", 10, 8, 128, "SnapDragon", "Android", 15000, 2015, 5, 6000, true};
    catalog.addSmartphone(smartphone1);
    Smartphone smartphone2 {"Galaxy A8", "Samsung", "White", 12, 10, 256, "SnapDragon", "Android", 17000, 2016, 3, 6000, true};
    catalog.addSmartphone(smartphone2);
    return catalog;
}
int main(int argc, char* argv[]) {
    Catalog catalog = InitializeCatalog();
    /*Smartphone whatBuyerLikes{"iPhone 12 Pro", "Apple", "White",
    6 , 3, 64, "Apple", "IOS", 100000, 2018, 4, 5000, true};*/
    //Smartphone whatBuyerLikes{"Galaxy A6", "SamSung", "Black", 10, 8, 128, "SnapDragon", "Android", 50000, 2015, 5, 6000, true};
    //Smartphone smartphone = catalog.search("Galaxy A6", "Samsung", 20000);
    vector<Smartphone> foundPhones = catalog.searchByRAM(4,10);
    for (const Smartphone currPhone : foundPhones) currPhone.print();
    return 0;
}