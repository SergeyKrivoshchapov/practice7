#include"Smartphone.h"
#include"Catalog.h"
#include<iostream>
using namespace std;
Catalog InitializeCatalog() {
    Catalog catalog;
    catalog.addSmartphone("iPhone 12 Pro", "Apple", "White",
    6, 3, 64, "Apple", "iOS", 100000, 2018, 4, 5000, true);
    return catalog;
}
int main(int argc, char* argv[]) {
    Catalog catalog = InitializeCatalog();
    Smartphone whatBuyerLikes{"iPhone 12 Pro", "Apple", "White",
    6 , 3, 64, "Apple", "IOS", 100000, 2018, 4, 5000, true};
    Smartphone smartphone = catalog.search(whatBuyerLikes);
    smartphone.print();
    return 0;
}