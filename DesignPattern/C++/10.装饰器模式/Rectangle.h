/**
 * @file Rectangle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-08
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>

#include "Shape.h"

class Rectangle : public Shape {
   public:
    Rectangle() = default;
    virtual ~Rectangle() = default;
    void Draw() override { std::cout << "Shape: Rectangle" << std::endl; }
};

#endif  // RECTANGLE_H_
