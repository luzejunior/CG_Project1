#ifndef MATRIX_H
#define MATRIX_H

#include <glm/glm.hpp>

class Matrix
{
    public:
    	float m[4][4];
        void loadIdentity();
        void matrixScale(float, float, float);
        virtual ~Matrix();
    private:
};

glm::mat4 scaleMatrix(float, float, float);
glm::mat4 translateMatrix(float, float, float);
glm::mat4 matrixRotationX(float);
glm::mat4 MatrixRotateX(glm::mat4, float);
glm::mat4 matrixRotationY(float);
glm::mat4 matrixRotateY(glm::mat4, float);
glm::mat4 createMatrixWithVec3(glm::vec3, glm::vec3, glm::vec3);
glm::mat4 createM_Projection(float);
Matrix matrixMultiply(Matrix, Matrix);

#endif // MATRIX_H