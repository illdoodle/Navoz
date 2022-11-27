<?php 
class Apple{
    public $color;
    private $shape = 'round';
    private $dateStart;
    function __construct($color){
        echo 'constructed! <br/>';
        $this->color = $color;
        $this->dateStart = time();
    }
    function __destruct(){
        echo 'destructed! <br/>';
    }
    function getStrDate(){
        return date('Y-m-d', $this->dateStart);
    }
    function __clone(){
        echo 'cloned! <br/>';
        $this->dateStart = time() + 100;
    }
    function __get($name){
        echo 'getted = ', $name, '<br/>';
        return 123;
    }
    function __set($name, $value){
        //echo 'setted = ', $name, '<br/>';
        $this->$name=$value;
    }
}
class CubaApple extends Apple{    
    function __construct(){
        parent::__construct('red');
    }
}


$object = new Apple('yellow');
//$object->color = 'yellow';
var_dump($object);
echo '<br/>';
echo $object->getStrDate(), '<br/>';

$redApple = clone $object;
$redApple->color = 'red';
var_dump($redApple);
echo '<br/>';    
echo $redApple->abcd;
echo '<br/>';
$redApple->a=2;
var_dump($redApple);
echo '<br/>';

$c = new CubaApple;
var_dump($c);
echo '<br/>';
?>