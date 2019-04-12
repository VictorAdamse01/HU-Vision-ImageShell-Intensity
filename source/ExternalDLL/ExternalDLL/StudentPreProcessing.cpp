#include "StudentPreProcessing.h"
#include "IntensityImageStudent.h"
#include "RGBImageStudent.h"

/**
 * @brief
 * converts a RGBImage to a new *IntensityImage
 *
 * @param image
 * @return IntensityImage*
 */
IntensityImage *StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
    IntensityImageStudent *new_img = new IntensityImageStudent(image.getWidth(), image.getHeight());
    for (int i = 0; i < image.getWidth() * image.getHeight(); i++) {
        RGB pixel = image.getPixel(i);
        new_img->setPixel(i, pixel.r * 0.3f + pixel.g * 0.59f + pixel.b * 0.11f);
    }

    return new_img;
}

IntensityImage *StudentPreProcessing::stepScaleImage(const IntensityImage &image) const { return nullptr; }

IntensityImage *StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const { return nullptr; }

IntensityImage *StudentPreProcessing::stepThresholding(const IntensityImage &image) const { return nullptr; }