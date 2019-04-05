#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	values = new Intensity[other.getWidth() * other.getHeight()];
	for (int i = 0; i < other.getWidth() * other.getHeight(); i++){
	    values[i] = other.values[i];
	}
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height), values(new Intensity[width * height]) {
}

IntensityImageStudent::~IntensityImageStudent() {
    delete[] values;
}

void IntensityImageStudent::set(const int width, const int height) {
    Image::set(width,height);
    delete[] values;
	this->values = new Intensity[width*height];
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	Image::set(other.getWidth(),other.getHeight());
	delete[] values;
    values = new Intensity[other.getWidth() * other.getHeight()];
    for (int i = 0; i < other.getWidth() * other.getHeight(); i++){
        values[i] = other.values[i];
    }
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	this->values[y * getWidth() + x] = pixel;
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	this->values[i] = pixel;
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	return this->values[y * getWidth() + x];
}

Intensity IntensityImageStudent::getPixel(int i) const {
	return this->values[i];
}