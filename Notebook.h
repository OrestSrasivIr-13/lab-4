#include <iostream>
#include <string>
#include <ostream>
using namespace std;
class Notebook 
{
private:
	int pages, price;
	string color;
protected:
	double Vaga;
	char cod;
public:


	void massage() 
	{
		cout << "Class is working";

	}
	void set(string date_color, int date_pages, int date_price) 
	{
		color = date_color;
		pages = date_pages;
		price = date_price;
	}

	void get() 
	{
		cout << "The color of this notebook - " << color << "  number is - " << pages << "  price is - " << price<<" ua" <<endl;
	}
	Notebook() 
	{
		color = "Red";
		pages = 60;
		price = 38;
		get();
	}

};