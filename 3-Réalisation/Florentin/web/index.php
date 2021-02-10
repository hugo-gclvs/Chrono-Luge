<?php

    try{
        $bdd = new PDO('mysql:host=localhost:3308;dbname=classement', 'root', '');
    }
    catch (Exception $e)
    {
        die('Erreur : ' . $e->getMessage());
    }

$n1 = $bdd->query('SELECT * FROM classement where id = 1');
$n2 = $bdd->query('SELECT * FROM classement where id = 2');
$n3 = $bdd->query('SELECT * FROM classement where id = 3');
$n4 = $bdd->query('SELECT * FROM classement where id = 4');
$n5 = $bdd->query('SELECT * FROM classement where id = 5');
$n6 = $bdd->query('SELECT * FROM classement where id = 6');
$n7 = $bdd->query('SELECT * FROM classement where id = 7');
$n8 = $bdd->query('SELECT * FROM classement where id = 8');
$n9 = $bdd->query('SELECT * FROM classement where id = 9');
$n10 = $bdd->query('SELECT * FROM classement where id = 10');

while ($n1=$reponse->fetch())
{


        echo  $n1['PSEUDO'];
        echo "<br>";
        echo $donnees['LUGE'];
        echo "<br>";
        echo $donnees['id'];
    echo "<br>";

    }










?>

