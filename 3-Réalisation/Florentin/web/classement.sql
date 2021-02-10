-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Hôte : 127.0.0.1:3307
-- Généré le : mer. 10 fév. 2021 à 08:42
-- Version du serveur :  10.4.13-MariaDB
-- Version de PHP : 7.3.21

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données : `classementcourses`
--

-- --------------------------------------------------------

--
-- Structure de la table `classement`
--

DROP TABLE IF EXISTS `classement`;
CREATE TABLE IF NOT EXISTS `classement` (
  `id` int(99) NOT NULL AUTO_INCREMENT,
  `LUGE` int(99) NOT NULL,
  `PSEUDO` varchar(20) NOT NULL,
  `TEMPS` varchar(10) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `LUGE` (`LUGE`),
  UNIQUE KEY `PSEUDO` (`PSEUDO`)
) ENGINE=InnoDB AUTO_INCREMENT=21 DEFAULT CHARSET=latin1;

--
-- Déchargement des données de la table `classement`
--

INSERT INTO `classement` (`id`, `LUGE`, `PSEUDO`, `TEMPS`) VALUES
(1, 1, 'jackie', '00:06:14'),
(2, 2, 'jean', '00:06:19'),
(3, 3, 'chris', '00:07:59'),
(4, 4, 'marie', '00:08:00'),
(5, 5, 'flaka', '00:08:14'),
(6, 6, 'thibaubt', '00:08:15'),
(7, 7, 'france', '00:08:20'),
(8, 8, 'floyd', '00:08:23'),
(9, 9, 'tata', '00:08:32'),
(10, 10, 'tyty', '00:08:40'),
(11, 11, 'tooo', '00:08:45'),
(12, 12, 'thierry2', '00:08:49'),
(13, 13, 'merguez', '00:08:59'),
(14, 14, 'theo', '00:09:00'),
(15, 15, 'charlene', '00:09:05'),
(16, 16, 'facha', '00:09:20'),
(17, 17, 'herry', '00:09:35'),
(18, 18, 'boucle', '00:09:40'),
(19, 19, 'thie', '00:09:45'),
(20, 20, 'pierre', '00:09:50');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
