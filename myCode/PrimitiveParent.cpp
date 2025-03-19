/*
 * PrimitiveParent.cpp
 *
*  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#include "PrimitiveParent.h"
#include <algorithm>
#include <iostream>

void PrimitiveParent::addPrimitive(Primitive* primitive) {
    primitives.push_back(primitive);
    std::cout << "Added: " << primitive->renderListView() << std::endl;
}

void PrimitiveParent::removePrimitive(Primitive* primitive) {
    primitives.erase(std::remove(primitives.begin(), primitives.end(), primitive), primitives.end());
    std::cout << "Removed: " << primitive->renderListView() << std::endl;
}

const std::vector<Primitive*>& PrimitiveParent::getPrimitives() const {
    return primitives;
}

PrimitiveParent::~PrimitiveParent() {
    for (auto* primitive : primitives) {
        delete primitive;
    }
}
