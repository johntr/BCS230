#include <iostream>
#include <ctime>
using namespace std;

class Elevator{

private:
    int fire_state;
    
public:
    int currentFloor;
    Elevator();
    void request(int);
    void wait(int);
    void fire(int);
    
};
int fire_state = 0;     //Initalize Fire State.
// Elevator Constructor.
Elevator::Elevator() {
    currentFloor = 1;
}
//Function to request floor.
void Elevator::request(int newFloor){
    //Check if elevator is in a normal state
    if (fire_state == 0 || fire_state == 2){
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
    //If emergency do not move elevator and warn user. 
    if (fire_state == 1) {
        cout << "Unable to call elevator due to emergencey";
    }
}
//Built in wait timer for elevator movement
void Elevator::wait(int t){
    int start = time(0), finish = 0;
    while (finish - start < t)
        finish = time(0);
}
//Enter firestate incase of emergency
void Elevator::fire(int f){
    fire_state = f;
    switch (fire_state){
case 0:
    cout << "Normal state";
    break;
case 1:
    cout << "Entered fire state " << fire_state;
    break;
case 2:
    cout << "Entered caution state " << fire_state;
    break;
    }
}
//Main program.
int main() {
    Elevator go;
    
    go.request(5);
    //go.request(3);
    go.request(3);
    go.fire(1);
    
    return 0;
    
}