<?php
    // trim 余分な改行や空白を削除
    // fgets 1行読み込む
    // STDIN 標準入力
    $name = trim(fgets(STDIN));
    echo "Hello " . $name . "\n";
    
    $number = trim(fgets(STDIN));
    echo $number * 100 . "\n";
    echo "おこずかい：" . ($number * 10) . "円";
?>
