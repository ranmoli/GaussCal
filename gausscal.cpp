#include "gausscal.h"

GaussCal::GaussCal()
{
_isDirectCal=true;
_ellipse=el54;
}

bool GaussCal::isDirectCal() const
{
    return _isDirectCal;
}
void GaussCal::setIsDirectCal(bool isDirectCal)
{
    _isDirectCal = isDirectCal;
}
Ellipse GaussCal::ellipse() const
{
    return _ellipse;
}

void GaussCal::setEllipse(const Ellipse &ellipse)
{
    _ellipse = ellipse;
}
double GaussCal::centMerdianLo() const
{
    return _centMerdianLo;
}

void GaussCal::setCentMerdianLo(double centMerdianLo)
{
    _centMerdianLo = centMerdianLo;
}
double GaussCal::x() const
{
    return _x;
}

void GaussCal::setX(double x)
{
    _x = x;
}
double GaussCal::y() const
{
    return _y;
}

void GaussCal::setY(double y)
{
    _y = y;
}
double GaussCal::longitude() const
{
    return _longitude;
}

void GaussCal::setLongitude(double longitude)
{
    _longitude = longitude;
}
double GaussCal::latitude() const
{
    return _latitude;
}

void GaussCal::setLatitude(double latitude)
{
    _latitude = latitude;
}









