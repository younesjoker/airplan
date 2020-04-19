#pragma once
test
#ifndef AIRPORT_H
#define AIRPORT_H

#include "Flight.hpp"

class Airport {
private:
    std::vector<Flight> flights;

public:
    // Count number of flights
    static unsigned short int counter;
    // Read informations of flights from file
    void readFile();
    // Write informations of flights in file
    void updateFile();
    // Add a flight to airport
    void operator+=(const Flight&);
    // Delete a flight of airporn by flight's ID
    void operator-=(const us);
    // Print info of flights by special start point
    void operator%(const std::string) const;
    // Print info of flights by special final point
    void operator/(const std::string) const;
    // Print info of cheapest flight
    void operator!() const;
    // Sort flight from cheapest to most expensive
    void operator++();
    // Sort flight from most expensive to cheapest
    void operator--();
    // Sort flight from earliest to latest
    void operator++(int);
    // Sort flight from latest to earliest
    void operator--(int);
    // Print all informations of all flights
    void operator<<(std::ofstream &);
};

#endif
