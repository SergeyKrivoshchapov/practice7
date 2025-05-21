#pragma once
#include<string>
#include<list>
#include <vector>

#include"Smartphone.h"
using namespace std;
class Catalog {
private:
    list<Smartphone> smartphones;
public:
    void addSmartphone(string model, string manufacturer,
    string color, double display, int ram,
    int storage, string cpu, string os, double price, int production_start,
    int cameras_amount, int battery_capacity, bool nfc);
    void addSmartphone(const Smartphone& smartphone);
    Smartphone getSmartphone(string model);
    Smartphone search(const Smartphone& searchSmartphone);
    Smartphone search(const string& model, const string& manufacturer, double price);
    vector <Smartphone> searchByRAM(int minRAM, int maxRAM);
};


