#include <iostream>
// #include <showticket.h>
 
using namespace std;

class ShowTicket
{
    public:
        string row;
        string seat_number;
        bool sold;
        ShowTicket() {};
        ShowTicket(string row, string seat_number);
        bool is_sold();
        void sell_seat();
        string print_ticket();
};

ShowTicket::ShowTicket(string row, string seat_number) {
    this->row = row;
    this->seat_number = seat_number;
    this->sold = false;
    // cout << this->row << this->seat_number << endl;
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


class SportTicket: public ShowTicket
{
    private:
        bool beer=false;

    public:
        SportTicket() {};
        SportTicket(string row, string seat_number): ShowTicket(row, seat_number) {};
        bool beer_sold();
        void sell_beer();
        string print_ticket();
};

bool SportTicket::beer_sold() {
    if (this->beer) {
        return true;
    }
    else {
        return false;
    }
}

void SportTicket::sell_beer() {
    this->beer = true;
}

string SportTicket::print_ticket() {
    string res = ShowTicket::print_ticket();
    if (this->beer) {
        res += " ";
        res.append("beer");
    }
    else {
        res += " ";
        res.append("nobeer");
    }
    return res;
}

class TicketSales: public SportTicket {
    public:
        using SportTicket::SportTicket;
        string print_ticket(ShowTicket *myticket);
        string print_ticket(SportTicket *myticket);
};
string TicketSales::print_ticket(ShowTicket *myticket){
    return myticket -> print_ticket();
}
string TicketSales::print_ticket(SportTicket *myticket){
    return myticket -> print_ticket();
}