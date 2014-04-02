/*
A class invariant is a condition that defines all valid states for an object. 
It is a logical condition to ensure the correct working of a class. 
Class invariants must hold when an object is created, and they must be preserved under all operations of the class. 
In particular all class invariants are both preconditions and post-conditions for all operations or member functions of the class.

The conditions that have to be met for a condition to be an invariant of the class are:
=> The condition should hold at the end of every constructor.
=> The condition should hold at the end of every mutator (non-const) operation.


A major concern of a class design is to get an object into a well defined state (initialization/construction), to maintain a well defined state as operations are performed, and finally to destroy the object gracefully. The property that makes the state of an object well-defined is called its invariant.
Thus, the purpose of initialization is to put an object into a state for which the invariant holds. Typically, this is done by a constructor. Each operation on a class can assume it will find the invariant true on entry and must leave the invariant true on exit. The destructor finally invalidates the invariant by destroying the object.

*/


#include <iostream>

using namespace std;

const int PressureOverflow = 1;
const int PressureUnderflow = 2;

const int MIN_PRESSURE = 30;
const int MAX_PRESSURE = 100;

class Pressure
{
public:
    Pressure();

    void setPressure(int p);
    void displayPressure(void) const;
private:
    int pressureMonitor; // invarient!
};

Pressure::Pressure()
{
    this->pressureMonitor = 30;
}

void Pressure::setPressure(int p)
{
    try {
        if (p < MIN_PRESSURE)
            throw PressureUnderflow;
        if (p > MAX_PRESSURE) 
            throw PressureOverflow;
        this->pressureMonitor = p;  
    }
    catch(int pError) {
        switch(pError)
        {
            case PressureUnderflow:
                pressureMonitor = MIN_PRESSURE;
                cerr << "ERROR: Pressure should be between " 
                    << MIN_PRESSURE << " and "
                    << MAX_PRESSURE << " - Value set to "
                    << pressureMonitor << endl;
                break;
            case PressureOverflow:
                pressureMonitor = MAX_PRESSURE;
               cerr << "ERROR: Pressure should be between " 
                    << MIN_PRESSURE << " and "
                    << MAX_PRESSURE << " - Value set to "
                    << pressureMonitor << endl;
                break;
            default:
                break;
        }
    }
}

void Pressure::displayPressure(void) const 
{
    cout << "Current Pressure set to " << this->pressureMonitor << endl;
}

int main(int argc, char const *argv[])
{
    Pressure p;
    int x = 0;
    while(1) 
    {
        p.displayPressure();
        cout << "Enter new Pressure:";
        cin >> x;
        p.setPressure(x);
    }
    return 0;
}