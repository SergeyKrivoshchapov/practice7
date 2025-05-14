#pragma once
#include<string>
#include<vector>
#include"Smartphone.h"
using namespace std;
class Catalog {
private:
    vector<Smartphone> smartphones;
public:
    void addSmartphone(string model, string manufacturer,
    string color, string display, string ram,
    string storage, string cpu, string os, double price,
    int production_start, int cameras_amount, int battery_capacity, bool nfc);
    Smartphone getSmartphone(string model);
    Smartphone search(const Smartphone& searchSmartphone);
};


