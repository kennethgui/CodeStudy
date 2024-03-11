/*
kenneth guillont
kenneth.guillont83@myhunter.cuny.edu
quiz 10
*/

#include <iostream>
#include <string>

using namespace std;

class Date {
    public:
        int month;
        int day;
        int year;
};

string formatDate(Date * d)
{
    int month = d->month;
    string monthWord;
    if(month == 1) {monthWord = "Jan";}
    else if(month == 2) {monthWord = "Feb";}
    else if(month == 3) {monthWord = "Mar";}
    else if(month == 4) {monthWord = "Apr";}
    else if(month == 5) {monthWord = "May";}
    else if(month == 6) {monthWord ="Jun";}
    else if(month == 7) {monthWord ="Jul";}
    else if(month == 8) {monthWord ="Aug";}
    else if(month == 9) {monthWord ="Sep";}
    else if(month == 10) {monthWord ="Oct";}
    else if(month == 11) {monthWord ="Nov";}
    else if(month == 12) {monthWord ="Dec";}

    int day = d->day;
    int year = d->year;

    monthWord += " " + to_string(day) + ", " + to_string(year);
    return monthWord;
}

int main() {
    Date midterm1 = Date {10, 17, 2022};
    cout << formatDate(&midterm1) << endl;
    
    Date christmas = Date {12, 25, 2022};
    cout << formatDate(&christmas) << endl;
}