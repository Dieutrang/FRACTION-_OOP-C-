#include "fraction.h"

fraction::fraction()
{
	num = new int;
	denom = new int;

	*num = 0;
	*num = 1;
}

fraction::fraction(const fraction& frac)
{
	num = new int; 
	denom = new int;

	*num = *frac.num;
	*denom = *frac.denom;
}

fraction::~fraction()
{
	if (num != NULL)
	{
		delete num;
		num = NULL;
	}
	if (denom != NULL)
	{
		delete denom;
		denom = NULL;
	}
}

istream& operator>>(istream& inDev, fraction& frac)
{
	cout << "Input numerator: ";
	inDev >> *frac.num;

	do
	{
		cout << "Input denomerator: ";
		inDev >> *frac.denom;

		if (*frac.denom == 0)
		{
			cout << "Denomerator must be non-zero! Please input again!" << endl;
		}

	} while (*frac.denom == 0);

	return inDev;
}
ostream& operator<<(ostream& outDev, const fraction& frac)
{
	outDev << *frac.num << "/" << *frac.denom << endl;
	return outDev;
}

fraction& fraction::operator=(const fraction& frac)
{
	if (this == &frac)
		return  *this;
	delete num;
	delete denom;
	num = new int;
	denom = new int;
	*num = *frac.num;
	*denom = *frac.denom;
	return *this;
}
fraction fraction::operator+(const fraction& frac)
{
	fraction fra;
	*fra.num = (*this->num) * (*frac.denom)+ (*this->denom) * (*frac.num);
	*fra.denom = (*this->denom) * (*frac.denom);
	return fra;
}
fraction fraction::operator-(const fraction& frac)
{
	fraction fra;
	*fra.num = (*num) * (*frac.denom) - (*denom) * (*frac.num);
	*fra.denom = (*denom) * (*frac.denom);
	return fra;
}
fraction fraction::operator*(const fraction& frac)
{
	fraction fra;
	*fra.num = (*num) * (*frac.num);
	*fra.denom = (*denom) * (*frac.denom);
	return fra;
}
fraction fraction::operator/(const fraction& frac)
{
	fraction fra;
	if (*frac.num == 0)
		return fra;
	else
	{
		*fra.num = (*num) * (*frac.denom);
		*fra.denom = (*denom) * (*frac.num);
		return  fra;
	}

}

fraction fraction::operator+=(const fraction& frac)
{
	(*num) = (*num) * (*frac.denom) + (*denom) * (*frac.num);
	(*denom) *= (*frac.denom);
	return *this;
}
fraction fraction::operator-=(const fraction& frac)
{
	(*num) = (*num) * (*frac.denom) - (*denom) * (*frac.num);
	(*denom) *= (*frac.denom);
	return *this;
}
fraction fraction::operator*=(const fraction& frac)
{
	(*num) *= (*frac.num);
	(*denom) *= (*frac.denom);
	return *this;
}
fraction fraction::operator/=(const fraction& frac)
{
	if (*frac.denom == 0)
	{
		*num = 0;
		*denom = 1;
		return *this;
	}
	else
	{
		(*num) *= (*frac.denom);
		(*denom) *= (*frac.num);
		return *this;
	}
}

bool fraction::operator==(const fraction& frac)
{
	if ((*num) * (*frac.denom) == (*denom) *(*frac.num))
		return true;
	else
		return false;
}
bool fraction::operator<(const fraction& frac)
{
	if ((*num) * (*frac.denom) < (*frac.num) * (*denom))
		return true;
	else
		return false;
}
bool fraction::operator>(const fraction& frac)
{
	if ((*num) * (*frac.denom) > (*frac.num) * (*denom))
		return true;
	else
		return false;
}
bool fraction::operator<=(const fraction& frac)
{
	if ((*num) * (*frac.denom) <= (*frac.num) * (*denom))
		return true;
	else
		return false;

}
bool fraction::operator>=(const fraction& frac)
{
	if ((*num) * (*frac.denom) >= (*frac.num) * (*denom))
		return true;
	else
		return false;

}
bool fraction::operator!=(const fraction& frac)
{
	if ((*num) * (*frac.denom) != (*denom) * (*frac.num))
		return true;
	else
		return false;
}

fraction& fraction::operator++() //tien to
{
	(*num) = (*num) + (*denom);
	return (*this);
}
fraction fraction::operator++(int) //hau to
{
	fraction temp = *this;
	++(*this);
	return temp;
}
fraction& fraction::operator--()
{
	(*num) = (*num) - (*denom);
	return (*this);
}
fraction fraction::operator--(int)
{
	fraction temp = *this;
	--(*this);
	return temp;
}

int fraction::getNum()
{
	return *num;
}

int fraction::getDenom()
{
	return *denom;
}







