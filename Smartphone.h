#pragma once
#include <string>
using namespace std;
class Smartphone {
private:
    string model, manufacturer, color, cpu, os;
    double display, price;
    int production_start, cameras_amount, battery_capacity, ram, storage;
    bool nfc;
public:
    Smartphone();
    Smartphone(string model,  string manufacturer,
               string color, double display, int ram,
               int storage, string cpu, string os, double price,
               int production_start, int cameras_amount, int battery_capacity,
               bool nfc);

    void print() const;
    string getOS() const;
    string getModel() const;
    string getManufacturer() const;
    string getColor() const;
    double getDisplay() const;
    int getRAM() const;
    int getStorage() const;
    string getCPU() const;
    double getPrice() const;
    int getProductionStart() const;
    int getCamerasAmount() const;
    int getBatteryCapacity() const;
    bool getIsNFC() const;
    void setPrice(double price);
};