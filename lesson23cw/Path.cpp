#include "Path.h"

Path::Path()
{
    m_id = "undefined";
    m_begin = "undefined";
    m_end = "undefined";
    m_price = 0;
    m_distance = 0;
}

Path::Path(string id, string begin, string end, float price, float distance)
{
    m_id = id;
    m_begin = begin;
    m_end = end;
    m_price = price;
    m_distance = distance;
}

string Path::getId() const
{
    return m_id;
}

string Path::getBegin() const
{
    return m_begin;
}

string Path::getEnd() const
{
    return m_end;
}

float Path::getPrice() const
{
    return m_price;
}

float Path::getDistance() const
{
    return m_distance;
}

void Path::setPrice(float price)
{
    if (price >= 0) {
        m_price = price;
    }
}

void Path::showInfo() const
{
    cout << "ID: " << m_id << endl;
    cout << "From: " << m_begin << endl;
    cout << "To: " << m_end << endl;
    cout << "Price: " << m_price << endl;
    cout << "Distance: " << m_distance << "km" << endl;
    cout << endl;
}
