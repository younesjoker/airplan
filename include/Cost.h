#define COST_H

#include <iostream>

typedef unsigned short us;

class Cost {
private:
    us price;
    us tax;
    us pilot;
    us depreciation;

public:
    // Default constructor
    Cost ();
    // a constructor to initialize all data members
    Cost (const us, const us, const us, const us);
    // Copy constructor
    Cost (const Cost &);
    // Set price value
    void setPrice(const us);
    // Return price
    us getPrice() const;
    // Set tax value
    void setTax(const us);
    // Return tax
    us getTax() const;
    // Set pilot value
    void setPilot(const us);
    // Return pilot
    us getPilot() const;
    // Set depreciation value
    void setDepreciation(const us);
    // Return depreciation
    us getDepreciation() const;
    // Increase tax (1 percent)
    void operator++();
    // Decrease tax (1 percent)
    void operator--();
    // Increase depreciation (1000 Dollars)
    void operator++(int);
    // Decrease depreciation (1000 Dollars)
    void operator--(int);
    // Overload assign operator
    void operator=(const Cost &);
    // Compare price of two cost
    bool operator<(const Cost &) const;
    // Compare price of two cost
    bool operator>(const Cost &) const;
    // Compare price of two cost
    bool operator==(const Cost &) const;
};
