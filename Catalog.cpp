#include "Catalog.h"
void Catalog::addSmartphone(string model, string manufacturer,
string color, string display, string ram,
string storage, string cpu, string os, double price, int production_start,
int cameras_amount, int battery_capacity, bool nfc) {
    smartphones.push_back(Smartphone{ model, manufacturer,
    color, display, ram,
    storage, cpu, os, price, production_start, cameras_amount, battery_capacity, nfc } );
}
Smartphone Catalog::getSmartphone(string model) {
    for (Smartphone s : smartphones) {
        if (s.getModel() == model) return s;
    } return Smartphone();
}
Smartphone Catalog::search(const Smartphone& searchSmartphone) {
    for (Smartphone s : smartphones) {
        string model = searchSmartphone.getModel();
        if (!model.empty() && model != s.getModel()) continue;
        string manufacturer = searchSmartphone.getManufacturer();
        if (!manufacturer.empty() && manufacturer != s.getManufacturer()) continue;
        string color = searchSmartphone.getColor();
        if (!color.empty() && color != s.getColor()) continue;
        string display = searchSmartphone.getDisplay();
        if (!display.empty() && display != s.getDisplay()) continue;
        string ram = searchSmartphone.getRAM();
        if (!ram.empty() && ram != s.getRAM()) continue;
        string storage = searchSmartphone.getStorage();
        if (!storage.empty() && storage != s.getStorage()) continue;
        string cpu = searchSmartphone.getCPU();
        if (!cpu.empty() && cpu != s.getCPU()) continue;
        string os = searchSmartphone.getOS();
        if (!os.empty() && os != s.getOS()) continue;
        return s;
    } return Smartphone();
}