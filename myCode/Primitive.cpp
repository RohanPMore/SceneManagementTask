/*
 * Primitive.cpp
 *
 *  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#include "Primitive.h"

void Primitive::translate(const Vector3& translation) {
    position.x += translation.x;
    position.y += translation.y;
    position.z += translation.z;
}

void Primitive::rotate(const Vector3& rotation) {
    this->rotation.x += rotation.x;
    this->rotation.y += rotation.y;
    this->rotation.z += rotation.z;
}

void Primitive::scaling(const Vector3& scalingFactor) {
    scale.x *= scalingFactor.x;
    scale.y *= scalingFactor.y;
    scale.z *= scalingFactor.z;
}

Primitive::~Primitive() = default;
