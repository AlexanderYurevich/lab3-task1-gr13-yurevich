//
// created by Alexander Yurevich
//

#ifndef INTERFACE_H
#define INTERFACE_H

// struct Car for storaging car data
// function sortCars for sorting array of Cars
// function findMedian for finding median of array of Cars



void sortCars(struct Car *cars, int size);

char *findMedian(struct Car *cars, int size);