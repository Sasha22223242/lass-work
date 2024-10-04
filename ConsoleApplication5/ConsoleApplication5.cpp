#include <iostream>
#include <string>

using namespace std;

struct animals {
    string type;
    string poroda;
    string name;
};

void fillob(animals& creature) {
    cout << "enter a type/poroda/name: " << endl;
    //cin >> creature.type >> creature.poroda >> creature.name;
    getline(cin, creature.type);
    getline(cin, creature.poroda);
    getline(cin, creature.name);

}


void speak(string& voice) {
    cout << "Does ur animal have a voice?" << endl;
    getline(cin, voice);
}

void result(animals& creature, string& voice) {
    cout << "Poroda\t|type\t|name\t|voice\t" << endl;
    cout << creature.poroda << ' ' << creature.type << ' ' << creature.name << ' ' << voice << endl;
}


int main()
{
    //animals tv;
    //string voice;
    //fillob(tv);
    //speak(voice);
    //result(tv, voice);
    animals tvr[3];
    string voice[3];
    short index = 0;
    short yn;
    while (true) {
        animals& j = tvr[index];
        fillob(j);
        speak(voice[index]);
        index++;
        cin.ignore();
        cout << "Do u have more animals?" << ' ' << endl;
        cin >> yn;
        if (yn == 2) break;
    }
    cout << "type\t |poroda\t |voice\t";
    for (short i = 0; i < index; i++) {
        result(tvr[i], voice[i]);
    }
}