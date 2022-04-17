-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- ホスト: aurora-db-dbcluster.cluster-cf4skg58swca.ap-northeast-1.rds.amazonaws.com
-- 生成日時: 2021 年 11 月 20 日 13:54
-- サーバのバージョン： 5.7.12-log
-- PHP のバージョン: 7.2.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- データベース: `user196`
--
CREATE DATABASE IF NOT EXISTS `user196` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `user196`;

-- --------------------------------------------------------

--
-- テーブルの構造 `consumer_tbl`
--

CREATE TABLE `consumer_tbl` (
  `consumer_id` int(10) NOT NULL,
  `name` varchar(10) NOT NULL,
  `email` varchar(100) NOT NULL,
  `tel` varchar(11) NOT NULL,
  `address` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- テーブルのデータのダンプ `consumer_tbl`
--

INSERT INTO `consumer_tbl` (`consumer_id`, `name`, `email`, `tel`, `address`) VALUES
(1, 'sato', 'sato@example.com', '123456789', '東京都'),
(2, 'kato', 'kato@example.com', '234567891', '神奈川県'),
(3, 'tanaka', 'tanaka@example.com', '345678912', '埼玉県'),
(4, 'suzuki', 'suzuki@example.com', '456789123', '千葉県'),
(5, 'watanabe', 'watanabe@example.com', '567891234', '静岡県'),
(6, 'ito', 'ito@example.com', '678912345', '東京都'),
(7, 'yamamoto', 'yamamoto@example.com', '789123456', '山梨県'),
(8, 'nakamura', 'nakamura@example.com', '891234567', '北海道'),
(9, 'kobayashi', 'kobayashi@example.com', '912345678', '東京都'),
(10, 'kato', 'kato2@example.com', '103456789', '千葉県'),
(11, 'yoshida', 'yoshida@example.com', '023456789', '青森県'),
(12, 'yamada', 'yamada@example.com', '123056789', '東京都'),
(13, 'sasaki', 'sasaki@example.com', '123456709', '群馬県'),
(14, 'yamaguchi', 'yamaguchi@example.com', '123456799', '大阪府'),
(15, 'matsumoto', 'matsumoto@example.com', '120056789', '京都府'),
(16, 'inoue', 'inoue@example.com', '123490678', '東京都'),
(17, 'inoue2', 'inoue2@example.com', '223456789', '神奈川県'),
(18, 'saito', 'saito@example.com', '323456789', '大分県'),
(19, 'kitamura', 'kimura@example.com', '423456789', '千葉県'),
(20, 'hayashi', 'hayashi@example.com', '523456789', '東京都');

-- --------------------------------------------------------

--
-- テーブルの構造 `course_tbl`
--

CREATE TABLE `course_tbl` (
  `student_id` int(5) NOT NULL,
  `item_id` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- テーブルのデータのダンプ `course_tbl`
--

INSERT INTO `course_tbl` (`student_id`, `item_id`) VALUES
(1, 1),
(1, 2),
(1, 3),
(2, 1),
(2, 2),
(2, 3),
(3, 2),
(3, 3),
(4, 1),
(4, 2),
(4, 3),
(5, 2),
(5, 3),
(6, 2),
(6, 3),
(7, 2),
(7, 3),
(8, 2),
(9, 3),
(10, 2),
(10, 3),
(11, 2),
(11, 3),
(12, 1),
(12, 2),
(12, 3),
(13, 1),
(13, 2),
(13, 3),
(14, 1),
(14, 2),
(14, 3),
(15, 1),
(15, 2),
(15, 3),
(16, 2),
(16, 3),
(17, 1),
(17, 2),
(17, 3),
(18, 2),
(18, 3),
(19, 1),
(19, 2),
(19, 3),
(20, 1),
(20, 2),
(20, 3),
(21, 2),
(21, 3),
(22, 2),
(22, 3),
(23, 1),
(23, 2),
(23, 3),
(24, 2),
(25, 1),
(25, 2),
(25, 3),
(26, 2),
(27, 2),
(27, 3),
(28, 1),
(28, 2),
(28, 3),
(29, 1),
(29, 2),
(29, 3),
(30, 1),
(30, 2),
(30, 3),
(31, 1),
(31, 2),
(31, 3),
(32, 1),
(32, 2),
(32, 3),
(33, 3),
(34, 1),
(34, 2),
(34, 3),
(35, 1),
(35, 2),
(35, 3),
(36, 1),
(36, 2),
(36, 3),
(37, 1),
(37, 2),
(37, 3),
(38, 1),
(38, 2),
(38, 3),
(39, 3),
(40, 2),
(41, 1),
(41, 2),
(41, 3),
(42, 1),
(42, 2),
(42, 3),
(43, 1),
(43, 2),
(43, 3),
(44, 1),
(44, 2),
(44, 3);

-- --------------------------------------------------------

--
-- テーブルの構造 `deal_tbl`
--

CREATE TABLE `deal_tbl` (
  `deal_id` int(10) NOT NULL,
  `consumer_id` int(10) NOT NULL,
  `product_id` int(10) NOT NULL,
  `num` int(5) NOT NULL,
  `delivery_flg` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- テーブルのデータのダンプ `deal_tbl`
--

INSERT INTO `deal_tbl` (`deal_id`, `consumer_id`, `product_id`, `num`, `delivery_flg`) VALUES
(1, 1, 1, 1, 1),
(2, 1, 2, 2, 1),
(3, 2, 5, 10, 0),
(4, 3, 6, 1, 0),
(5, 4, 7, 1, 0),
(6, 5, 1, 3, 0),
(7, 6, 6, 10, 0);

-- --------------------------------------------------------

--
-- テーブルの構造 `item_tbl`
--

CREATE TABLE `item_tbl` (
  `item_id` int(1) NOT NULL,
  `item_name` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- テーブルのデータのダンプ `item_tbl`
--

INSERT INTO `item_tbl` (`item_id`, `item_name`) VALUES
(1, '国語'),
(2, '数学'),
(3, '英語'),
(4, 'プログラミング'),
(5, 'プログラミング'),
(6, 'プログラミング'),
(7, 'プログラミング');

-- --------------------------------------------------------

--
-- テーブルの構造 `product_tbl`
--

CREATE TABLE `product_tbl` (
  `product_id` int(10) NOT NULL,
  `product_name` varchar(100) NOT NULL,
  `price` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- テーブルのデータのダンプ `product_tbl`
--

INSERT INTO `product_tbl` (`product_id`, `product_name`, `price`) VALUES
(1, 'バスタオルS級', 4000),
(2, 'バスタオルA級', 3000),
(3, 'バスタオル', 2000),
(4, 'バスマット', 3000),
(5, 'フェイスタオル', 1000),
(6, 'ギフトセットS', 12000),
(7, 'ギフトセットA', 8000);

-- --------------------------------------------------------

--
-- テーブルの構造 `student_tbl`
--

CREATE TABLE `student_tbl` (
  `student_id` int(5) NOT NULL,
  `student_name` varchar(20) NOT NULL,
  `email` varchar(30) DEFAULT NULL,
  `tel` varchar(20) NOT NULL,
  `birthday` date NOT NULL,
  `join_date` date NOT NULL,
  `school_year` int(1) NOT NULL,
  `school_name` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- テーブルのデータのダンプ `student_tbl`
--

INSERT INTO `student_tbl` (`student_id`, `student_name`, `email`, `tel`, `birthday`, `join_date`, `school_year`, `school_name`) VALUES
(1, ' 板垣 勝昭', 'c72@mkwcezike.net', '9027383746', '2007-03-23', '2019-04-01', 2, 'あいう中学校'),
(2, '高瀬 奈々子', 'y0snh22vro@gwihry.net', '9056316530', '2007-06-27', '2020-04-01', 1, 'あいう中学校'),
(3, '宮本 小晴', 'vuut9s7yfei7s@kmlxlejt.jp', '8065361446', '2007-10-31', '2020-04-01', 1, 'あいう中学校'),
(4, '金谷 澄江', '_2ap41@wpqkpsir.net', '9076053857', '2007-07-14', '2020-04-01', 1, 'あいう中学校'),
(5, '水田 美佐子', 'zmoow@fcflki.net', '9076348810', '2007-09-29', '2020-04-01', 1, 'あいう中学校'),
(6, '三橋 咲奈', 'w8_e_oueiki6134@rwtipxj.net', '0', '2006-05-12', '2019-04-01', 2, 'いろは中学校'),
(7, '磯崎 綾香', 'nxt_leeb@ztlhzqjcc.jp', '9096954643', '2007-07-28', '2020-04-01', 1, 'あいう中学校'),
(8, '山下 葵衣', '492rn@mckdfk.net', '0', '2007-07-18', '2020-04-01', 1, 'あいう中学校'),
(9, '倉田 裕一', 'f4zrjds7g@ackziq.net', '8019183232', '2006-05-09', '2019-04-01', 2, 'いろは中学校'),
(10, '横尾 冬美香', 'k9c8aq04z@bnjxpaxdc.net', '0', '2006-12-30', '2019-04-01', 2, 'あいう中学校'),
(11, '渡部 留子', 'bqp4@wcrkct.net', '8091555206', '2007-12-13', '2020-04-01', 1, 'あいう中学校'),
(12, '露木 香織', 'epzbo@myrkgzbge.net', '8048743344', '2005-04-06', '2018-04-01', 3, 'いろは中学校'),
(13, '江口 美央', 'daf@tbpma.jp', '8014259648', '2007-11-22', '2020-04-01', 1, 'あいう中学校'),
(14, '亀井 美音', 'q24h4_oe6kjswtz6@ryjrqil.net', '8043022667', '2005-07-06', '2018-04-01', 3, 'いろは中学校'),
(15, '小澤 幸三', 'bbvmvvw7k8yw@utxnelr.jp', '0', '2006-07-07', '2019-04-01', 2, 'あいう中学校'),
(16, '遠山 遥', 'szqw0cg3rbe9ip@nndni.jp', '9056237909', '2007-07-11', '2020-04-01', 1, 'いろは中学校'),
(17, '柴田 椿', 'fgglkuvp8858zuc0@dvlwmy.net', '8071776592', '2007-07-14', '2020-04-01', 1, 'あいう中学校'),
(18, '相良 修子', 'w6mbspjp_8kyn@kminbt.jp', '8086124711', '2007-11-01', '2020-04-01', 1, 'あいう中学校'),
(19, '内田 喜咲', 'yr9l37v@dagxktdz.jp', '9061027962', '2006-07-03', '2019-04-01', 2, 'あいう中学校'),
(20, '林 彩子', 'p7wrhjmybw@gctql.net', '8049114514', '2007-12-08', '2020-04-01', 1, 'いろは中学校'),
(21, '宇野 康彦', 'fk0639gjq_etxuj5@mzwgfvirpd.jp', '9030075494', '2006-12-09', '2019-04-01', 2, 'あいう中学校'),
(22, '下川 孝太郎', 'z4zm3j5chzh@ijpetpfquf.jp', '9097254405', '2007-07-19', '2020-04-01', 1, 'いろは中学校'),
(23, '柳 喜八郎', 'rwopqarz_8of@ljrlaummhp.net', '9028993813', '2006-04-24', '2019-04-01', 2, 'いろは中学校'),
(24, '小関 優太', '68w9qt8n1mor7nnl@mgqqkqsyr.net', '9063851757', '2006-02-22', '2018-04-01', 3, 'あいう中学校'),
(25, '児島 知里', 'joc_gk1c32mvpwe0@slsxd.jp', '9073277115', '2008-03-19', '2020-04-01', 1, 'いろは中学校'),
(26, '三原 莉奈', 'uw73mxiyo@xjvxywfphd.jp', '9051936410', '2008-04-01', '2020-04-01', 1, 'いろは中学校'),
(27, '富沢 創', 'llrutt@pkgjxrtgmz.jp', '9082807210', '2008-01-29', '2020-04-01', 1, 'いろは中学校'),
(28, '赤松 当麻', 'jkdhz5y@gxpdn.jp', '8093545683', '2005-10-02', '2018-04-01', 3, 'あいう中学校'),
(29, '瀬川 麻奈', 'a2nm_ws2kve@krwajnqmw.net', '0', '2008-03-27', '2020-04-01', 1, 'あいう中学校'),
(30, '若林 長平', '_iw@koxjpvyxs.net', '0', '2006-04-05', '2019-04-01', 2, 'あいう中学校'),
(31, '岩崎 定雄', '6wikzp03w0@pevzlcxa.net', '9034104017', '2005-07-01', '2018-04-01', 3, 'いろは中学校'),
(32, '大関 由佳利', 'f5l4@estvdr.net', '9050540271', '2005-06-10', '2018-04-01', 3, 'いろは中学校'),
(33, '曽根 和仁', 't82klt74g8ps2k@vmwit.jp', '9010667763', '2007-10-21', '2020-04-01', 1, 'いろは中学校'),
(34, '五味 良彦', 'ilwsy@pyfgrsdq.net', '8083429861', '2006-02-17', '2018-04-01', 3, 'あいう中学校'),
(35, '大津 亨治', 'ul048@qoypdwazd.net', '0', '2006-11-21', '2019-04-01', 2, 'いろは中学校'),
(36, '石垣 明菜', 'eo6_xxai6o@idyllg.jp', '8081422428', '2007-12-28', '2020-04-01', 1, 'いろは中学校'),
(37, '風間 知子', 'z9etp4c0i@ccnmxbqft.net', '8085845576', '2005-06-13', '2018-04-01', 3, 'あいう中学校'),
(38, '曽我 栄三郎', 'sipxqu0so7_3kvl@gtzbw.jp', '8065036700', '2007-11-19', '2020-04-01', 1, 'あいう中学校'),
(39, '大森 章平', 'f2clgwqx6qe@rgykte.net', '0', '2005-09-09', '2018-04-01', 3, 'いろは中学校'),
(40, '須田 揚子', 'qckgy1pa@rgszygsnf.net', '0', '2008-03-05', '2020-04-01', 1, 'あいう中学校'),
(41, '峰 湊太', 'icf1udg6i08s@hozqqld.net', '0', '2005-10-17', '2018-04-01', 3, 'いろは中学校'),
(42, '堤 勇二', '201cbgx9m@egwerhj.jp', '0', '2006-04-02', '2019-04-01', 2, 'あいう中学校'),
(43, '香坂 花歩', 'x4k@klmyzlg.net', '8061565632', '2005-10-10', '2018-04-01', 3, 'あいう中学校'),
(44, '米山 結羽', 'qbnkz2z63@plfqkuzcu.net', '8075102586', '2007-03-27', '2019-04-01', 2, 'いろは中学校'),
(45, '⼤島直⼦', 'oshima@example.com', '08012121212', '2008-01-29', '0000-00-00', 1, 'あいう中学校');

-- --------------------------------------------------------

--
-- テーブルの構造 `teacher_tbl`
--

CREATE TABLE `teacher_tbl` (
  `teacher_id` int(2) NOT NULL,
  `teacher_name` varchar(20) NOT NULL,
  `email` varchar(50) NOT NULL,
  `tel` varchar(11) NOT NULL,
  `item_id` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- テーブルのデータのダンプ `teacher_tbl`
--

INSERT INTO `teacher_tbl` (`teacher_id`, `teacher_name`, `email`, `tel`, `item_id`) VALUES
(1, '吉岡 栄次郎', 'reohkfja@pijk.net', '1234567890', 1),
(2, '永島 紬', 'hlpifna_aorejk@mlfq.neth', '2345678901', 2),
(3, '横尾 雅彦', '98jlkkifakkaA@panuyx.net', '3456789012', 3),
(4, '奥野 一司', 'omhi_jureb_koi@jij.net', '4567890123', 2),
(5, '永島 紬', 'hlpifna_aorejk@mlfq.neth', '2345678901', 4);

-- --------------------------------------------------------

--
-- テーブルの構造 `test_score_tbl`
--

CREATE TABLE `test_score_tbl` (
  `test_id` int(5) NOT NULL,
  `student_id` int(5) NOT NULL,
  `item_id` int(1) NOT NULL,
  `score` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- テーブルのデータのダンプ `test_score_tbl`
--

INSERT INTO `test_score_tbl` (`test_id`, `student_id`, `item_id`, `score`) VALUES
(1, 1, 1, 33),
(1, 1, 2, 66),
(1, 1, 3, 33),
(1, 2, 1, 70),
(1, 2, 2, 91),
(1, 2, 3, 55),
(1, 3, 2, 34),
(1, 3, 3, 80),
(1, 4, 1, 72),
(1, 4, 2, 60),
(1, 4, 3, 64),
(1, 5, 2, 99),
(1, 5, 3, 78),
(1, 6, 2, 56),
(1, 6, 3, 34),
(1, 7, 3, 32),
(1, 8, 2, 82),
(1, 9, 3, 30),
(1, 10, 2, 36),
(1, 10, 3, 40),
(1, 11, 2, 62),
(1, 11, 3, 59),
(1, 12, 1, 75),
(1, 12, 2, 71),
(1, 12, 3, 37),
(1, 13, 1, 33),
(1, 13, 2, 34),
(1, 13, 3, 45),
(1, 14, 1, 60),
(1, 14, 2, 57),
(1, 14, 3, 60),
(1, 15, 1, 38),
(1, 15, 2, 85),
(1, 15, 3, 48),
(1, 16, 2, 87),
(1, 16, 3, 92),
(1, 17, 1, 88),
(1, 17, 2, 76),
(1, 17, 3, 34),
(1, 18, 2, 74),
(1, 18, 3, 68),
(1, 19, 1, 33),
(1, 19, 2, 34),
(1, 19, 3, 91),
(1, 20, 1, 64),
(1, 20, 2, 72),
(1, 20, 3, 75),
(1, 21, 2, 83),
(1, 21, 3, 30),
(1, 22, 2, 44),
(1, 22, 3, 65),
(1, 23, 1, 64),
(1, 23, 2, 76),
(1, 23, 3, 76),
(1, 25, 1, 48),
(1, 25, 2, 81),
(1, 25, 3, 83),
(1, 26, 2, 86),
(1, 27, 2, 40),
(1, 27, 3, 75),
(1, 28, 1, 66),
(1, 28, 2, 86),
(1, 28, 3, 47),
(1, 29, 1, 100),
(1, 29, 2, 55),
(1, 29, 3, 59),
(1, 30, 1, 95),
(1, 30, 2, 69),
(1, 30, 3, 90),
(1, 31, 1, 31),
(1, 31, 2, 33),
(1, 31, 3, 37),
(1, 32, 1, 40),
(1, 32, 2, 72),
(1, 32, 3, 62),
(1, 33, 3, 54),
(1, 34, 1, 54),
(1, 34, 2, 34),
(1, 34, 3, 62),
(1, 35, 1, 12),
(1, 35, 2, 24),
(1, 35, 3, 39),
(1, 36, 1, 90),
(1, 36, 2, 61),
(1, 36, 3, 54),
(1, 37, 1, 75),
(1, 37, 2, 34),
(1, 37, 3, 36),
(1, 38, 1, 47),
(1, 38, 2, 47),
(1, 38, 3, 75),
(1, 39, 3, 37),
(1, 40, 2, 78),
(1, 41, 1, 34),
(1, 41, 2, 60),
(1, 41, 3, 53),
(1, 42, 1, 66),
(1, 42, 2, 69),
(1, 42, 3, 72),
(1, 43, 1, 55),
(1, 43, 2, 42),
(1, 43, 3, 34),
(1, 44, 1, 75),
(1, 44, 2, 90),
(1, 44, 3, 49),
(2, 1, 1, 99),
(2, 1, 2, 78),
(2, 1, 3, 56),
(2, 2, 1, 34),
(2, 2, 3, 82),
(2, 3, 2, 30),
(2, 3, 3, 36),
(2, 4, 1, 40),
(2, 4, 2, 62),
(2, 4, 3, 59),
(2, 5, 2, 75),
(2, 5, 3, 71),
(2, 6, 2, 37),
(2, 6, 3, 33),
(2, 7, 2, 77),
(2, 7, 3, 34),
(2, 8, 2, 45),
(2, 9, 3, 60),
(2, 10, 2, 57),
(2, 10, 3, 60),
(2, 11, 2, 38),
(2, 11, 3, 85),
(2, 12, 1, 48),
(2, 12, 2, 75),
(2, 12, 3, 83),
(2, 13, 1, 30),
(2, 13, 2, 44),
(2, 13, 3, 65),
(2, 14, 1, 64),
(2, 14, 2, 76),
(2, 14, 3, 76),
(2, 15, 1, 48),
(2, 15, 2, 81),
(2, 15, 3, 83),
(2, 16, 2, 86),
(2, 16, 3, 40),
(2, 17, 1, 75),
(2, 17, 2, 66),
(2, 17, 3, 86),
(2, 18, 2, 47),
(2, 18, 3, 100),
(2, 19, 1, 55),
(2, 19, 2, 59),
(2, 19, 3, 95),
(2, 20, 1, 69),
(2, 20, 2, 90),
(2, 20, 3, 31),
(2, 21, 2, 33),
(2, 21, 3, 37),
(2, 22, 2, 40),
(2, 22, 3, 72),
(2, 23, 1, 62),
(2, 23, 2, 54),
(2, 23, 3, 54),
(2, 24, 2, 98),
(2, 25, 1, 34),
(2, 25, 2, 62),
(2, 25, 3, 12),
(2, 26, 2, 24),
(2, 27, 2, 39),
(2, 27, 3, 90),
(2, 28, 1, 61),
(2, 28, 2, 54),
(2, 28, 3, 75),
(2, 29, 1, 34),
(2, 29, 2, 36),
(2, 29, 3, 47),
(2, 30, 1, 47),
(2, 30, 2, 75),
(2, 30, 3, 37),
(2, 31, 1, 78),
(2, 31, 2, 34),
(2, 31, 3, 60),
(2, 32, 1, 53),
(2, 32, 2, 66),
(2, 32, 3, 69),
(2, 33, 3, 72),
(2, 34, 1, 55),
(2, 34, 2, 42),
(2, 34, 3, 34),
(2, 35, 1, 75),
(2, 35, 2, 90),
(2, 35, 3, 49),
(2, 36, 1, 33),
(2, 36, 2, 66),
(2, 36, 3, 33),
(2, 37, 1, 70),
(2, 37, 2, 91),
(2, 37, 3, 55),
(2, 38, 1, 34),
(2, 38, 2, 80),
(2, 38, 3, 72),
(2, 39, 3, 60),
(2, 40, 2, 64),
(2, 41, 1, 87),
(2, 41, 2, 92),
(2, 41, 3, 88),
(2, 42, 1, 76),
(2, 42, 2, 34),
(2, 42, 3, 74),
(2, 43, 1, 68),
(2, 43, 2, 33),
(2, 43, 3, 34),
(2, 44, 1, 91),
(2, 44, 2, 64),
(2, 44, 3, 72);

-- --------------------------------------------------------

--
-- テーブルの構造 `test_tbl`
--

CREATE TABLE `test_tbl` (
  `test_id` int(5) NOT NULL,
  `test_name` varchar(20) NOT NULL,
  `test_date` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- テーブルのデータのダンプ `test_tbl`
--

INSERT INTO `test_tbl` (`test_id`, `test_name`, `test_date`) VALUES
(1, '全学年統一テストその1', '2020-11-03'),
(2, '塾内テスト１', '2020-11-21');

--
-- ダンプしたテーブルのインデックス
--

--
-- テーブルのインデックス `consumer_tbl`
--
ALTER TABLE `consumer_tbl`
  ADD PRIMARY KEY (`consumer_id`);

--
-- テーブルのインデックス `course_tbl`
--
ALTER TABLE `course_tbl`
  ADD PRIMARY KEY (`student_id`,`item_id`);

--
-- テーブルのインデックス `deal_tbl`
--
ALTER TABLE `deal_tbl`
  ADD PRIMARY KEY (`deal_id`);

--
-- テーブルのインデックス `item_tbl`
--
ALTER TABLE `item_tbl`
  ADD PRIMARY KEY (`item_id`);

--
-- テーブルのインデックス `product_tbl`
--
ALTER TABLE `product_tbl`
  ADD PRIMARY KEY (`product_id`);

--
-- テーブルのインデックス `student_tbl`
--
ALTER TABLE `student_tbl`
  ADD PRIMARY KEY (`student_id`);

--
-- テーブルのインデックス `teacher_tbl`
--
ALTER TABLE `teacher_tbl`
  ADD PRIMARY KEY (`teacher_id`);

--
-- テーブルのインデックス `test_score_tbl`
--
ALTER TABLE `test_score_tbl`
  ADD PRIMARY KEY (`test_id`,`student_id`,`item_id`);

--
-- テーブルのインデックス `test_tbl`
--
ALTER TABLE `test_tbl`
  ADD PRIMARY KEY (`test_id`);

--
-- ダンプしたテーブルのAUTO_INCREMENT
--

--
-- テーブルのAUTO_INCREMENT `consumer_tbl`
--
ALTER TABLE `consumer_tbl`
  MODIFY `consumer_id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;

--
-- テーブルのAUTO_INCREMENT `deal_tbl`
--
ALTER TABLE `deal_tbl`
  MODIFY `deal_id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- テーブルのAUTO_INCREMENT `item_tbl`
--
ALTER TABLE `item_tbl`
  MODIFY `item_id` int(1) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- テーブルのAUTO_INCREMENT `product_tbl`
--
ALTER TABLE `product_tbl`
  MODIFY `product_id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- テーブルのAUTO_INCREMENT `student_tbl`
--
ALTER TABLE `student_tbl`
  MODIFY `student_id` int(5) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=47;

--
-- テーブルのAUTO_INCREMENT `teacher_tbl`
--
ALTER TABLE `teacher_tbl`
  MODIFY `teacher_id` int(2) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- テーブルのAUTO_INCREMENT `test_tbl`
--
ALTER TABLE `test_tbl`
  MODIFY `test_id` int(5) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
