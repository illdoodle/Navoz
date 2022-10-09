<link rel="shortcut icon" href="favicon.ico">

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
