#pragma once
#include <iostream>

template <class T>

class Point2
{

//Outputs
friend std::ostream& operator<<(std::ostream& out, const Point2<T>& p)
    {
        out << "(" << p.xcoord << ", " << p.ycoord << ")" << std::endl;
        return out;
    }


friend std::istream& operator>>(std::istream& in, Point2<T>& p)
    {
        in >> p.xcoord;
        in >> p.ycoord;
        return in;
    }


public:
    //Default Contructor
    Point2();
    
    //Contructor
	Point2(const T& xpoint, const T& ypoint);

    //Get X from point
	const T& x() const;
    
    //Get Y Cord
	const T& y() const;
    
    //Add to Point
	Point2<T>& operator+=(const Point2& p);
    
    //Subtract from Point
	Point2<T>& operator-=(const Point2& p);
	
private:
    //Initalizing Variables
    T xcoord;
    T ycoord;
};



