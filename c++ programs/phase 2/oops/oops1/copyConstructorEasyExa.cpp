#include <iostream>
using namespace std;

class exa {
public:
    int* data;

    exa(int val) {
        data = new int(val);
    }

    // Default copy constructor = shallow copy  --> this->data = temp.data;

    // // my own deep copy constructor

    // exa(exa &temp){

    //     int* d = new int(*(temp.data));
    //     this->data = d;
        
    // }


    void display() {
        cout << "Value: " << *data << ", Address: " << data << endl;
    }

    void updateData(int n){
        *data = n;
    }
};

int main() {
    exa obj1(10);
    exa obj2 = obj1;

    obj1.display();
    obj2.display();

    cout<<endl<<" -- after update obj2 -- "<<endl;

    obj2.updateData(20);

    obj1.display();
    obj2.display();

    return 0;
}
