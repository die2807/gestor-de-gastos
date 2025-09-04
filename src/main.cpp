#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream> 
#include <string>

using namespace std; 

string fechagHoy() {
    auto t = chrono::system_clock::to_time_t(chrono::system_clock::now());

    tm* fehca = localtime(&t);

    ostringstream os ;
    os << put_time(fehca, "%d/%m/%Y");

    return os.str();

}

int main () {
    
    system("clear");

    cout << "Fecha de hoy: " << fechagHoy() << endl;
    return 0;

   
}