#ifndef GAUSSCAL_H
#define GAUSSCAL_H

#include<cmath>
#include<cstdlib>

enum Ellipse{el54,el80,el84};
enum ZoneWide{six,three};
class GaussCal
{

public:
    GaussCal();

    bool isDirectCal() const;
    void setIsDirectCal(bool isDirectCal);

    Ellipse ellipse() const;
    void setEllipse(const Ellipse &ellipse);

    double centMerdianLo() const;
    void setCentMerdianLo(double centMerdianLo);

    double x() const;
    void setX(double x);

    double y() const;
    void setY(double y);

    double longitude() const;
    void setLongitude(double longitude);

    double latitude() const;
    void setLatitude(double latitude);

    ZoneWide zonewide() const;
    void setZonewide(const ZoneWide &zonewide);

    void calculate();

protected:
    bool _isDirectCal;//true/false：正算/反算
    Ellipse _ellipse;//椭球类型
    ZoneWide _zonewide;//带宽

    //

    double _x,_y,_longitude,_latitude,_centMerdianLo;
};

void GaussProjCal(double longitude, double latitude, double *X, double *Y,Ellipse ellipse,ZoneWide zonewide);
void GaussProjInvCal(double X, double Y, double *longitude, double *latitude,Ellipse ellipse,ZoneWide zonewide);


#endif // GAUSSCAL_H
