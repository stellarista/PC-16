#include <iostream>
#include <string>
using namespace std;

class Date{
  int month, day, year;

     const string monthName[13] = {"","January", "February", "March", "April",
                                    "May", "June", "July", "August",
                                "September", "October", "November", "December"} ;
  public:
   Date(int day, int month, int year){
    this -> day = day;
    this -> month = month;
    this -> year = year;
   }
   void printFirstForm()
   {
    cout << month << "/" << day << "/" << year<< endl;
   }

    void printSecondForm()
    {
       cout << monthName[month] << " " << day << ", " << year << endl;
    }
      void printThirdForm(){
       cout << day << " " << monthName[month] << " " << year << endl;
   }
   int dateInput(int day)
   {
        if(day < 1 || day > 31)
        {
            string exception = "ERROR: date cannot be less than 1 or more than 31\n";
            throw exception;
        }
        return day;
   }

   int monthInput(int month)
   {
    if(month < 1 || month > 12)
        {
            string exception = "ERROR: month cannot be less than 1 or more than 12\n";
            throw exception;
        }
        return month;
   }

};

int main(){
 int day;
 int month;
 int year;

 cout << "Input date: ";
 cin >> day;
 cout << "Input month: ";
 cin >> month;
 cout << "Input year: ";
 cin >> year;
 cout << endl;

 Date newDate(day, month, year);

 try
 {
  newDate.dateInput(day);
  newDate.monthInput(month);
  newDate.printFirstForm();
  newDate.printSecondForm();
  newDate.printThirdForm();
 }

 catch(string exception){
  cout << exception;
 }

 return 0;

}
