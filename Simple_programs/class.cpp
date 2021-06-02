#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;
using std::vector;
class Apple;
class MyClass {
private:
    int *data;
    int Size;
public:
    MyClass(int size) {
        this->Size = size;
        this->data = new int[size];
        cout << "\tВызвался конструктор  " << this <<  endl;
        for(int i = 0; i < size; i++) {
            data[i] = i;
        }
    }
    MyClass(const MyClass &other)  {
        this->Size = other.Size;
        this->data = new int[other.Size];
        for(int i = 0; i < other.Size; i++) {
            this->data[i] = other.data[i];
        }
        cout << "\tВызвался конструктор копирования" << this << endl; 
    }
    MyClass &operator = (const MyClass &other) {
        cout << "\tВызвался оператор присваивания" << endl;
        this->Size = other.Size;
        if (this->data != nullptr) {
            delete[] this->data;
        }
        for(int i = 0; i < other.Size; i++) {
            this->data[i] = other.data[i];
        }
        return *this;
    }

    ~MyClass() {
        cout << "\tВызвался деструктор " << this << endl;
        delete[] data;
    }
};

class Human {
private:
    int age;
    string sex;
    string name;
public:
    Human(string name) {
        this->name = name;
        this->age = 0;
        this->sex = "unknown";
    }
    Human(string name, int age) : Human(name) { // Делегирующий конструктор
        this->name = name;
        this->age = age;
        this->sex = "unknown";
    }
    Human(string name, int age, string sex) : Human(name, age) {
        this->name = name;
        this->age = age;
        this->sex = sex;
    }
    void TakeApple(Apple &apple);
    void SetInfo(int setAge, string setSex, string setName) {
        age = setAge;
        sex = setSex;
        name = setName;
    }
    void GetInfo() {
        cout << "Age:\t" << age << "\nSex:\t" << sex << "\nName:\t" << name << endl;
    }
};

class Point {
private:
    int x;
    int y;
public:
    Point(int valueX, int valueY) {
        x = valueX;
        y = valueY;
    }
    // void SetX(int x) {
    //     this->x = x;
    // }
    int GetX() {
        return x;
    }
    // void SetY(int x) {
    //     this->x = x;
    // }
    int GetY() {
        return y;
    }
    Point() {
        x = 0;
        y = 0;
        cout << this << endl;
    }

    bool operator ==(const Point &other) {
        return this->x == other.x && this->y == other.y;
    }
    bool operator !=(const Point &other) {
        return !(this->x == other.x || this->y == other.y);
    }
    Point operator +(const Point &other) {
        Point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }
    Point &operator ++() {
        this->x++;
        this->y++;
        return *this;
    }
    Point &operator ++(int value) {
        Point temp(*this);
        this->x++;
        this->y++;
        return temp;
    }
};

class CoffeGrinder {
private:
    bool CheckVoltage() {
        return false;
    }
public:
    void Start() {
        bool voltage = CheckVoltage();
        if(CheckVoltage()) {
        cout << "*******" << endl;
        }
        else {
            cout << "!!!!!!!!!" << endl;
        }
    }
};

class TestClass { 
private:
    int arr[5] = {0, 1, 2, 3, 4};

public:
    int & operator[](int index) {
        return arr[index];
    }
};

class Apple {
private:
    friend Human;
    int weight;
    string color;
    int id;
    static int count;
public:
    static int GetCount() {
        return count;
    }
    Apple(int weight, string color) {
        cout << "Вызван конструктор" << endl;
        this->weight = weight;
        this->color = color;
        ++count;
        id = count;
    }
    static void ChangeColor(Apple &apple, string color) {
        apple.color = color;
    }
    ~Apple() {
        cout << "Вызван деструктор" << endl;
        --count;
    }
};

class Image {
private:
    class Pixel {
    private:
        int r;
        int g;
        int b;
    public:
        Pixel(int r, int g, int b) {
            this->r = r;
            this->g = g;
            this->b = b;
        }
        string GetInfo() {
            return "R = " + to_string(r) + "G = " + to_string(g) + "B = " + to_string(b);
        }
    };
    static const int LENGHT = 5;
    Pixel pixels[LENGHT] {Pixel(4, 1, 99), Pixel(56, 3, 253), \
    Pixel(98, 6, 223), Pixel(21, 56, 43), Pixel(23, 66, 77) };

public:
    void GetInfo() {
        for(int i = 0; i < LENGHT; i++) {
            cout << "Pixel #" << i + 1 << " " << pixels[i].GetInfo() << endl;
        }
    }
};

int Apple::count = 0;

class Cap {
private:
    string color = "RED";
public:
    string GetColor() {
        return color;
    }
};
class Model {
public:
    void PutOn() {
        cout << "Надета кепка " << cap.GetColor() << " цвета." << endl;
    }
private:
    Cap cap;
};

class Weapon { // Абстрактный класс
public:
    virtual void Shoot() = 0; // Объявление чисто виртуальной функции
};

class Gun : public Weapon {
public:
    void Shoot() override {
        cout << "Bang!" << endl;
    }
};

class SubmachineGun : public Gun {
public:
    void Shoot() override {
        cout << "Bang! Bang! Bang!" << endl;
    }
};

class Bazooka : public Weapon {
public:
    void Shoot() override {
        cout << "BOOOM!!!" << endl;
    }
};

class Knife : public Weapon {
public:
    void Shoot() override {
        cout << "Silent hit..." << endl;
    }
};

class Player {
public:
    void Shoot(Weapon *weapon) {
        weapon->Shoot();
    }
};

class Msg {
private:
    string msg;
public: 
    Msg(string msg) {
        this->msg = msg;
    }
    virtual string GetMsg() {

        return msg;
    }
};

class Printer {
public:
    void Print(Msg * msg) {
        cout << msg->GetMsg() << endl;
    }

};

class BracketMsg : public Msg {
public:
    BracketMsg(string msg) : Msg(msg) {

    }
    string GetMsg() override {
        return "[" + Msg::GetMsg() + "]";
    }
};

class Car {
public:
    Car() {
        cout << "Car" << endl;
    }
    ~Car() {
        cout << "~Car" << endl;
    }
    void Drive() {
        cout << "Едет." << endl;
    }
};

class Airplane {
public:
    Airplane() {
        cout << "Airplane" << endl;
    }
    ~Airplane() {
        cout << "~Airplane" << endl;
    }
    void Fly() {
        cout << "Летит." << endl;

    }
};

class FlyingCar : public Car, public Airplane {
public:
    FlyingCar() {
        cout << "FlyingCar" << endl;
    }
    ~FlyingCar() {
        cout << "~FlyingCar" << endl;
    }
};

class IBicycle {
public:
    virtual void TwistTheWheel() = 0;
    virtual void Ride() = 0;
};

class Bycicle : public IBicycle {
public:
    void TwistTheWheel() override {
        cout << "Bycicle TwistTheWeel()" << endl;
    }
    void Ride() override {
        cout << "Bycicle Ride()" << endl;
    }
};

class SportBycicle : public IBicycle {
public:
    void TwistTheWheel() override {
        cout << "SportBycicle TwistTheWeel()" << endl;
    }
    void Ride() override {
        cout << "SportBycicle Ride()" << endl;
    }
};

class Man {
public:
    void Think() {
        brain.Think();
    }
    void PutOn() {
        cout << "Надета кепка " << cap.GetColor() << " цвета." << endl;
    }
    void RideOn(IBicycle &bicycle) {
        bicycle.TwistTheWheel();
        cout << "Кручу руль." << endl;
        bicycle.Ride();
        cout << "Велосипед едет." << endl;
    }
private:
    class Brain {
    public:
        void Think() {
            cout << "Мозг думает" << endl;
        }
    };
    Cap cap;
    Brain brain;
};

class Component {
protected:
    string companyName;
public:
    Component(string companyName) {
        cout << "Конструктор Componient" << endl;
        this->companyName = companyName;
    };
};

class GPU : public Component {
public:
    GPU(string companyName) : Component(companyName) {
        cout << "Конструктор GPU" << endl;
    }
};

class RAM : public Component {
public:
    RAM(string companyName) : Component(companyName) {
        cout << "Конструктор RAM" << endl;
    }
};

class GraphicCard : public GPU, public RAM {
public:
    GraphicCard(string GPUcompanyName, string RAMcompanyName) : GPU(GPUcompanyName), RAM(RAMcompanyName) {
        cout << "конструктор GraphicCard" << endl;
    }
};

class Character {
protected:
    int HP;
public:
    Character() {
        cout << "Конструктор Character" << endl;
    }

};

class Orc : virtual public  Character {
public:
    Orc() {
        cout << "Конструктор Orc" << endl;
    }
};
class Warrior : virtual public Character {
public:
    Warrior() {
        cout << "Конструктор Warrior" << endl;
    }
};
class OrcWarrior : public Orc, public Warrior {
public:
    OrcWarrior() {
        cout << "Конструктор OrcWarrior" << endl;
    }
};
int main() { 
    setlocale(LC_ALL, "russian");
    //GraphicCard gc("AMD", "Samsung");
    OrcWarrior ow;
    return 0;
}
void Human::TakeApple(Apple &apple) {
    cout << this << " TakeApple " << " " <<  apple.weight << " " << apple.color << endl;
}
