<?php
$w = 100;
$h = 100;
$img = ImageCreateTrueColor($w, $h);
$red = ImageColorAllocate($img, 255, 0, 0);
$brown = ImageColorAllocate($img, 128, 64, 48);
imagefill($img, 0, 0, $red);
imageline($img, 80, 30, 0, 0, $brown);
header('Content-Type: image/png');
ImageTTFText($img, 20, 0, 0, 50, $brown, 'font.ttf', 123);
ImagePng($img);

?>