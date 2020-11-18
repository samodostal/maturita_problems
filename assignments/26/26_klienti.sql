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
-- Table structure for table `klienti`
--

DROP TABLE IF EXISTS `klienti`;
CREATE TABLE `klienti` (
  `id_klienta` int(10) unsigned NOT NULL auto_increment,
  `nazov` char(30) NOT NULL default '',
  `ico` char(15) NOT NULL default '',
  `rabat` float NOT NULL default '0',
  PRIMARY KEY  (`id_klienta`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `klienti`
--


/*!40000 ALTER TABLE `klienti` DISABLE KEYS */;
LOCK TABLES `klienti` WRITE;
INSERT INTO `klienti` VALUES (1,'ValÃºÅ¡ek Computers','123456789',0.15),(2,'EuroComp','010101010',0.1),(3,'PMD Comp','314159265',0.75),(4,'SpMNDaG','271828182',0.02);
UNLOCK TABLES;
/*!40000 ALTER TABLE `klienti` ENABLE KEYS */;


/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
