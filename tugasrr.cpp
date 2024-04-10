#include <iostream>
#include <map>
#include <vector>

using namespace std;
 
class Room{
//encapsulation
    int status; //0 = nothing, 1 = monster, 2 = princess
    vector<int> exits; // 1 = left, 2 = right, 3 = up, 4 = down
    string room_name;
    map<int, Room> connects;// 1 : "library", 2 : "bathroom", 3: "bedroom" 
public:
    Room(int status, vector<int> exits, string room_name){
        this->status = status;
        this->exits = exits;
        this->room_name = room_name;
    }
    int get_status() {
        return this->status;
    }

    void set_status(int status){
        this->status = status;
    }

    void print_exits(){
        for(auto it: this->exits){
            switch(it){
                case 1: cout << "left" << " "; break;
                case 2: cout << "right" << " "; break;
                case 3: cout << "up" << " "; break;
                case 4: cout << "down" << " "; break;
            }
        }
        cout << endl; 
    }

    int get_exits_size(){
        return exits.size();
    }
};

int main(){
    vector<int> lobby_exits= {1,2,3};
    vector<int> kitchen_exits= {1,4};

    Room lobby(1, lobby_exits, "lobby");
    Room kitchen(100, kitchen_exits, "kitchen");

    lobby.print_exits();
    kitchen.print_exits();

    cout << lobby.get_exits_size() << endl;
    cout << kitchen.get_exits_size();
    // cout << r1.get_status() << endl;
    // cout << r2.get_status() << endl;

    return 0;
}