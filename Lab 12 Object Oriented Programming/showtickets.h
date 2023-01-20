
#include <iostream>
#include <map>
 
using namespace std;

class ShowTickets
{
    private:
        string row;
        string seat_number;
        bool sold;
        map<pair<string, string>, bool> m;

    public:
        bool is_sold(string row, string seat);
        void sell_seat(string row, string seat);
        string print_ticket(string row, string seat);
};

bool ShowTickets::is_sold(string row, string seat) {
    pair<string, string> key_to_find;
    key_to_find.first = row;
    key_to_find.second = seat;
    if (this->m.count(key_to_find)&&this->m[key_to_find]) {
        return true;
    }
    else {
        return false;
    }
}

void ShowTickets::sell_seat(string row, string seat) {
    pair<string, string> key_to_find;
    key_to_find.first = row;
    key_to_find.second = seat;
    this->m[key_to_find] = true;
}

string ShowTickets::print_ticket(string row, string seat) {
    pair<string, string> key_to_find;
    key_to_find.first = row;
    key_to_find.second = seat;
    string res;
    string status = "available";
    if (this->m.count(key_to_find)&&this->m[key_to_find]) {
        status = "sold";
        res = row + " " + seat + " " + status;
    }
    else {
        res = row + " " + seat + " " + status;
    }
    return res;
}
