<?php
include_once 'A_src.php'; 
include_once 'class_A.php'; 
include_once 'class_B.php'; 
use prime\A;
$a = new A;
echo $a->num;
$b = new \prime\B;
echo $b->num;
var_dump($a);
?>