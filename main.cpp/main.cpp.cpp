#include <iostream>
#include "headers/ElectricKettle.h"
#include "headers/Book.h"
#include "headers/Phone.h"
#include "headers/GelPen.h"

using namespace std;

int main() {
    //создаем объекты классов
    ElectricKettle kettle("Philips", 1500, 2200, "Белый", false);
    Book book("1984", "Джордж Оруэлл", 328, "Дистопия", false);
    Phone phone("Apple", "iPhone 14", 75, "Черный", false);
    GelPen pen("Pilot", "Синий", 0.7, true, true);
    Banknote banknote(500, "гривен", "Украина", "AB12345678", true);

    //рабочие примеры
    kettle.displayInfo();
    kettle.turnOn();
    kettle.boilWater();
    kettle.turnOff();

    book.displayInfo();
    book.openBook();
    book.readPage();
    book.closeBook();

    phone.displayInfo();
    phone.turnOn();
    phone.makeCall("+380501234567");
    phone.chargePhone();

    pen.displayInfo();
    pen.removeCap();
    pen.write();
    pen.putCapOn();

    banknote.displayInfo();
    banknote.checkAuthenticity();
    banknote.useForPayment();
    banknote.markAsFake();
    banknote.checkAuthenticity();

    return 0;
}
