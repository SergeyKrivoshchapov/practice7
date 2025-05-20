#pragma once
#include <string>
using namespace std;
class Smartphone {
private:
    string model, manufacturer, color, display, ram, storage, cpu, os;
    double price;
    int production_start, cameras_amount, battery_capacity;
    bool nfc;
public:
    Smartphone();
    Smartphone(string model,  string manufacturer,
               string color, string display, string ram,
               string storage, string cpu, string os, double price,
               int production_start, int cameras_amount, int battery_capacity,
               bool nfc);

    string getOS() const;
    string getModel() const;
    string getManufacturer() const;
    string getColor() const;
    string getDisplay() const;
    string getRAM() const;
    string getStorage() const;
    string getCPU() const;
    double getPrice() const;
    int getProductionStart() const;
    int getCamerasAmount() const;
    int getBatteryCapacity() const;
    bool getIsNFC() const;
    void setPrice(double price);
};