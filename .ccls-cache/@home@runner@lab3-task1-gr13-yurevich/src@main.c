//
// create by Alexander Yurevich
//

// struct Car for storaging cost and a brand of a car
// function sotrCar for sorting array of cars
// function findMedian for finding median of array of cars

#include <stdio.h>

struct Car {
  int cost;
  char *brand;
};

void sortCars(struct Car *cars, int size) {
  for (int i = 0; i < size; i++)
    for (int j = 0; j < size - 1; j++) {
      if (cars[j].cost > cars[j + 1].cost) {
        struct Car temp;
        temp = cars[j];
        cars[j] = cars[j + 1];
        cars[j + 1] = temp;
      }
    }
}
