#ifndef GAUSSCAL_H
#define GAUSSCAL_H

enum Ellipse{el54,el80,el84};
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

protected:
    bool _isDirectCal;//true/false：正算/反算
    Ellipse _ellipse;//椭球类型

    //needing init:
    double _centMerdianLo;//中央子午线经度
    double _x,_y,_longitude,_latitude;
};

#endif // GAUSSCAL_H
