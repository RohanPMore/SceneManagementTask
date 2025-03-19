/*
 * Box.cpp
 *
 *  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#include "Box.h"
#include<sstream>

Box::Box(const Vector3& s) : size(s) {}

std::string Box::renderListView() const {
    std::stringstream ss;
    ss << "Box: { Size: (" << size.x << ", " << size.y << ", " << size.z << ") }";
    return ss.str();
}
