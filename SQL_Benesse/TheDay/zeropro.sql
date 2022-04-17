-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- ホスト: aurora-db-dbcluster.cluster-cf4skg58swca.ap-northeast-1.rds.amazonaws.com
-- 生成日時: 2021 年 11 月 20 日 02:54
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
-- データベース: `zeropro`
--

-- --------------------------------------------------------

--
-- テーブルの構造 `BS2004661_tbl`
--

CREATE TABLE `BS2004661_tbl` (
  `name` varchar(50) NOT NULL,
  `age` int(3) NOT NULL,
  `birthday` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- テーブルの構造 `consumer_tbl`
--

CREATE TABLE `consumer_tbl` (
  `consumer_id` int(10) NOT NULL,
  `name` varchar(10) NOT NULL,
  `email` varchar(100) NOT NULL,
  `tel` varchar(11) NOT NULL,
  `address` varchar(200) NOT NULL,
  `birthday` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- テーブルのデータのダンプ `consumer_tbl`
--

INSERT INTO `consumer_tbl` (`consumer_id`, `name`, `email`, `tel`, `address`, `birthday`) VALUES
(1, 'sato', 'sato@example.com', '123456789', '東京都', '2003-10-10'),
(2, '山本', 'hisakawa@example.com', '234567891', '鳥取県', '2005-12-05'),
(3, 'tanaka', 'tanaka@example.com', '345678912', '埼玉県', '1999-11-11'),
(4, 'suzuki', 'suzuki@example.com', '456789123', '千葉県', '0000-00-00'),
(5, 'watanabe', 'watanabe@example.com', '567891234', '静岡県', '0000-00-00'),
(6, 'ito', 'ito@example.com', '678912345', '東京都', '0000-00-00'),
(7, 'yamamoto', 'yamamoto@example.com', '789123456', '山梨県', '0000-00-00'),
(8, 'nakamura', 'nakamura@example.com', '891234567', '北海道', '0000-00-00'),
(9, 'kobayashi', 'kobayashi@example.com', '912345678', '東京都', '0000-00-00'),
(10, 'kato', 'kato2@example.com', '103456789', '千葉県', '0000-00-00'),
(11, 'yoshida', 'yoshida@example.com', '023456789', '青森県', '0000-00-00'),
(12, 'yamada', 'yamada@example.com', '123056789', '東京都', '0000-00-00'),
(13, 'sasaki', 'sasaki@example.com', '123456709', '群馬県', '0000-00-00'),
(14, 'yamaguchi', 'yamaguchi@example.com', '123456799', '大阪府', '0000-00-00'),
(15, 'matsumoto', 'matsumoto@example.com', '120056789', '京都府', '0000-00-00'),
(16, 'inoue', 'inoue@example.com', '123490678', '東京都', '0000-00-00'),
(17, 'inoue2', 'inoue2@example.com', '223456789', '神奈川県', '0000-00-00'),
(18, 'saito', 'saito@example.com', '323456789', '大分県', '0000-00-00'),
(19, 'kitamura', 'kimura@example.com', '423456789', '千葉県', '0000-00-00'),
(20, 'hayashi', 'hayashi@example.com', '523456789', '東京都', '0000-00-00'),
(21, 'oshima', 'osima@example.com', '234567890', '東京都', '0000-00-00'),
(22, 'oshima', 'oshima@example.com', '22222222', '東京都', '0000-00-00'),
(2147483647, 'aoi', 'aoi@example.com', '0000', '東京', '0000-00-00');

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
(7, 'ギフトセットA', 8000),
(8, '枕', 4500),
(9, '椅子', 2000),
(10, '定規', 200),
(12, '机', 7000),
(13, 'something', 1234),
(14, '鉛筆', 100),
(15, '時計', 5000),
(17, 'ゲーミングチェア', 39800),
(19, '目覚まし時計', 800),
(21, 'カレンダー', 550),
(22, 'バスタオル２', 3555),
(23, 'Camera', 10000),
(24, '目覚まし時計', 800),
(25, 'ローテーブル', 12000),
(26, 'ハンカチ', 500),
(27, 'ハンカチ', 500),
(42, 'sample', 110),
(99, '目覚まし時計', 800),
(100, 'チョコチップクッキー缶', 12500),
(101, 'hoge', 3000),
(102, 'piyo', 3000),
(103, 'blacksander', 32),
(104, 'ゲーミングチェア', 32000),
(105, 'myproduct', 12345),
(106, '学習用タブレット端末', 5000),
(107, '大学ノート', 200),
(108, 'キャンパスノート', 200),
(109, '製品名', 0),
(110, 'トラックパッド', 8000),
(111, 'レッドダイヤモンド', 11),
(118, 'クッキー', 100),
(200, '高い時計', 10000000),
(1007, '任意の商品', 12000),
(1124, '白米5kg', 2000),
(1125, '製品名', 1111),
(1126, '製品名', 4444),
(1127, 'ウーロン茶', 120),
(1128, '緑茶', 130),
(1129, '緑茶', 130),
(1130, '進研ゼミ11月号', 5000),
(1131, 'ドライヤー', 4500),
(1132, '時計', 1080),
(1133, '特上フェイスタオル', 2500),
(1134, '特上フェイスタオル', 2500),
(1135, 'ローテーブル', 12000),
(1136, 'Wireless Earbuds', 20000),
(1137, '消しゴム', 100),
(1138, '消しゴム', 100),
(1139, '消しゴム', 100),
(1140, 'ペン', 150),
(1141, 'ボールペン', 170),
(1142, '消しゴム', 80),
(1144, '電気スタンド', 1400),
(1145, 'テストプロダクト', 9999),
(1146, 'ぬいぐるみ', 800),
(1148, 'お菓子', 500),
(1150, 'pan', 234),
(1210, 'テレビ', 30000),
(1800, 'book', 1000),
(1801, 'pc', 50000),
(1802, 'サッカーボール', 4000),
(1803, '今治タオル', 30000),
(1804, '今治タオル', 30000),
(1805, 'ねり消し', 1000000),
(1806, '任意の商品', 0),
(1807, 'プロテイン', 10000),
(1808, 'hoge', 1500),
(1809, 'カメラ', 14800),
(2617, 'でっかいエビ', 777),
(3939, 'miku', 25252),
(3941, '漫画', 400),
(3942, 'ハンドタオル', 500),
(3943, '万年筆', 10000),
(3944, '高級万年筆', 100000),
(3945, '二段ベッド', 5000),
(3946, '本棚', 8000),
(3947, '万年筆', 20000),
(3949, '定規', 2000),
(3950, 'スマートフォン', 50000),
(3951, 'スマートフォン', 50000),
(3952, '今治タオル', 10000),
(3953, '高級', 2147483647),
(3954, '', 0),
(3955, '任意', 0),
(3956, '掃除機', 12800),
(3957, '掃除機', 12800);

-- --------------------------------------------------------

--
-- テーブルの構造 `user229_tbl`
--

CREATE TABLE `user229_tbl` (
  `name` text,
  `age` int(11) DEFAULT NULL,
  `birth` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- ダンプしたテーブルのインデックス
--

--
-- テーブルのインデックス `consumer_tbl`
--
ALTER TABLE `consumer_tbl`
  ADD PRIMARY KEY (`consumer_id`);

--
-- テーブルのインデックス `deal_tbl`
--
ALTER TABLE `deal_tbl`
  ADD PRIMARY KEY (`deal_id`);

--
-- テーブルのインデックス `product_tbl`
--
ALTER TABLE `product_tbl`
  ADD PRIMARY KEY (`product_id`);

--
-- ダンプしたテーブルのAUTO_INCREMENT
--

--
-- テーブルのAUTO_INCREMENT `consumer_tbl`
--
ALTER TABLE `consumer_tbl`
  MODIFY `consumer_id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2147483647;

--
-- テーブルのAUTO_INCREMENT `deal_tbl`
--
ALTER TABLE `deal_tbl`
  MODIFY `deal_id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- テーブルのAUTO_INCREMENT `product_tbl`
--
ALTER TABLE `product_tbl`
  MODIFY `product_id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3958;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
