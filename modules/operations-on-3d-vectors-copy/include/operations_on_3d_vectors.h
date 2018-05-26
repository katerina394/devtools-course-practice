// Copyright 2018 Krasikova Ekaterina

#ifndef MODULES_OPERATIONS_ON_3D_VECTORS_COPY_INCLUDE_OPERATIONS_ON_3D_VECTORS_H_
#define MODULES_OPERATIONS_ON_3D_VECTORS_COPY_INCLUDE_OPERATIONS_ON_3D_VECTORS_H_

#include "./vector_3d.h"

class OperationsOn3dVectors {
 public:
    static double GetNorm(const Vector3d& vector);
    static Vector3d GetNormalizedVector(const Vector3d& vector);

    static double DotProduct(const Vector3d& vector1,
        const Vector3d& vector2);
    static Vector3d CrossProduct(const Vector3d& vector1,
        const Vector3d& vector2);
};

#endif  // MODULES_OPERATIONS_ON_3D_VECTORS_COPY_INCLUDE_OPERATIONS_ON_3D_VECTORS_H_
