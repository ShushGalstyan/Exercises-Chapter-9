// SalesPerson class definition.
// Member functions defined in SalesPerson.cpp.
#ifndef SALESPERSON_H
#define SALESPERSON_H
class SalesPerson
{
public:
        static const int monthPerYear = 12;//mounth in one year
        SalesPerson();
        void getSalesFromUser();
        void setSales(int, double);
        void printAnnualSales();
private:
        double totalAnnualSales();
        double sales[monthPerYear];
};
#endif

