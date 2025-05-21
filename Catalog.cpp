#include "Catalog.h"
#include <algorithm>
#include <cctype>
void Catalog::addSmartphone(string model, string manufacturer,
    string color, double display, int ram,
    int storage, string cpu, string os, double price, int production_start,
    int cameras_amount, int battery_capacity, bool nfc)
{
    smartphones.push_back(Smartphone{ model, manufacturer,
    color, display, ram,
    storage, cpu, os, price, production_start, cameras_amount, battery_capacity, nfc } );
}

void Catalog::addSmartphone(const Smartphone& smartphone) {
    smartphones.push_back(smartphone);
}
Smartphone Catalog::getSmartphone(string model) {
    for (const Smartphone& s : smartphones) {
        if (s.getModel() == model) return s;
    } return Smartphone();
}
bool compareStrings(const string &a, const string &b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end(), [](char c1, char c2) { return std::tolower(c1) == std::tolower(c2); });
}
Smartphone Catalog::search(const Smartphone& searchSmartphone) {
    for (const Smartphone& s : smartphones) {
        string model = searchSmartphone.getModel();
        if (!model.empty() && !compareStrings(model, s.getModel())) continue;
        string manufacturer = searchSmartphone.getManufacturer();
        if (!manufacturer.empty() && !compareStrings(manufacturer, s.getManufacturer())) continue;
        string color = searchSmartphone.getColor();
        if (!color.empty() && !compareStrings(color, s.getColor())) continue;
        double display = searchSmartphone.getDisplay();
        if (display > 0 && display != s.getDisplay()) continue;
        int ram = searchSmartphone.getRAM();
        if (ram > 0 && ram != s.getRAM()) continue;
        int storage = searchSmartphone.getStorage();
        if (storage > 0 && storage != s.getStorage()) continue;
        string cpu = searchSmartphone.getCPU();
        if (!cpu.empty() && !compareStrings(cpu, s.getCPU())) continue;
        string os = searchSmartphone.getOS();
        if (!os.empty() && !compareStrings(os, s.getOS())) continue;
        double price = searchSmartphone.getPrice();
        if (price > 0 && price != s.getPrice()) continue;
        int production_start = searchSmartphone.getProductionStart();
        if (production_start > 0 && production_start != s.getProductionStart()) continue;
        int cameras_amount = searchSmartphone.getCamerasAmount();
        if (cameras_amount > 0 && cameras_amount != s.getCamerasAmount()) continue;
        int battery_capacity = searchSmartphone.getBatteryCapacity();
        if (battery_capacity > 0 && battery_capacity != s.getBatteryCapacity()) continue;
        bool nfc = searchSmartphone.getIsNFC();
        if (nfc != s.getIsNFC()) continue;
        return s;
    } return Smartphone();
}

Smartphone Catalog::search(const string& model, const string& manufacturer, double price) {
    for (const Smartphone& s : smartphones) {
        if ((model.empty() || compareStrings(model, s.getModel())) &&
            (manufacturer.empty() || compareStrings(manufacturer, s.getManufacturer())) &&
            (price <= 0 || s.getPrice() <= price)) return s;
    }
    return Smartphone();
}

vector<Smartphone> Catalog::searchByRAM(int minRAM, int maxRAM) {
    vector<Smartphone> found;
    for (const Smartphone& s : smartphones) if (s.getRAM() >= minRAM && s.getRAM() <= maxRAM) found.push_back(s);
    return found;
}
