# Bistromatic

- 01 - syntax errors : 91.7% [:green_square::green_square::green_square::green_square::green_square:]
- 02 - addition : 100.0% [:green_square::green_square::green_square::green_square::green_square:]
- 02.5 - addition : 100.0% [:green_square::green_square::green_square::green_square::green_square:]
- 03 - substraction : 100.0% [:green_square::green_square::green_square::green_square::green_square:]
- 03.5 - substraction : 100.0% [:green_square::green_square::green_square::green_square::green_square:]
- 04 - multiplication : 100.0% [:green_square::green_square::green_square::green_square::green_square:]
- 04.5 - multiplication : 100.0% [:green_square::green_square::green_square::green_square::green_square:]
- 05 - division : 81.8% [:green_square::green_square::green_square::green_square::green_square:]
- 05.5 - division : 90.9% [:green_square::green_square::green_square::green_square::green_square:]
- 06 - modulo : 81.8% [:green_square::green_square::green_square::green_square::green_square:]
- 06.5 - modulo : 72.7% [:orange_square::orange_square::orange_square::orange_square::orange_square:]
- 07 - base and operators : 66.7% [:orange_square::orange_square::orange_square::orange_square::orange_square:]
- 07.5 - base and operators : 66.7% [:orange_square::orange_square::orange_square::orange_square::orange_square:]
- 08 - eval expr : 50.0% [:orange_square::orange_square::orange_square::orange_square::orange_square:]
- 08.5 - eval expr : 50.0% [:orange_square::orange_square::orange_square::orange_square::orange_square:]

## _What is the Bistromatic?_

 The Bistromatic is a 1st year project of Epitech, which simply is a calculator that can handle infinite numbers.
 That means that calculations and different values can be more than the maximum value of an 32, 64, or even more bits variable.
 In order to achieve such a feature, we used strings to handle calculation. Rather than simply throwing a calculation between integers variables,
 we used the same way young learners do: we calculate by hand, and we carry the numbers each time its result value is superior to 10.

## _Features_

 As mentionned before, the bistromatic handle infinite calculations, and many more! Priorities for example, are handled using parenthesis or also
 just operators priorities. Size of the result or of the calculation doesn't matter, you can calculate anything you want. Also, the Bistromatic is
 capable of converting your calculations in different bases. However, the output of the result will always be in Base 10.

## _How did we do it?_

 The way to input the calculation isn't the same as a normal calculator. The way we handled that is by reading the 3 differents inputs.
 The addition is handled just like one of our previous project, the InfinAdd, so we won't go too much in details about it here. The substraction also is
 a derived method of the InfinAdd.
 The multiplication however, is handled just like you would do in a hand calcul, which made it one of the hardest part of this project, especially the
 handling of negatives and special cases.
 The division, on the contrary, wasn't the hardest part since it mainly only needs the addition (or substraction depending on how you want to handle the logic)
 and the multiplication. The rest was just basic algorithmy.
 The modulo also was an easy part, as it only needed the division, multiplication and a single substraction.

## _Usage_

`make` pour compiler

`./calc -h` pour voir l'usage dans le terminal

Pour lancer la bistro-matic, il faut ??crire une commande similaire ?? celle ci-dessous, compos?? de trois parties :
`[OPERATION] | ./calc [BASE] [OPERATORS] [SIZE_READ] ; echo`

exemple : `echo ???3+6??? | ./calc 0123456789 ???()+-*/%??? 3 ; echo`

## _What we would like to add in the future_

- [x] GUI
- [ ] Better support of custom bases
