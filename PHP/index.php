<link rel="shortcut icon" href="favicon.ico">

<?php
echo '<h3>Вычисление значения константы e = 2.71828183:</h3>';
$f = 1;
$e = 2;
$start = microtime(true);
for($i = 2; $i <= 10000; $i++){
    $f /= $i;
    $e += $f; 
}
echo 'e = ', $e, '<br/>';
echo 'time = ', microtime(true) - $start;

echo '<h3>Сумма и среднее арифметическое элементов массива:</h3>';
$arr = [2, 88, 6, 1, 3, 20];
$arr['apple'] = 100;
unset($arr[1]);
//error_reporting(0);
$sum = 0;
foreach($arr as $i => $val){
    echo 'arr[', $i, '] = ', $arr[$i], '<br/>';
    $sum+=$arr[$i];
    $avg = $sum / count($arr);
}
echo '<br/>';
echo 'sum = ', $sum, '<br/>';
echo 'avg = ', $avg;
echo '<pre>';
//var_dump($arr);
print_r($arr);
echo '</pre>';

echo '<h3>Массивы:</h3>';
echo '<pre>';
$arr = [3];
$arr[1] = 7;
$arr[] = 123;
$arr[15] = 99;
$arr[] = 16;
$arr['banan'] = 11;
$arr[] = 123;
$arr[] = [7,8,9];
$arr['cars']['audi'] = ['wheel' => 4, 'glass_front' => true];
unset($arr[15]);
print_r($arr);
echo '</pre>';
if(!isset($arr[129])){
    echo 'Не бывает элемента n(129)!';
}

echo '<h3>Выведите по буквам в столбик название футбольного клуба "Заря":</h3>';
$name = 'abcdЗря';
var_dump($name);
echo '<br/>';
echo 'size = ', mb_strlen($name), '<br/>';
/*
for($i = 0; $i < strlen($name); $i++){
    echo $name[$i], ' ';
}
echo '<br/>';
*/
for($i = 0; $i < mb_strlen($name); $i++){
    echo $name[$i], '<br/>';
}
?>
<a name="end"></a>