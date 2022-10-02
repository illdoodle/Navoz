<?php
echo '<h3>Арифеметические Операции:</h3>';
$a = 7;
$b = 12;
echo 'a + b = ', $a, ' + ', $b, ' = ', $a + $b, '<br />';

echo '<h3>Обмен Переменных:</h3>';
$temp = $a;
$a = $b;
$b = $temp;
echo 'a = ', $a, '; ', 'b = ', $b , '<br />';

echo '<h3>Получение 803 из 893:</h3>';
$num = 893;
$res = $num - $num % 100 + $num % 10;
echo 'res = ', $res, '<br />';

echo '<h3>Переменные Переменные:</h3>';
$c = 78;
echo '$c = ', $c, '<br />';
$b = 'c';
echo '$b = ', $b, '<br />';
echo '$$b = ', $$b, '<br />'; 

echo '<h3>Типы Строк:</h3>';
$c = 78;
echo 'text" $c e\'nd <br />';  
echo 'heeheehawhaw <br />', "\n";
echo "text' $c e\"nd <br />"; 
echo <<<EOT
text
line2
EOT; 

echo '<h3>Удаление Переменной:</h3>';
$n = 22;
echo 'n = ', $n, '<br/>';
unset($n);
if(isset($n)){
    echo $n;
}else{
    echo 'Не бывает такой переменной!';
}

echo '<h3>В очереди стоят n людей, сколько человек находятся между i-тым и k-тым человеком?</h3>';
$i = 27;
$k = 21;
if($k > $i){
    $peopleCount = $k - $i - 1; 
}else{
    $peopleCount = $i - $k - 1;
}
echo 'Между ', $i, ' человеком и ', $k, ' человеком стоят ', $peopleCount, ' человек.'; 

echo '<h3>X = вещественное число. Округлите его до сотых долей.</h3>';
$x = 4.127574;
echo 'x = ', $x, '<br/>';
$tmp = $x * 100;
$int = (int)$tmp;
if($x > 0){
    if($tmp - $int >= 0.5){
        $int++;
    }
}else{
    if($tmp - $int <= -0.5){
        $int--;
    }
}
echo 'Вывод = ', $int / 100;

echo '<h3>Определить максимальное из трех чисел:</h3>';
$a = 0;
$b = -3123;
$c = 888888;
echo 'a = ', $a, '; b = ', $b, '; c = ', $c;
$res = $c;
if($a > $b){
    if($a > $c){
        $res = $a;
    }
}else{
    if($b > $c){
        $res = $b;
    }
}
echo '<br/>', 'res = ', $res;

echo '<h3>Даны два целых числа A и B, вывести числа в порядке возрастания между A и B включительно и кол-во чисел:</h3>';
$a = 3;
$b = 7;
$count = 0;
echo 'a = ', $a;
echo '<br/>';
echo 'b = ', $b;
echo '<br/>';

$fromI = $a;
$toI = $b + 1;
if($a > $b){
    $fromI = $b;
    $toI = $a + 1;
}

for($i = $fromI; $i <= $toI; $i++, $count++){
    echo $i, ' ';
}
echo '<br/> Кол-во чисел = ', $count;

echo '<h3>Вывести все числа от 1.5 до 10.3 с шагом 0.4:</h3>';
for($i = 1.5; $i < 10.31; $i+=0.4){
    echo $i, ' ';
}

?>
<style>
    #t7 td:last-child{
        text-align: right;
    }    
</style>
<h3>Таблица умножения на 7:</h3><table id="t7"><tbody>
<?php
for($i = 1; $i < 15; $i++){
    echo '<tr><td style="text-align: right;">', $i, '</td><td> * 7 = </td><td>', $i * 7, '</td></tr>';
}
?>
</table></tbody>
<h3>Таблица умножения на 7:</h3><table id="t7"><tbody>
<?php
for($i = 1; $i < 15; $i++){ ?>
    <tr>
        <td><?=$i?></td>
        <td>*</td>
        <td>8</td>
        <td>=</td>
        <td><?=$i*8?></td>
    </tr>
<?php
}
?>
</table></tbody>
<a name="end"></a>
