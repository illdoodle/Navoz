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
/*
echo 'size = ', mb_strlen($name), '<br/>';
for($i = 0; $i < strlen($name); $i++){
    echo $name[$i], ' ';
}
echo '<br/>';
for($i = 0; $i < mb_strlen($name); $i++){
    echo $name[$i], '<br/>';
}
*/

echo '<h3>Сколько полных минут и часов содержится в x секундах?</h3>';
$n = 3559; //Секунды
echo $n, ' сек.', '<br/>';
echo 'Часов = ', (int)($n / 60 / 60), '<br/>';
echo 'Минут = ', (int)($n / 60) % 60, '<br/>';
echo 'Секунд = ', $n % 60; 

echo '<h3>В доме 9 этажей, на каждом этаже одного подъезда по 4 квартиры. В каком подъезде, и на каком этаже находится n-я квартира?</h3>';
$n = 36;
echo 'Номер квартиры = ', $n, '<br/>';
echo 'Дом = ', (int)(($n - 1)/ 9 / 4) + 1, '<br/>';
echo 'Этаж = ', (int)(($n - 1) / 4) % 9 + 1;

echo '<h3>От бревна длиной L отпиливают куски длиной x. Сколько кусков максимально удастся отпилить?</h3>';
$l = 36; 
$x = 5; 
echo 'Длина бревна = ', $l, '<br/>';
echo 'Длина отпиливаемого куска = ', $x, '<br/>';
echo 'Максимум отпиливаемых целых кусков = ', (int)($l / $x);

echo '<h3>В массиве из 10 элементов определить количество элементов, значения которых больше среднего арифметического всех элементов. 
        Значения элементов массива - случайные числа от 5 до 10.</h3>';
$arr = [6, 5, 6, 8, 7, 9, 10, 7, 5, 9];
$sum = 0; 
for($i = 0; $i < count($arr); $i++){   
    $sum = 0;
    $sum+=$arr[$i];
}
$sarif = $sum / count($arr);
echo 'Среднее арифметическое чисел = ', $sarif, '<br/>';
echo 'Элементы больше среднего арифметического: <br/>';
for($i = 0; $i < count($arr); $i++){   
    if($arr[$i] > $sarif){
        echo 'Элемент ', $arr[$i], ' под номером ', $i, '<br/>';
    }
}

echo '<h3>Обнулить в массиве все числа, которые повторяются более двух раз. Первые два элемента оставлять.</h3>';
$arr = [4, 4, 4, 7, 6, 1, 1, 77, 13, 13, 23, 1, 123, 8853, 19230];
echo 'До и после обнуления: <br/>';
for($i = 0; $i < count($arr); $i++){
    echo $arr[$i], ' ';
}
echo '<br>';
for($i = 3; $i < count($arr); $i++){
    $count = 0;
    for($j = $i + 1; $j < count($arr); $j++){
        if($arr[$i] == $arr[$j]){
          $count++;
          if($count >= 2){
            $arr[$i] = 0;
            $arr[$j] = 0;
          }
        }
    }
}
//Не придумал как обнулить элемент между крайними элементами, разве что создать новый массив который будет хранить повторяющиеся числа и уже потом их обнулять с помощью него.
for($i = 0; $i < count($arr); $i++){
    echo $arr[$i], ' ';
}

echo '<h3>Создайте массив из 4 случайных целых чисел из отрезка [10;99], выведите его на экран в строку. 
Определить и вывести на экран сообщение о том, является ли массив строго возрастающей последовательностью.</h3>';
error_reporting(0);
//$arr[5]; 
$arr = [88, 66, 77, 100];
echo 'Массив: ';
for($i = 0; $i < count($arr); $i++){
    echo $arr[$i], ' ';
}
$count = 1;
for($i = 0; $i <= count($arr); $i++){
    if($arr[$i] < $arr[$i + 1]){
        //Условие цикла выходит за границы массива и из-за этого появляется warning (убрал его на строчке 130 и вернул на 150). Пробовал расширить массив $arr[5], но это не помогло. Перепробовал не все варианты(!)
        $count++;
    }
}
echo '<br/>';
if($count == count($arr)){
    echo 'Числа массива идут в возрастающей последосвательности.';
}else{
    echo 'Числа массива НЕ идут в возрастающей последосвательности.';
}
error_reporting(1);
?>
<a name="end"></a>