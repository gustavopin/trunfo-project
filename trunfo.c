#include <stdio.h>

int main() {
    //variables
    int pop1, pop2, point1, point2;
    float pib1, pib2, area1, area2, dens1, dens2, percapita1, percapita2;
    char city1[50], city2[50], code1[10], code2[10];
    char state1, state2;

    //Welcome and Instructions
    printf("Hi, welcome to Super Trunfo! Here are the instructions:");
    printf("\nYou will start using by typing the state the city is from (from A to H)");
    printf("\nThan, type the card code from 01 to 04");
    printf("\nLast just type rest of the information: City Name, Population, Area, BIP and Number of Turistic Points");

    //Creating the cards
    //card1
    printf("\n\nBellow you will type the informations about Card 1: \n");
    printf("State: ");
    scanf(" %c", &state1);
    printf("Code: ");
    scanf("%s", &code1);
    printf("City Name: ");
    scanf(" %[^\n]", &city1);
    printf("Population: ");
    scanf("%d", &pop1);
    printf("City Area (km2): ");
    scanf("%f", &area1);
    printf("Brute Internal Product (billions): ");
    scanf("%f", &pib1);
    printf("Number of Turistic Spots: ");
    scanf("%d", &point1);

    //calculating population density and BIP per capita of CARD 1
    //population density
    dens1 = (float) pop1/area1;

    //BIP per capita
    percapita1 = (float) pib1/pop1;

    //card2
    printf("\n\nBellow you will type the informations about Card 2: \n\n");
    printf("State: ");
    scanf(" %c", &state2);
    printf("Code: ");
    scanf("%s", &code2);
    printf("City Name: ");
    scanf(" %[^\n]", &city2);
    printf("Population: ");
    scanf("%d", &pop2);
    printf("City Area (km2): ");
    scanf("%f", &area2);
    printf("Brute Internal Product (in billions): ");
    scanf("%f", &pib2);
    printf("Number of Turistic Spots: ");
    scanf("%d", &point2);

    //calculating population density and BIP per capita of CARD 2
    //population density
    dens2 = (float) pop2/area2;

    //BIP per capita
    percapita2 = (float) pib2/pop2;
    printf("\n\nThe cards you created are: ");

    //printing the information card1
    printf("\n\nCard Code: %c%s\n", state1, code1);
    printf("State: %c\n", state1);
    printf("City Name: %s\n", city1);
    printf("Population: %d\n", pop1);
    printf("City Area: %.2f\n", area1);
    printf("BIP: %.2f billions of BRL\n", pib1);
    printf("Turistic Spots: %d\n", point1);
    printf("Population Density: %.2f hab/km2\n", dens1);
    printf("BIP per capita: %.2f BRL\n", percapita1);

    //printing the information card2
    printf("\nCard Code: %c%s\n", state2, code2);
    printf("State: %c\n", state2);
    printf("City Name: %s\n", city2);
    printf("Population: %d\n", pop2);
    printf("City Area: %.2f\n", area2);
    printf("BIP: %.2f billions of BRL\n", pib2);
    printf("Turistic Spots: %d\n", point2);
    printf("Population Density: %.2f hab/km2\n", dens1);
    printf("BIP per capita: %.2f BRL\n", percapita1);
    
    return 0;
}