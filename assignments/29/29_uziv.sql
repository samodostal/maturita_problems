-- MySQL dump 10.9
--
-- Host: localhost    Database: maturita
-- ------------------------------------------------------
-- Server version	4.1.11

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `pouzivatelia`
--

DROP TABLE IF EXISTS `pouzivatelia`;
CREATE TABLE `pouzivatelia` (
  `id_pouzivatel` int(10) unsigned NOT NULL auto_increment,
  `login` char(20) NOT NULL default '',
  `password` char(20) NOT NULL default '',
  PRIMARY KEY  (`id_pouzivatel`),
  KEY `login` (`login`,`password`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `pouzivatelia`
--


/*!40000 ALTER TABLE `pouzivatelia` DISABLE KEYS */;
LOCK TABLES `pouzivatelia` WRITE;
INSERT INTO `pouzivatelia` VALUES (1,'root','kacicka'),(2,'admin','f7GGw43'),(3,'user','123456');
UNLOCK TABLES;
/*!40000 ALTER TABLE `pouzivatelia` ENABLE KEYS */;


/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

