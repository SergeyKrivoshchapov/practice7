#include "Smartphone.h"

#include <iostream>
#include <bits/ostream.tcc>

Smartphone::Smartphone() {
    this->model = "";
    this->price = 0;
    this->manufacturer = "";
    this->color = "";
    this->display = 0;
    this->ram = 0;
    this->storage = 0;
    this->cpu = "";
    this->os = "";
    this->production_start = 0;
    this->cameras_amount = 0;
    this->battery_capacity = 0;
    this->nfc = false;
}
Smartphone::Smartphone(string model, string manufacturer,
                       string color, double display, int ram,
                       int storage, string cpu, string os, double price,
                       int production_start, int cameras_amount, int battery_capacity, bool nfc) {
    this->model = model;
    this->manufacturer = manufacturer;
    this->color = color;
    if (display < 6) {
        cout << "Incorrect display value" << endl;
        this->display = 0;
    } else {
        this->display = display;
    }
    if (ram < 2) {
        cout << "Incorrect ram value" << endl;
        this->ram = 0;
    } else {
        this->ram = ram;
    }
    if (storage < 8) {
        cout << "Incorrect storage value" << endl;
        this->storage = 0;
    } else {
        this->storage = storage;
    }
    this->cpu = cpu;
    this->os = os;
    if (price < 4000) {
        cout << "Incorrect price value" << endl;
        this->price = 0;
    } else {
        this->price = price;
    }
    if (production_start < 1994) {
        cout << "Incorrect production start value" << endl;
        this->production_start = 0;
    } else {
        this->production_start = production_start;
    }
    if (cameras_amount < 0) {
        cout << "Incorrect cameras amount" << endl;
        this->cameras_amount = 0;
    } else {
        this->cameras_amount = cameras_amount;
    }
    if (battery_capacity < 4000) {
        cout << "Incorrect battery capacity value" << endl;
        this->battery_capacity = 0;
    } else {
        this->battery_capacity = battery_capacity;
    }
    this->nfc = nfc;

}

void Smartphone::print() const {
    if (model.empty()) {
        cout << "Sorry, we have nothing for you." << endl;
        return;
    }

    cout << "You might like this: ";
    cout << manufacturer << " " << model << endl;
    cout << "Price: " << price << endl;
    cout << "Color: " << color << endl;
    cout << "Display: " << display << endl;
    cout << "OS: " << os << endl;
    cout << ram << "Gb RAM, " << storage << " GB storage" << endl;
    cout << "CPU: " << cpu << endl;
    cout << "Production start year: " << production_start << endl;
    cout << "Cameras amount: " << cameras_amount << endl;
    cout << "Battery capacity: " << battery_capacity << endl;
    cout << "NFC: " << (nfc ? "Yes" : "No") << endl;
}

string Smartphone::getOS() const {return os;}

string Smartphone::getModel() const {return model;}

string Smartphone::getManufacturer() const {return manufacturer;}

string Smartphone::getColor() const {return color;}

double Smartphone::getDisplay() const {return display;}

int Smartphone::getRAM() const {return ram;}

int Smartphone::getStorage() const {return storage;}

string Smartphone::getCPU() const {return cpu;}

double Smartphone::getPrice() const {return price;}

int Smartphone::getProductionStart() const {return production_start;}

int Smartphone::getCamerasAmount() const {return cameras_amount;}

int Smartphone::getBatteryCapacity() const {return battery_capacity;}

bool Smartphone::getIsNFC() const {return nfc;}

void Smartphone::setPrice(double price) {
    if (price < 4000) {
        cout << "Incorrect price value" << endl;
        this->price = 0;
    } else {
        this->price = price;
    }
}

