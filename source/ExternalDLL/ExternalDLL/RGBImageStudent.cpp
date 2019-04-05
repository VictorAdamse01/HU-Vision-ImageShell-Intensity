#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
    values = new RGB[other.getHeight() * other.getWidth()];
    for (int i = 0; i < other.getHeight() * other.getWidth(); i++) {
        values[i] = other.values[i];
    }
}

RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height), values(new RGB[width * height]) {}

RGBImageStudent::~RGBImageStudent() { delete[] values; }

void RGBImageStudent::set(const int width, const int height) {
    Image::set(width, height);
    delete[] values;
    this->values = new RGB[width * height];
}

void RGBImageStudent::set(const RGBImageStudent &other) {
    Image::set(other.getWidth(), other.getHeight());
    delete[] values;
    values = new RGB[other.getHeight() * other.getWidth()];
    for (int i = 0; i < other.getHeight() * other.getWidth(); i++) {
        values[i] = other.values[i];
    }
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) { this->values[y * getWidth() + x] = pixel; }

void RGBImageStudent::setPixel(int i, RGB pixel) { this->values[i] = pixel; }

RGB RGBImageStudent::getPixel(int x, int y) const { return this->values[y * getWidth() + x]; }

RGB RGBImageStudent::getPixel(int i) const { return this->values[i]; }