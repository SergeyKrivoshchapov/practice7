#include "Smartphone.h"
Smartphone::Smartphone() {
    this->model = "";
    this->price = 0;
    this->manufacturer = "";
    this->color = "";
    this->display = "";
    this->ram = "";
    this->storage = "";
    this->cpu = "";
    this->os = "";
    this->production_start = 0;
    this->cameras_amount = 0;
    this->battery_capacity = 0;
    this->nfc = nfc;
}
Smartphone::Smartphone(string model, string manufacturer,
string color, string display, string ram,
string storage, string cpu, string os, double price,
int production_start, int cameras_amount, int battery_capacity, bool nfc) {
    this->model = model;
    this->manufacturer = manufacturer;
    this->color = color;
    this->display = display;
    this->ram = ram;
    this->storage = storage;
    this->cpu = cpu;
    this->os = os;
    this->price = price;
    this->production_start = production_start;
    this->cameras_amount = cameras_amount;
    this->battery_capacity = battery_capacity;
    this->nfc = nfc;

}
string Smartphone::getModel() const {return model;}

string Smartphone::getManufacturer() const {return manufacturer;}

string Smartphone::getColor() const {return color;}

string Smartphone::getDisplay() const {return display;}

string Smartphone::getRAM() const {return ram;}

string Smartphone::getStorage() const {return storage;}

string Smartphone::getCPU() const {return cpu;}

string Smartphone::getOS() const {return os;}

double Smartphone::getPrice() const {return price;}

int Smartphone::getProductionStart() const {return production_start;}

int Smartphone::getCamerasAmount() const {return cameras_amount;}

int Smartphone::getBatteryCapacity() const {return battery_capacity;}

bool Smartphone::getIsNFC() const {return nfc;}

void Smartphone::setPrice(double price) {this->price = price;}

