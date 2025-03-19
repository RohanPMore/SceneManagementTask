/*
 * Primitive.h
 *
 *  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#ifndef PRIMITIVE_H_
#define PRIMITIVE_H_

#include "Vector3.h"
#include <string>

/// @brief Base class representing a generic primitive in the scene.
class Primitive {
public:
    Vector3 position; ///< Position of the primitive.
    Vector3 rotation; ///< Rotation of the primitive.
    Vector3 scale;    ///< Scale of the primitive.

    /// @brief Translates the primitive by a given vector.
    /// @param translation The translation vector.
    void translate(const Vector3& translation);

    /// @brief Rotates the primitive by a given vector.
    /// @param rotation The rotation vector.
    void rotate(const Vector3& rotation);

    /// @brief Scales the primitive by a given scaling factor.
    /// @param scalingFactor The scaling factor vector.
    void scaling(const Vector3& scalingFactor);

    virtual ~Primitive(); ///< Virtual destructor for base class.


    /// @brief Renders the primitive to a string (list view).
    /// @return A string representing the primitive.
   virtual std::string renderListView() const = 0; // Pure virtual

};


#endif /* PRIMITIVE_H_ */
