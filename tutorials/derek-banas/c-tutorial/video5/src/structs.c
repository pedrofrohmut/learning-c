#include <stdio.h>

struct dogFavorites {
    char *food;
    char *friend;
};

typedef struct dog {
    const char *name;
    const char *breed;
    int avgHeightCm;
    int avgWeightLbs;
    struct dogFavorites favorites;
} Dog;

void getDogInfo(struct dog dog)
{
    printf("Name: %s, Breed: %s, AverageHeightCm: %d, AverageWeightLbs: %d\n",
           dog.name, dog.breed, dog.avgHeightCm, dog.avgWeightLbs);
}

void getMemoryLocations(struct dog dog)
{
    printf("Name location:   %d\n", dog.name);
    printf("Breed location:  %d\n", dog.breed);
    printf("Height location: %d\n", &dog.avgHeightCm);
    printf("Weight location: %d\n", &dog.avgWeightLbs);
}

void getDogFavorites(Dog dog)
{
    printf("%s loves %s and its friend is %s\n", 
           dog.name, dog.favorites.food, dog.favorites.friend);
}

// In C if you pass a struct as parameter (as value) it will create another struct a copy
// If you want to change the struct you have to pass it as a pointer (as reference)
void setDogWeight(Dog *dog, int weight)
{
    dog->avgWeightLbs = weight;
}

int main()
{
    struct dog cujo = {"Cujo", "Saint Bernard", 90, 264};
    getDogInfo(cujo);
    struct dog cujo2 = cujo;
    getMemoryLocations(cujo);
    getMemoryLocations(cujo2);
//------------------------------------------------------------------------------
    Dog benji = { "Benji", "Silky Terrier", 25, 9, { "Meat", "Joe Camp" } };
    getDogFavorites(benji);
//------------------------------------------------------------------------------
    printf("Before -----------------------------------------------------------\n");
    getDogInfo(benji);
    // to pass the pointer of a struct you need to use the & character
    setDogWeight(&benji, 12);
    printf("After ------------------------------------------------------------\n");
    getDogInfo(benji);
    return 0;
}
