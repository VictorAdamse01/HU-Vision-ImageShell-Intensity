/*
 * Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 */

#pragma once
#include "RGBImage.h"

/**
 * @brief
 * class which holds an image comprised of RGB values
 */
class RGBImageStudent : public RGBImage {
private:
    RGB *values;

public:
    /**
     * @brief
     * construct a new RGBImageStudent object with width and height set to 0
     */
    RGBImageStudent();

    /**
     * @brief
     * construct a new RGBImageStudent object which is a copy of other
     *
     * @param other
     */
    RGBImageStudent(const RGBImageStudent &other);

    /**
     * @brief
     * onstruct a new RGBImageStudent object with given width and height
     *
     * @param width
     * @param height
     */
    RGBImageStudent(const int width, const int height);

    /**
     * @brief
     * destroy the RGBImageStudent object
     */
    ~RGBImageStudent();

    /**
     * @brief
     * deletes old image and creates a new one with given width and height
     *
     * @param width
     * @param height
     */
    void set(const int width, const int height);

    /**
     * @brief
     * deletes old image and creates a new image which is a copy of other
     *
     * @param other
     */
    void set(const RGBImageStudent &other);

    /**
     * @brief
     * set pixel on position (x,y) to pixel
     *
     * @param x
     * @param y
     * @param pixel
     */
    void setPixel(int x, int y, RGB pixel);

    /**
     * @brief
     * set pixel on position i to pixel
     *
     * @param i
     * @param pixel
     */
    void setPixel(int i, RGB pixel);

    /**
     * @brief
     * get RGB value from position (x,y)
     *
     * @param x
     * @param y
     * @return RGB
     */
    RGB getPixel(int x, int y) const;

    /**
     * @brief
     * get RGB value from position i
     *
     * @param i
     * @return RGB
     */
    RGB getPixel(int i) const;
};