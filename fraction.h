#pragma once
#ifndef fraction_h
#define fraction_h
#include <iostream>
using namespace std;

class fraction
{
private:
	int* num;
	int* denom;
public:
	fraction();
	fraction(const fraction& frac);
	~fraction();

	fraction& operator=(const fraction& frac);
	fraction operator+(const fraction& frac);
	fraction operator-(const fraction& frac);
	fraction operator*(const fraction& frac);
	fraction operator/(const fraction& frac);

	fraction operator+=(const fraction& frac);
	fraction operator-=(const fraction& frac);
	fraction operator*=(const fraction& frac);
	fraction operator/=(const fraction& frac);

	bool operator==(const fraction& frac);
	bool operator<(const fraction& frac);
	bool operator>(const fraction& frac);
	bool operator<=(const fraction& frac);
	bool operator>=(const fraction& frac);
	bool operator!=(const fraction& frac);

	fraction& operator++();
	fraction operator++(int);
	fraction& operator--();
	fraction operator--(int);

	int getNum();
	int getDenom();

friend istream& operator>>(istream& inDev, fraction& fra);
friend ostream& operator<<(ostream& outDev, const fraction& frac);


};
#endif
