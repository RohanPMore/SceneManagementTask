/*
 * Sphere.cpp
 *
*  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#include "Sphere.h"
#include <sstream>


Sphere::Sphere(float r) : radius(r) {}

std::string Sphere::renderListView() const {
    std::stringstream ss;
    ss << "Sphere: { Radius: " << radius << " }";
    return ss.str();
}
