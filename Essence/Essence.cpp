#include <iostream>
using namespace std;
enum type { animal, bird, human };
union characteristic {
    double speed;
    bool animal;
    int iq;
};

struct essence {
    double speed;
    type estype;
    string color;
    characteristic en;
};



string tolower(string str1) {
    string str2 = str1;
    for (int i = 0; i < str1.length(); i++) {
        str2[i] = tolower(str1[i]);
    }
    return str2;
}

int main() {
    characteristic es[10];
    essence data[10];

    double speedofessence;
    string typeofessence;
    string colorofessence;

    for (int i = 0; i < 10; i++) {
        cout << "Write the speed of your essence:" << endl;
        cin >> speedofessence;
        cout << "Write the type of your essence:" << endl;
        cin >> typeofessence;
        cout << "Write the color of your essence:" << endl;
        cin >> colorofessence;

        if (tolower(typeofessence) == "animal") {
            data[i].estype = type::animal;
        }
        else if (tolower(typeofessence) == "bird") {
            data[i].estype = bird;
        }
        else if (tolower(typeofessence) == "human") {
            data[i].estype = human;
        }

        data[i].color = colorofessence;
        data[i].speed = speedofessence;
    }

    for (int i = 0; i < 10; i++) {
        if (data[i].estype == animal) {
            string answ;
            cout << "With hooves?" << endl;
            cin >> answ;
            if (tolower(answ) == "yes") {
                data[i].en.animal = true;
            }
            else if (tolower(answ) == "no") {
                data[i].en.animal = false;
            }
        }
        else if (data[i].estype == bird) {
            cout << "Speed of bird: " << endl;
            cin >> data[i].en.speed;
        }
        else if (data[i].estype == human) {
            cout << "Iq of Human: " << endl;
            cin >> data[i].en.iq;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (data[i].estype == animal) {
            cout << "Animal with hoover or not?: " << (data[i].en.animal ? "yes" : "no") << endl;
        }
        else if (data[i].estype == bird) {
            cout << "Speed of bird: " << data[i].en.speed << endl;
        }
        else if (data[i].estype == human) {
            cout << "Iq of Human: " << data[i].en.iq << endl;
        }
    }

    
}

        
       
        
            
        
        

    


