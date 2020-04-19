#pragma once

#ifndef FLIGHT_H
#define FLIGHT_H

typedef unsigned int ui;

#include <vector>
#include "Cost.hpp"
#include "Passenger.hpp"

class Flight {
private:
    Cost cost;
    std::vector<Passenger> passengers;
    const us id;
    std::string start_point;
    std::string final_point;
    std::string airplane;
    std::string start_time;
    std::string final_time;
    us capacity;

public:
    // A constructor to set all data members without sold_tickets
    Flight (const Cost &, const us);
    // Return cost of flight
    Cost getCost() const;
    // Return ID of flight
    us getID() const;
    // Return start_point
    std::string getStartPoint() const;
    // Return final_point
    std::string getFinalPoint() const;
    // Return airplane
    std::string getAirplane() const;
    // Return start_time
    std::string getStartTime() const;
    // Return final_time
    std::string getFinalTime() const;
    // Return capacity
    us getCapacity() const;
    // Return number of sold ticket
    us getSoldTicket() const;
    // Set all information of flight
    void operator>>(std::istream &);
    // Print all information of flight
    std::ostream& operator<<(std::ostream &) const;
    // Compare total time of travel
    bool operator>(const Flight &);
    // Compare total time of travel
    bool operator<(const Flight &);
    // Compare total time of travel
    bool operator==(const Flight &);
    // solve a ticket (add a passenger to flight)
    void operator+=(const Passenger &);
    // cancel a ticket (delete a passenger of flight)
    void operator-=(const std::string);
    // get all recived money
    ui getRecivedMoney() const;
    // get profit of flight
    ui getProfit() const;
};

#endif
