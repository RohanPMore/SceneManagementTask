/*
 * Sphere.h
 *
 *  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#ifndef SPHERE_H_
#define SPHERE_H_

#include "Primitive.h"

/// @brief Represents a sphere primitive with a radius.
class Sphere : public Primitive {
public:
    float radius; ///< Radius of the sphere.

    /// @brief Constructor to initialize the sphere with a radius.
    /// @param r The radius of the sphere.
    Sphere(float r);

    ///  @brief Renders the sphere to a string (list view).
    ///  @return A string representing the sphere.
    std::string renderListView() const override;
};


#endif /* SPHERE_H_ */
