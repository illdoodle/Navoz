<?php
echo '<h3>Вычисление значения константы e = 2.71828183:</h3>';
$n = 10;
$f = 1;
$e = 2;
$start = microtime(true);
for($i = 2; $i <= $n; $i++){
    $f /= $i;
    $e += $f; 
}
echo 'e = ', $e, '<br/>';
echo 'time = ', microtime(true) - $start;
?>