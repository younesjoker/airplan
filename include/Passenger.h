#pragma once

#ifndef PASSENGER_H
#define PASSENGER_H

typedef unsigned short us;

#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

class Passenger {
private:
    std::string first_name;
    std::string last_name;
    std::string national_id;

public:
    // Create random information of passengers in file
    static void randomPassengers(us, us);
    // Constructor to set all data members
    Passenger (const std::string, const std::string,
                                const std:: string);
    // Return firts_name
    std::string getFirstName() const;
    // Return last_name
    std::string getLastName() const;
    // Return national_id
    std::string getNationalID() const;
    // Print information of passenger
    std::ofstream & operator<<(std::ofstream &);
};


#endif
