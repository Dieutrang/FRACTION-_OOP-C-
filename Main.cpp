#include "fraction.h"

int main()
{
	fraction frac1, frac2;

	cin >> frac1;
	cin >> frac2;
	
	cout << frac1.getNum() << "/" << frac1.getDenom() << "+" << frac2.getNum() << "/" << frac2.getDenom() << "=" << frac1 + frac2;
	cout << frac1.getNum() << "/" << frac1.getDenom() << "-" << frac2.getNum() << "/" << frac2.getDenom() << "=" << frac1 - frac2 ;
	cout << frac1.getNum() << "/" << frac1.getDenom() << "*" << frac2.getNum() << "/" << frac2.getDenom() << "=" << frac1 * frac2 ;
	cout << frac1.getNum() << "/" << frac1.getDenom() << ":" << frac2.getNum() << "/" << frac2.getDenom() << "=" << frac1 / frac2 ;

	cout << frac1++;
	cout << ++frac1;
	cout << frac1--;
	cout << --frac1;

	cout << frac1;
	frac1 += frac2;
	cout << frac1;
	frac1 -= frac2;
	cout << frac1;
	frac1 *= frac2;
	cout << frac1;
	frac1 /= frac2;
	cout << frac1;


	if (frac1 > frac2)
	{
		cout << frac1.getNum() << "/" << frac1.getDenom() << ">" << frac2.getNum() << "/" << frac2.getDenom() << endl;
	}
	if (frac1 < frac2)
	{
		cout << frac1.getNum() << "/" << frac1.getDenom() << "<" << frac2.getNum() << "/" << frac2.getDenom() << endl;
	}
	if (frac1 >= frac2)
	{
		cout << frac1.getNum() << "/" << frac1.getDenom() << ">=" << frac2.getNum() << "/" << frac2.getDenom() << endl;
	}
	if (frac1 <= frac2)
	{
		cout << frac1.getNum() << "/" << frac1.getDenom() << "<=" << frac2.getNum() << "/" << frac2.getDenom() << endl;
	}
	if (frac1 == frac2)
	{
		cout << frac1.getNum() << "/" << frac1.getDenom() << "=" << frac2.getNum() << "/" << frac2.getDenom() << endl;
	}
	if (frac1 != frac2)
	{
		cout << frac1.getNum() << "/" << frac1.getDenom() << "#" << frac2.getNum() << "/" << frac2.getDenom() << endl;
	}
	return 0;
}
