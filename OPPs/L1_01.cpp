#include<iostream>
using namespace std;

class animal{
    private:
    int weight;

    public:
    //state or proportion
    int age;
    string type;
    string name;

    // default constructor
    animal(){
        this->age = 0;
        this->weight = 0;
        this->type = "";
        cout<<"Constructor called"<<endl;
    }

    // parameterized constructor
    
    animal(int age){
        this->age = age;
        cout<<"Parameterized Constructor called"<<endl;
    }

    animal(int age, int weight){
        this->age = age;
        this->weight = weight;
        cout<<"Parameterized Constructor 2 called"<<endl;
    }

    animal(int age, int weight, string type){
        this->age = age;
        this->weight = weight;
        this->type = type;
        cout<<"Parameterized Constructor 3 called"<<endl;
    }

    // copy constructor
    animal(animal &obj){     // must be to pass obj by reference &.
        this->age = obj.age;
        this->weight = obj.weight;
        this->type = obj.type;
        cout<<"I am inside copy construtor"<<endl;
    }


    // behavior
    void eat(){
        cout<<"Eating"<<endl;

    }

    void sleep(){
        cout<<"Sleeping"<<endl;

    }

    int getWeight(){
        return weight;
    }

    void setWeight(int weight){
        this->weight = weight;
    }

    void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->type<<endl;
    }

    ~animal(){
        cout<<"I am inside destructor"<<endl;
    }
};

int main(){
    // // cout<<"Size of the empty class is: "<<sizeof(animal);

    // // object creation

    // // static
    // animal lion;
    // lion.age = 12;
    // lion.name = "Ankur";

    // cout<<"Age of Lion is : "<<lion.age<<endl;
    // cout<<"Name of Lion is : "<<lion.name<<endl;

    // lion.eat();
    // lion.sleep();

    // // to private members
    // lion.setWeight(50);
    // cout<<"weight of lion: "<<lion.getWeight()<<endl;
    
    // //dynamic
    // animal* tiger = new animal;
    // (*tiger).age = 13;
    // (*tiger).name = "tugu";
    // (*tiger).type = "jungly";


    // tiger -> age = 13;
    // tiger->name = "tugu";
    // tiger->type = "jungly";

    // cout<<tiger->age<<endl;
    // cout<<tiger->name<<endl;
    // cout<<tiger->type<<endl;

    // tiger->eat();
    // tiger->sleep();

    // animal a(5,8,"hazari"); // this will show only those constructor in which equal parameters are called
    // animal* b = new animal(5,3);

    // animal c = a;
    // animal animal1(c);


    // animal a;
    // a.age = 12;
    // a.setWeight(122);
    // a.type = "jantu";

    // animal b = a;

    // a.print();
    // b.print();

    // a.type[0] = 'S';
    // a.print();
    // b.print();

    cout<<"a obj creation: "<<endl;
    animal a;
    a.age = 5;

    cout<<"b obj creation: "<<endl;
    animal* b = new animal;
    b->age = 12;

    delete b;

    return 0;
}