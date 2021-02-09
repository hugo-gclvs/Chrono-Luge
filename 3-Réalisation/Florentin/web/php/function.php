<?php

function accesBDD(){

    try {
        $bdd = new PDO('mysql:host=localhost;dbname=test;charset=utf8', 'root', '');

        foreach ($bdd->query('SELECT * from FOO') as $row) {
            print_r($row);
        }
        $dbh = null;
    } catch (PDOException $e) {
        print "Error!: " . $e->getMessage() . "<br/>";
        die();
    }

}







