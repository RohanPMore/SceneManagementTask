/*
 * PrimitiveParent.h
 *
 *  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#ifndef PRIMITIVEPARENT_H_
#define PRIMITIVEPARENT_H_

#include "Primitive.h"
#include <vector>
#include <string>

/// @brief Represents a parent node that manages primitives.
class PrimitiveParent {
private:
    std::vector<Primitive*> primitives; ///< List of child primitives.

public:
    /// @brief Adds a primitive to the parent node.
    /// @param primitive The primitive to add.
    void addPrimitive(Primitive* primitive);

    /// @brief Removes a primitive from the parent node.
    /// @param primitive The primitive to remove.
    void removePrimitive(Primitive* primitive);

    /// @brief Retrieves the list of primitives.
    /// @return A vector of primitive pointers.
    const std::vector<Primitive*>& getPrimitives() const;

    ~PrimitiveParent();
};
#endif /* PRIMITIVEPARENT_H_ */
