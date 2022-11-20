<?php
task('text.txt');
function task($fileName){
    if(is_file($fileName)){
        echo 'Файл ', $fileName, ' существует!', '<br/>';
        echo 'Его размер = ', filesize($fileName), ' B!', '<br/>';
    }else{
        echo 'Файл ', $fileName, ' не существует!', '<br/>';
    }

    $file = fopen($fileName, 'r');
    echo '$ch = ';
    while(!feof($file)){
        $ch = fgetc($file);
        echo $ch, '';
    }
    fclose($file);
    
    echo '<br/>';
    $file = fopen($fileName, 'r');
    echo '$ch = ';
    while(!feof($file)){
        $ch = fgets($file, 100);
        echo $ch, '((новаястрока))';
    }
    fclose($file);
    echo '<br/>';
    readfile($fileName);
    echo '<br/>';
    $txt = file_get_contents($fileName);
    echo '$txt = ', $txt, '<br/>';

    $data = file('text.txt');
    print_r($data);
    echo '<br/>';
    foreach($data as &$str){
        //$str.='*';
        $str = explode(' ', $str);
        $str = array_filter($str, 
            function ($word){
                return mb_strlen($word) < 4;
            }
        );
        $str = implode(' ', $str);
    }
    print_r($data);

    $file = fopen('111.result.txt', 'w');
    foreach($data as $str){
        fwrite($file, $str);
    }
    fclose($file);
}
?>