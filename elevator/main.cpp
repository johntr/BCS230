#include <iostream>
#include <ctime>
using namespace std;

class Elevator{

private:
    
    
public:
    int currentFloor;
    Elevator();
    void request(int);
    void wait(int);
    
};

Elevator::Elevator() {
    currentFloor = 1;
}


void Elevator::request(int newFloor){
    
    if(newFloor == currentFloor){
        wait(5);
        cout << "waiting another 5 seconds on floor " << currentFloor <<endl;
    }
    else if(newFloor > currentFloor){
        cout << "starting at  floor " << currentFloor << endl;
        while (newFloor > currentFloor) {
            currentFloor ++;
            cout << "Going up now to floor ";
            wait(2);
            cout << currentFloor << endl;
            
            }
        cout << "Stopped at floor " << currentFloor << endl;
        wait(2);
       }
    //going down
    else if (newFloor < currentFloor){
        cout << "starting at  floor " << currentFloor << endl;
        while (newFloor < currentFloor) {
            currentFloor --;
            cout << "Going down to floor ";
            wait(2);
            cout << currentFloor << endl;
            
        }
        cout << "Stopped at floor " << currentFloor << endl;
        wait(2);
    }
}

void Elevator::wait(int t){
    int start = time(0), finish = 0;
    while (finish - start < t)
        finish = time(0);
}

int main() {
    Elevator go;
    
    go.request(5);
    go.request(3);
    go.request(3);
    
    return 0;
    
}