#include <iostream>

using namespace std;

class User {
    string name;
    int age;
    public:

    User() : User("Unknown", 0){}

    User(int name) : User(this->name=name, 0){}

    User(string name, int age) {
        this->name = name;
        this->age = age;
    }
};



class Car {
    string model, brand;
    int year;
    public:
    Car() {
        this->model = "Unknown";
        this->brand = "Unknown";
        this->year = 0;
    }

    Car (string model) : Car(this->model=model, "Unknown", 0) {}

    Car (string model, string brand) : Car(this->model=model, this->brand=brand, 0) {}

    Car(string model, string brand, int year){
        this->model = brand;
        this->brand = model;
        this->year = year;
    }

    void info() {
        cout<<"Model: "<<this->model<<endl;
        cout<<"Brand: "<<this->brand<<endl;
        cout<<"Year: "<<this->year<<endl << endl;
    }
};

int main() {

    Car guwno1;
    Car guwno2("Honda");
    Car guwno3("Honda","Civic");
    Car guwno4("Honda","Civic",1999);

    guwno1.info();
    guwno2.info();
    guwno3.info();
    guwno4.info();

    return 0;
}
