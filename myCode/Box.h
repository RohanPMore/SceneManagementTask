/*
 * Box.h
 *
 *  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#ifndef BOX_H_
#define BOX_H_

#include "Primitive.h"
#include "Vector3.h"

/// @brief Represents a box primitive with a size.
class Box : public Primitive {
public:
    Vector3 size; ///< Size of the box (x, y, z).

    /// @brief Constructor to initialize the box with a size.
    /// @param s The size of the box.
    Box(const Vector3& s);

    ///  @brief Renders the sphere to a string (list view).
    ///  @return A string representing the sphere.
    std::string renderListView() const override;
};

#endif /* BOX_H_ */
