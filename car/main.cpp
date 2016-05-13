#include <iostream>
#include <string>

#include "driver.h"
#include "car.h"

using namespace std;
int main(){
    Driver *d = new Driver("Ms. POp Diva");
    cout << "Our driver is, " << d->getName()
        <<"!" << endl;
        
        {
            Car car(d);
            cout << car.whosDriving() << "!!" << endl;
        }
        
        cout << "lone survivor: " << d->getName() << endl;
    delete d;
}