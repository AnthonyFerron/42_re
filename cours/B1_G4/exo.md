
## Bases de PHP

1. Créer une fonction qui prend en paramètre un entier, représentant un âge, la fonction doit donner en quelle année la personne est née.
   (par soucis de simplicité, on considère que l'année est 2023 en dur)


2. Créer une fonction, qui prend en paramètre un tableau et renvoie la moyenne des valeurs.

   Tester avec ce tableau :
   
```php
[12, 15, 19, 2]
```

3. Créer une fonction, qui prend en paramètre un float étant la température d’un volume d’eau.
   On veut savoir dans quel état est l’eau : solide, liquide ou gaz
   La fonction renvoie un string correspondant à l'une des trois possibilités.
   (PS : positif => liquide, négatif => solide, au dela de 100 => gaz)


4. Créer une fonction, qui prend en paramètre un prix (float) et un pourcentage (float).

   La fonction doit renvoyer le prix augmenté du pourcentage


5. On souhaite stocker les notes d'étudiants, vous utiliserez un tableau associatif pour ça

   Créer une fonction qui prend en paramètre un tableau associatif de notes et renvoie une chaîne de caractères concaténant le nom de l'étudiant avec sa moyenne

   Données :
   
```php

    // Tableau pris en entrée de la fonction
   $students = [
        'Albert' => [12, 8, 9, 7, 13],
        'Michel' => [14, 13, 12, 11, 10],
        'Vincent' => [17, 16, 15, 18, 13],
   ]

    // Chaîne de caractères en sortie
    'Albert : 9.8'

```

## Pour la suite du TP, nous allons simuler un combat de héros


1. Faites une fonction de nom 'createHero' qui prend en paramètres 1 argument :
- $type : le type du héro demandé (Warrior, Mage, Rogue, etc)
- Et renvoie un tableau


Seulement pour le moment, on ne peut que créer que des Warrior, Mage et Rogue.


En fonction du paramètre demandé, la fonction doit retourner un tableau associatif sous cette forme :

```php
[
    'type' => $type,
    'hp' => $hp,
    'damages' => $damages,
    'armor' => $armor,
]
```

Les stats vont variées en fonction du type demandé :

- Warrior
  - hp : 720
  - damages: 52
  - armor : 8
  
- Mage
   - hp : 580
   - damages: 70
   - armor : 2

- Rogue
   - hp : 640
   - damages: 64
   - armor : 4

2. Créer une fonction de nom 'attack' qui prend en argument deux tableaux de héros : $heroAtk, $heroDef et renvoie un bool

   La fonction doit faire "combattre" chaque héros chacun à leur tour :
   - $heroAtk représente le héros attaquant
   - $heroDef représente le héros défenseur
   - $heroAtk va infliger ses dégâts à $heroDef
   - Les dégâts sont égaux à la clé 'damages' du tableau
   - Les dégâts subit sont réduit par l'armure de $heroDef (il s'agit d'un pourcentage, soit 8% par exemple)
   - Puis on retire à la clé 'hp' de $hero les dégâts qu'il a subit
   - Si les 'hp' de $heroDef passent en dessous de 0 ou sont égals à 0, alors on renvoie true
   - Sinon on renvoie false

3. Simuler un combat entre deux héros

Appeler la fonction faite précédemment jusqu'à ce qu'un héros meurt
Vous aurez besoin d'une boucle pour cela, et on considère que les héros se tapent dessus chacun leur tour

Par exemple :

```php
$hero1 = createHero('Warrior');
$hero2 = createHero('Mage');

attack($hero1, $hero2);
attack($hero2, $hero1);
```

On affichera à la fin le nom du héros gagnant
   


