#include <stdio.h>

int main() {
    //variables
    int spot1, spot2;
    int option,information;
    unsigned long int pop1, pop2;
    float pib1, pib2, area1, area2, dens1, dens2, percapita1, percapita2;
    float super1, super2;
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
    printf("Brute Internal Product (in billions): ");
    scanf("%f", &pib1);
    printf("Number of Turistic Spots: ");
    scanf("%d", &spot1);

    //calculating population density and BIP per capita of CARD 1
    //population density
    dens1 = (float)pop1/(float)area1;

    //BIP per capita
    percapita1 = (pib1*1000000000)/(float)pop1;

    //calculating super power value
    super1 = (float)pop1 + (float)area1 + pib1 + (float)spot1 + percapita1 + (1/dens1);

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
    scanf("%d", &spot2);

    //calculating population density and BIP per capita of CARD 2
    //population density
    dens2 = (float)pop2/(float)area2;

    //BIP per capita
    percapita2 = (pib2*1000000000)/(float)pop2;

    //calculating super power value
    super2 = (float)pop2 + (float)area2 + pib2 + (float)spot2 + percapita2 + (1/dens2);


    printf("\n\nThe cards you created are: ");
    //printing the information card1
    printf("\n\nCard Code: %c%s\n", state1, code1);
    printf("State: %c\n", state1);
    printf("City Name: %s\n", city1);
    printf("Population: %d\n", pop1);
    printf("City Area: %.2f\n", area1);
    printf("BIP: %.2f billions of BRL\n", pib1);
    printf("Turistic Spots: %d\n", spot1);
    printf("Population Density: %.2f hab/km2\n", dens1);
    printf("BIP per capita: %.2f BRL\n", percapita1);
    printf("SUPER POWER: %.2f\n", super1);

    //printing the information card2
    printf("\nCard Code: %c%s\n", state2, code2);
    printf("State: %c\n", state2);
    printf("City Name: %s\n", city2);
    printf("Population: %d\n", pop2);
    printf("City Area: %.2f\n", area2);
    printf("BIP: %.2f billions of BRL\n", pib2);
    printf("Turistic Spots: %d\n", spot2);
    printf("Population Density: %.2f hab/km2\n", dens2);
    printf("BIP per capita: %.2f BRL\n", percapita2);
    printf("SUPER POWER: %.2f\n", super2);    
    
    printf("\nNo information will be shown, continue top the next step of the game\n");

    //Card comparison
    //this will determine what card wins in the chosen category
    printf("\nChoose one category from the cards (1-7): ");
    printf("\n1 - Population");
    printf("\n2 - Area");
    printf("\n3 - BIP");
    printf("\n4 - Turistic Spots");
    printf("\n5 - Population Density");
    printf("\n6 - Bip per capita");
    printf("\n7 - SUPER POWER\n");
    printf("\nCategory: ");
    scanf("%d", &option);

    //declaration of the winner
    //if population is chosen
    if (option == 1){
        if (pop1 > pop2){
            printf("\nCARD 1 WINS (%s with %d)", city1, pop1);
        }
        else{
            printf("\nCARD 2 WINS (%s with %d)", city1, pop2);
        }
    }

    //if area is chosen
    if (option == 2){
        if (area1 > area2){
            printf("\nCARD 1 WINS (%s with %.2f)", city1, area1);
        }
        else{
            printf("\nCARD 2 WINS (%s with %.2f)", city2, area2);
        }
    }

    //if BIP is chosen
    if (option == 3){
        if (pib1 > pib2){
            printf("\nCARD 1 WINS (%s with %.2f)", city1, pib1);
        }
        else{
            printf("\nCARD 2 WINS (%s with %.2f)", city2, pib2);
        }
    }

    //if turistic spots is chosen
    if (option == 4){
        if (spot1 > spot2){
            printf("CARD 1 WINS (%s with %d)", city1, spot1);
        }
        else{
            printf("CARD 2 WINS (%s with %d)", city2, spot2);
        }
    }

    //if population density is chosen
    if (option == 5){
        if (dens1 < dens2){
            printf("CARD 1 WINS (%s with %.2f)", city1, dens1);
        }
        else{
            printf("CARD 2 WINS (%s with %.2f)", city2, dens2);
        }
    }

    //if BIP per capita is chosen
    if (option == 6){
        if (percapita1 > percapita2){
            printf("CARD 1 WINS (%s with %.2f)", city2, percapita1);
        }
        else{
            printf("CARD 2 WINS (%s with %.2f)", city2, percapita2);
        }
    }

    //if SUPER POWER was chosen
    if (option == 7){
        if (super1 > super2){
            printf("CARD 1 WINS (%s with %.2f)", city1, super1);
        }
        else{
            printf("CARD 2 WINS (%s with %.2f)", city2, super2);
        }
    }

    return 0;
}