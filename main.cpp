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
    Smartphone smartphone {"Galaxy A6", "Samsung", "Black", 10, 8, 128, "SnapDragon", "Android", 50000, 2015, 5, 6000, true};
    catalog.addSmartphone(smartphone);
    return catalog;
}
int main(int argc, char* argv[]) {
    Catalog catalog = InitializeCatalog();
    /*Smartphone whatBuyerLikes{"iPhone 12 Pro", "Apple", "White",
    6 , 3, 64, "Apple", "IOS", 100000, 2018, 4, 5000, true};*/
    Smartphone whatBuyerLikes{"Galaxy A6", "SamSung", "Black", 10, 8, 128, "SnapDragon", "Android", 50000, 2015, 5, 6000, true};
    Smartphone smartphone = catalog.search(whatBuyerLikes);
    smartphone.print();
    return 0;
}