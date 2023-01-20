
#include <iostream>
 
using namespace std;

class ShowTicket
{
    private:
        string row;
        string seat_number;
        bool sold;

    public:
        ShowTicket(string row, string seat_number);
        bool is_sold();
        void sell_seat();
        string print_ticket();
};

ShowTicket::ShowTicket(string row, string seat_number) {
    this->row = row;
    this->seat_number = seat_number;
    this->sold = false;
}

bool ShowTicket::is_sold() {
    return this->sold;
}

void ShowTicket::sell_seat() {
    this->sold = true;
}

// string ShowTicket::print_ticket(){
//     string returnString, isSoldString = "sold";
//     if (this->sold == false)
//         isSoldString = "available";
//     return returnString = this->row + " " + this->seat_number + " " + isSoldString;
// }

string ShowTicket::print_ticket() {
    string res = "";
    if (this->sold) {
        res.append(this->row);
        res += " ";
        res.append(this->seat_number);
        res += " ";
        res += "sold";
    }
    else {
        res.append(this->row);
        res += " ";
        res.append(this->seat_number);
        res += " ";
        res += "available";
    }
    return res;
}
