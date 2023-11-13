<?php
echo '<h2>Exo 1</h2><br>';
$age = 18;

function calculAge($age) : int 
{
    return(2023 - $age);
}
echo(calculAge($age)) . '<br>';

echo '<h2>Exo 2</h2><br>';

$tab = [12, 15, 19, 2];

function moy(array $tab) : float 
{
    $result = 0;
    foreach($tab as $rank) {
        $result += $rank; // $rank => $tab[i]; $i++;
    }
    return ($result / sizeof($tab));
}
echo(moy($tab)) . '<br>';

echo '<h2>Exo 3</h2><br>';

$temp = 105.555497;
function calculTemp(float $temp) : string 
{
    if($temp < 0)
        return('solide');
    elseif($temp > 99)
        return('Gazeux');
    else
        return('liquide');
}

echo(calculTemp($temp));

echo '<h2>Exo 4</h2><br>';

$prix = 20;
$modulo = 20;

function calcPrix(int $prix, int $modulo) : float 
{
    $modulo = $modulo / 100 + 1;
    $prix *= $modulo;
    return($prix);
}

echo(calcPrix($prix, $modulo));

echo '<h2>Exo 5</h2><br>';



function printName(array $students) : void 
{
    foreach($students as $key => $marks) {
        echo $key . ' : ' . moy($marks) . '<br>';
    }
}

$students = [
    'Albert' => [12, 8, 9, 7, 13],
    'Michel' => [14, 13, 12, 11, 10],
    'Vincent' => [17, 16, 15, 18, 13],
];

echo(printName($students));

echo '<h2>Héros !!</h2><br>';



$heros = [
    'type' => $type,
    'hp' => $hp,
    'damages' => $damages,
    'armor' => $armor,
];

function makeClass(array $heros, string $name) : array
{
    if($name == 'Warrior')
    {
        $heros['type'] = 'Warrior';
        $heros['hp'] = 720;
        $heros['damages'] = 52;
        $heros['armor'] = 8;
    }
    elseif($name == 'Mage')
    {
        $heros['type'] = 'Mage';
        $heros['hp'] = 580;
        $heros['damages'] = 70;
        $heros['armor'] = 2;
    }
    elseif($name == 'Rogue')
    {
        $heros['type'] = 'Rogue';
        $heros['hp'] = 640;
        $heros['damages'] = 64;
        $heros['armor'] = 4;
    }
    else
        echo('erreur');
    return($heroes);
}
echo(printName($heroes, 'Mage'));


?>