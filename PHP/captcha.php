<?php
session_start();
$w = 200;
$h = 100;
$letterCount = 6;
$dict = 'abcdefgklmn';

if(isset($_SESSION['captcha'])){
    $text = $_SESSION['captcha'];
}else{    
    $text = '';
    for($i = 0; $i < $letterCount; $i++){
        $text.=substr($dict, rand(0, strlen($dict) - 1), 1);
    }
    $_SESSION['captcha'] = $text;
}

$letters = str_split($text, 1);
$img = ImageCreateTrueColor($w, $h);
$white = ImageColorAllocate($img, 255, 255, 255);
imagefill($img, 0, 0, $white);
header('Content-Type: image/png');
foreach($letters as $ind => $letter){
    $randcolor = ImageColorAllocate($img, rand(0, 255), rand(0, 255), rand(0, 255));
    ImageTTFText($img, rand(25, 50), rand(-30, 30), (int)(20 + $ind * ($w - 40)/count($letters)) + rand(0, 10), rand(40, 70), $randcolor, 'font.ttf', $letter);
}
ImagePng($img);
?>