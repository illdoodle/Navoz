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
for($i = 0; $i < strlen($name); $i++){
    echo mb_substr($name, $i, 1), ' ';
}
echo '<br/>';
for($i = 1; $i < mb_strlen($name); $i++){
    echo mb_substr($name, $i, 1), '<br/>';
}


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
        Значения элементов массива - случайные числа от 5 до 10:</h3>';
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

echo '<h3>Обнулить в массиве все числа, которые повторяются более двух раз. Первые два элемента оставлять:</h3>';
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
//Не обнуляет промежуточные числа, понял как делать слишком поздно.
for($i = 0; $i < count($arr); $i++){
    echo $arr[$i], ' ';
}

echo '<h3>Создайте массив из 4 случайных целых чисел из отрезка [10;99], выведите его на экран в строку. 
Определить и вывести на экран сообщение о том, является ли массив строго возрастающей последовательностью:</h3>';
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
        //Условие цикла выходит за границы массива и из-за этого появляется warning (убрал его на строчке 130). Пробовал расширить массив $arr[5], но это не помогло.
        $count++;
    }
}
echo '<br/>';
if($count == count($arr)){
    echo 'Числа массива идут в возрастающей последосвательности.';
}else{
    echo 'Числа массива НЕ идут в возрастающей последосвательности.';
}
error_reporting(E_ALL);

echo '<h3>Дано слово s1. Образовать слово s2 из нечетных букв s1:</h3>';
$s1 = 'abcаюnk';
$s2 = '';
for($i = 0; $i < mb_strlen($s1); $i+=2){
    $s2.=mb_substr($s1, $i, 1);
}
echo $s2;

echo '<h3>Дан текст, вывести все цифры и найти их сумму:</h3>';
$s = 'ab3аю72nk5555 <br/>';
$sum = 0;
echo 'Слово: ', $s;
echo 'Все цифры: ';
for($i = 0; $i < mb_strlen($s); $i++){
    $le = mb_substr($s, $i, 1);
    $sum+=(int)$le;
    if(is_numeric($le)){
        echo $le, ' ';
    }
}
echo '<br/> Сумма = ', $sum;

echo '<h3>Напечатать минимальное число больше 200 и кратное 17:</h3>';
$num = 200;
while($num % 17){
    $num++;
}
echo $num;

echo '<h3>Найти все трехзначные простые числа:</h3>';
$count = 0;
for($i = 100; $i < 1000; $i++){
    $isSimple = true;
    for($d = 2; $d < $i / 2; $d++){
        $count++;
        if($i % $d == 0){
            $isSimple = false;
            break;
        }
    }
    if($isSimple){
        echo $i, ' ';
    }
}
echo '<br/> Счетчик = ', $count; 

echo '<h3>Вывести на экран квадрат состоящий из n * n квадратов различного цвета:</h3>';
$w = 100; 
$n = 10;
$wMini = $w / $n;
echo '<div style="width:'.$w.'px;">';
for($i = 0; $i - $n * $n; $i++){
    echo '<div style="background:rgb('.rand(0,255).','.rand(0,255).','.rand(0,255).'); width:'.$wMini.'px; height:'.$wMini.'px; display: inline-block;"></div>';
}
echo '</div>';

echo '<h3>Функции:</h3>';
$c = 1000;
$d = 100;
function s($a, $b){
    global $c;
    return $a + $b + $c + $GLOBALS['d'];
}
echo 'funcRes = ', s(7, 13);

echo '<h3>Максимум из двух чисел:</h3>';
//Betweeen Two Numbers
function maxBTN($a, $b){
    if($a > $b){
        return $a;
    }else{
        return $b;
    }
}
echo 'max (7, 13) = ', maxBTN(7, 13), '<br/>';
echo 'max (36, 73, 69, 91, 9, 1) = ', maxBTN(maxBTN(maxBTN(maxBTN(maxBTN(36, 73), 69), 91), 9), 1);

echo '<h3>Функция максимума для большего числа аргументов</h3>';
function maxBTSix($a, $b, $c = 7){
    /*
    echo '1 = ', $a, '<br/>';
    echo '2 = ', $b, '<br/>';
    echo '3 = ', $c, '<br/>';
    echo 'func_num_args() = ', func_num_args(), '<br/>';
    */
    $max = $a;
    for($i = 0; $i < func_num_args(); $i++){
        //echo $i, '-e =  ', func_get_arg($i), '<br/>';
        $tmp = func_get_arg($i);
        if($max < $tmp){
            $max =  $tmp;
        }
    }
    //print_r(func_get_args()); 
    return $max;
    echo '<br/>';
}
echo 'max (36, 73, 69, 91, 9, 1) = ', maxBTSix(36, 73, 69, 91, 9, 1), '<br/>';
echo 'max (1, 2) = ',  maxBTSix(1, 2);

echo '<h3>Ccылки:</h3>';
$var = 59;
$abc = &$var;
echo '$abc = &$var = ', $abc, '<br/>'; 
$abc = 712;
echo '$var if $abc (= 712) = ', $var, '<br/>'; 
function &some(&$a){
    $a = 791;
    return $a;
}
$b = 19;
$c = &some($b);
echo '$b = ', $b, '<br/>';
echo '$c = ', $c, '<br/>';
$c = 315;
echo '$b = ', $b, '<br/>';
echo '$c = ', $c, '<br/>';

echo '<br/> manyTimes(): <br/>';
function manyTimes(){
    static $count = 0;
    echo $count++;
}
for($i = 0; $i < 10; $i++){
    echo manyTimes(), ' ';
}
echo '<br>';

echo '<br/> f932(): <br/>';
$b = true;
if($b){
    function f932(){
        return 2;
    }
}else{
    function f932(){
        return 43;
    }
}
echo f932(), '<br/>';

echo '<h3>Нарисовать столбчатую диаграмму с неограниченным кол-вом аргументов:</h3>';
?>
<style>
    #chart{
        position: relative;
        width: 400px;
        height: 300px;
        border: 2px solid black;
    }
    #chart div{
        position: absolute;
        border: 1px solid black;
    }
    #chart p{
        text-align: center;
        margin-top: -25px;
    }
</style>
<?php
function printChart(){
    echo '<div id="chart">';
    $a = func_get_args();
    $width = 100 / count($a);
    foreach($a as $num => $val){
        echo '<div style="width:',$width,'%; height: ',$val/2.50,'%; bottom: 0px; left:',$num * $width,'%;"><p>',$val,'</p></div>';
    }
    echo '</div>';
}
printChart(200, 100, 80, 220, 30);
?>
<a name="end"></a>