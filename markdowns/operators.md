# Opérateurs

Les principals opérateurs sont : + - * / %

# Amusez vous !

Utilisez la boite de code ci-dessous pour tester le comportement des opérateurs.

```C runnable
#include <stdio.h>

int main() {
  int a = 3 + 2;
	printf("%d", a);
}

```


# Exercices



## Exercice 1
Écrire une fonction qui retourne la somme de deux entiers.
@[Exercice 1]({"stubs": ["operators.cpp"], "command": "./tests [addition]"})


## Exercice 2
Écrire une fonction qui retourne la différence de deux entiers.
@[Exercice 2]({"stubs": ["operators.cpp"], "command": "./tests [difference]"})


## Exercice 3
Écrire une fonction qui retourne la produit de deux entiers.
@[Exercice 3]({"stubs": ["operators.cpp"], "command": "./tests [produit]"})


## Exercice 4
Écrire une fonction qui retourne la ratio de deux entiers. En cas de division par zéro, vous devrez appeler la fonction throw(-1); afin d'indiquer une calcul erroné puis, retourner la valeur 0;
@[Exercice 4]({"stubs": ["operators.cpp"], "command": "./tests [ratio]"})


## Exercice 5
Écrire une fonction qui retourne la reste de la division euclydienne de a par b.
@[Exercice 5]({"stubs": ["operators.cpp"], "command": "./tests [modulo]"})


## Exercice 6
Écrire une fonction qui prend ramène une position moteur en degrée entre 0 et 360°. Attention, le comportement du compilateur avec des angles négatifs pourrait être surprenant. Il pourrait également changer en fonction du compilateur utilisé.
@[Exercice 6]({"stubs": ["angle.cpp"], "command": "./tests [op_angle_0_360]"})


## Exercice 7
Écrire une fonction qui prend ramène une position moteur en degrée entre -180° et +180°. Attention, le comportement du compilateur avec des angles négatifs pourrait être surprenant. Il pourrait également changer en fonction du compilateur utilisé.
@[Exercice 7]({"stubs": ["angle.cpp"], "command": "./tests [op_angle_180_180]"})
