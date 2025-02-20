## TRUNFO game

### Introduction

This README file presents the clarification about the TRUNFO game created in C.

The program was made as an exercise of programming in C language using basic commands as "printf" and "scanf" as well as declaring the variables and structuring the code.

Hope you can have some fun playing the game!


### Making the cards

First step is choosing the State: composed of a letter from A to H (representing 8 states of Brazil)
Second comes the Code: it is a number from 01 to 04 and will. Latter card code will be represented by the State+Code, forming the whole card code, like A01, B04, and so on.
Third is the City Name.
Then, you will fill the information that will be used in the game: Population, Area, BIP and Number of Turistic Spots.
Information like Population Density and BIP per capta will be automatically calculated.


### Instructions for the game

The game is simple:
You will get a card, than choose one of the stats of that card that you whink is the most strong and you and your oppenent will reveal the number of that stat. In this case, the highest number wins and takes the opponent card.


### Technical informations

State is a char variable.
City name is a char variable with an array of 50 characters, represented in the code as '[50]'.
Code is a char variable with a limit of 10 characters.
Area and BIP are given as float strings, as they can go to decimals.
Population and Turistic Spots are integers and don't need decimals.
The program itself is not complex and uses simples lines of code to make the cards: only "printf" and "scanf".
To not deviate from those two commands the is a command " %[^\n]" for the cityX variable. This commands enable us to use spaces in the string array, like "São Paulo". Without it we would need to use single word names or no spaces ("SaoPaulo).
Code is not given as a whole (like A01), instead I chose to make it a string of numbers (01, 02, 03, etc) so I can add it to the State variable latter. As it is, the state does not become repetitive to insert.
percapta is a variable to indicate BIP/ per person of the city and is calculated by dividing the total BIP and population.
Population density is expressed by the variable "dens" and is calculated by dividing the total population by the area of the city.