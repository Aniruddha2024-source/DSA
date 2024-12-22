#include<iostream>
using namespace std;

class hero {
    
    private:
    int health;
    public:
    char level;

    /*void  print() {
        cout << level << endl;
    }*/

    int gethealth() {
        return health;
    }

    char getlevel() {
        return level;
    }

    int sethealth(int h) {
       health = h;   
    }

    char setlevel(char ch) {
        level = ch;
    }
};

int main()
{

    hero a;
    a.sethealth(45);
    a.setlevel('D');

    cout << a.level << endl;
    cout << a.gethealth() << endl;

    hero *b = new hero;
    b->sethealth(76);
    b->setlevel('A');

    cout << (*b).level << endl;
    cout << (*b).gethealth() << endl;


    /*hero ramesh;
    cout << sizeof(ramesh) << endl;

    
    cout << " Ramesh health : " << ramesh.gethealth() << endl;
    //cout << " Ramesh health : " << ramesh.sethealth(17) << endl;


    ramesh.sethealth(30);
    ramesh.level = 'A';

    cout << "health is : "<< ramesh.gethealth() << endl;
    cout << "level is : "<< ramesh.level << endl;*/



    return 0;
}