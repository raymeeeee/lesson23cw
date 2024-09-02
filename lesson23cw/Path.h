#pragma once
#include <string>
#include <iostream>
using namespace std;

class Path
{
	string m_id;
	string m_begin;
	string m_end;
	float m_price;
	float m_distance;

public:
	Path();
	Path(string id, string begin, string end, float price, float distance);
	
	string getId()const;
	string getBegin()const;
	string getEnd()const;
	float getPrice()const;
	float getDistance()const;

	void setPrice(float price);
	void showInfo()const;

};

