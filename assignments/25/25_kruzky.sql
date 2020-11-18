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
-- Table structure for table `cop`
--

DROP TABLE IF EXISTS `cop`;
CREATE TABLE `cop` (
  `id_ziaka` int(10) unsigned NOT NULL default '0',
  `cop` char(20) NOT NULL default '',
  PRIMARY KEY  (`id_ziaka`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cop`
--


/*!40000 ALTER TABLE `cop` DISABLE KEYS */;
LOCK TABLES `cop` WRITE;
INSERT INTO `cop` VALUES (3,'AB 123456'),(4,'XY 654321');
UNLOCK TABLES;
/*!40000 ALTER TABLE `cop` ENABLE KEYS */;

--
-- Table structure for table `kruzky`
--

DROP TABLE IF EXISTS `kruzky`;
CREATE TABLE `kruzky` (
  `id_kruzku` int(10) unsigned NOT NULL auto_increment,
  `nazov` char(20) NOT NULL default '',
  PRIMARY KEY  (`id_kruzku`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `kruzky`
--


/*!40000 ALTER TABLE `kruzky` DISABLE KEYS */;
LOCK TABLES `kruzky` WRITE;
INSERT INTO `kruzky` VALUES (1,'pyrotechnickÃ½'),(2,'poÄ?Ã­taÄ?ovÃ½'),(3,'futbal');
UNLOCK TABLES;
/*!40000 ALTER TABLE `kruzky` ENABLE KEYS */;

--
-- Table structure for table `ucast_na_kruzku`
--

DROP TABLE IF EXISTS `ucast_na_kruzku`;
CREATE TABLE `ucast_na_kruzku` (
  `id_ziaka` int(10) unsigned NOT NULL default '0',
  `id_kruzku` int(10) unsigned NOT NULL default '0',
  PRIMARY KEY  (`id_ziaka`,`id_kruzku`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `ucast_na_kruzku`
--


/*!40000 ALTER TABLE `ucast_na_kruzku` DISABLE KEYS */;
LOCK TABLES `ucast_na_kruzku` WRITE;
INSERT INTO `ucast_na_kruzku` VALUES (1,1),(1,2),(1,3),(2,1),(3,1),(3,2),(4,1),(4,3);
UNLOCK TABLES;
/*!40000 ALTER TABLE `ucast_na_kruzku` ENABLE KEYS */;

--
-- Table structure for table `ziaci`
--

DROP TABLE IF EXISTS `ziaci`;
CREATE TABLE `ziaci` (
  `id_ziaka` int(10) unsigned NOT NULL auto_increment,
  `meno` char(20) NOT NULL default '',
  `priezvisko` char(30) NOT NULL default '',
  PRIMARY KEY  (`id_ziaka`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `ziaci`
--


/*!40000 ALTER TABLE `ziaci` DISABLE KEYS */;
LOCK TABLES `ziaci` WRITE;
INSERT INTO `ziaci` VALUES (1,'Andrej','ÄŽurovka'),(2,'EmÃ­lia','KuboviÄ?ovÃ¡'),(3,'Michal','Szabados'),(4,'Mineta','JurÃ¡Å¡kovÃ¡');
UNLOCK TABLES;
/*!40000 ALTER TABLE `ziaci` ENABLE KEYS */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

