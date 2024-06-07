#include <iostream>
#include <map>
#include <vector>
#include <fstream>

using namespace std;
 
class Room{
//encapsulation
    int status; //0 = nothing, 1 = monster, 2 = princess
    string room_name;
    //map<int, Room> connects; 
    Room* connects[4] = {NULL}; // 0 = left, 1 = right, 2 = up, 3 = down
public:
    Room(int status, string room_name){ //c'tor
        this->status = status;
        this->room_name = room_name;
    }

    int get_status() { //cek ruangannya kosong, atau ada monster, atau ada princess
        switch(this->status){
            case 1: cout << "Oh no! You've met the monster." << endl;
            case 2: cout << "Congratulations, you've found the princess!" << endl;
        }
        return this->status;
    }

    int get_exitnum(){ //number of exits
        int sum = 0;
        for(int i = 0; i < 4; i++){
            if(connects[i] != NULL) sum++;
        }
        return sum;
    }
    
    string get_roomname(){ //cari tahu nama room nya
        return this->room_name;
    }

    void connect_room(int direction, Room* room){ //connect satu ruangan ke ruangan lain
        connects[direction] = room;
    }

    Room* room_target(int direction){ //dari ruangan tertentu, klo gw ambil satu direction perginya ke ruangan mana?
        return connects[direction];
    }

    void print(){
        cout << this->room_name << " have " << this->get_exitnum() << " exits" << endl;
        for(int i = 0; i < 4; i++){
            if(connects[i] != NULL){
                switch(i){
                    case 0: cout << "Left to "; break;
                    case 1: cout << "Right to "; break;
                    case 2: cout << "Up to "; break;
                    case 3: cout << "Down to "; break;
                }
                cout << connects[i]->get_roomname() << endl;
            }
        }
        cout << "status: " << this->status << endl;
    }
};

class Game{
    vector<Room* > rooms;
public:
    Game(ifstream &file){
        int roomnumber;
        file >> roomnumber;
        for(int i = 0; i < roomnumber; i++){
            string roomname;
            int status;
            file >> roomname;
            file >> status;
            Room* temp = new Room(status, roomname);
            rooms.push_back(temp);
        }

        int connectors;
        file >> connectors;
        for(int i = 0; i < connectors; i++){
            string room1, room2;
            int direction;
            file >> room1;
            file >> room2;
            file >> direction;
            for(auto it1: this->rooms){
                if(it1->get_roomname() == room1){
                    for(auto it2: this->rooms){
                        if(it2->get_roomname() == room2){
                            int reverse_direction = (direction % 2) ? direction - 1 : direction + 1;
                            it1->connect_room(direction, it2);
                            it2->connect_room(reverse_direction, it1);
                            break;
                        } 
                    }
                    break;
                }
            }
        }
    }

    void play(){
        
    }

    void printroomsinfo(){
        for(auto it: rooms) {
            it->print();
            cout << endl;
        }
    }
};

int main(){
    ifstream inputfile("testcase.txt");
    Game game(inputfile);
    game.printroomsinfo();

    return 0;
}
