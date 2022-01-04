#include "Point2.h"

template <class T>

//Default Constructor
Point2<T>::Point2()
{
	xcoord = 0;
	ycoord = 0;
} 

template <class T>
//Set X and Y
Point2<T>::Point2(const T& xpoint, const T& ypoint)
{
	xcoord = xpoint;
	ycoord = ypoint;
}

template <class T>
//Get X Coord
const T &Point2<T>::x() const
{
	return xcoord;
}

template <class T>
//Get Y Coord
const T &Point2<T>::y() const
{
	return ycoord;
}

template <class T>
//Add to Point
Point2<T>& Point2<T>::operator+=(const Point2& p)
{
	xcoord += p.xcoord;
	ycoord += p.ycoord;
	return *this;
}

template <class T>
//Subtract from Point
Point2<T>& Point2<T>::operator-=(const Point2& p)
{
	xcoord -= p.xcoord;
	ycoord -= p.ycoord;
	return *this;
}
