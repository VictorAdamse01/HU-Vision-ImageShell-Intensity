/*
 * Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 */

#pragma once
#include "IntensityImage.h"


/**
 * @brief
 * class which holds an image comprised of Intensity values
 */
class IntensityImageStudent : public IntensityImage {
private:
    Intensity *values;

public:
    /**
     * @brief
     * construct a new IntensityImageStudent object with width and height defaulted to 0
     */
    IntensityImageStudent();

	/**
     * @brief
     * construct a new IntensityImageStudent object which is a copy of other
     *
     * @param other
     */
    IntensityImageStudent(const IntensityImageStudent &other);

	/**
     * @brief
     * onstruct a new IntensityImageStudent object with given width and height
     *
     * @param width
     * @param height
     */
    IntensityImageStudent(const int width, const int height);

    /**
     * @brief
     * destroy the Intensity Image Student object
     */
    ~IntensityImageStudent();

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
    void set(const IntensityImageStudent &other);

    /**
     * @brief
     * set pixel on position (x,y) to pixel
     *
     * @param x
     * @param y
     * @param pixel
     */
    void setPixel(int x, int y, Intensity pixel);

    /**
     * @brief
     * set pixel on position i to pixel
     *
     * @param i
     * @param pixel
     */
    void setPixel(int i, Intensity pixel);

    /**
     * @brief
     * get Intensity value from position (x,y)
     *
     * @param x
     * @param y
     * @return Intensity
     */
    Intensity getPixel(int x, int y) const;

    /**
     * @brief
     * get Intensity value from position i
     *
     * @param i
     * @return Intensity
     */
    Intensity getPixel(int i) const;
};