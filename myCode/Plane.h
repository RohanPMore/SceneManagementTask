/*
 * Plane.h
 *
 *  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#ifndef PLANE_H_
#define PLANE_H_

#include "Primitive.h"
#include "Vector2.h"

/// @brief Represents a plane primitive with a size.
class Plane : public Primitive {
public:
    Vector2 size; ///< Size of the plane (x, y).

    /// @brief Constructor to initialize the plane with a size.
    /// @param s The size of the plane.
    Plane(const Vector2& s);

    ///  @brief Renders the sphere to a string (list view).
	///  @return A string representing the sphere.
	std::string renderListView() const override;
};

#endif /* PLANE_H_ */
