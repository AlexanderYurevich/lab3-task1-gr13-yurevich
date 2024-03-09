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

char *findMedian(struct Car *cars, int size) {
  sortCars(cars, size);
  return cars[size / 2].brand;
}

int main() {
  struct Car cars[7];
  for (int i = 0; i < 7; i++) {
    printf("Enter brand and cost of a car\n");
    int i = scanf("%s %d", cars[i].brand, &cars[i].cost);
  }
  printf("The median is %s\n", findMedian(cars, 7));
  return 0;
}