/*
 * Plane.cpp
 *
 *  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#include "Plane.h"
#include<sstream>

Plane::Plane(const Vector2& s) : size(s) {}


std::string Plane::renderListView() const {
    std::stringstream ss;
    ss << "Plane: { Size: (" << size.x << ", " << size.y << ") }";
    return ss.str();
}
