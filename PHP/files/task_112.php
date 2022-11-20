<?php
    print_r($_POST);
    print_r($_FILES);
    if(isset($_FILES['img'])){    
        if($_FILES['img']['error'] == 0){
            move_uploaded_file($_FILES['img']['tmp_name'], 'uploads/'.$_FILES['img']['name']);
        }
    }
?>

<form action="" method="POST" enctype="multipart/form-data">
    <input type="submit"/>
    <input type="file" name="img" accept="image/png, text/plain"/>
</form>

<?php
$dir = opendir('uploads');
while($file = readdir($dir)){
    if($file == '.' || $file == '..'){
        continue;
    }
    echo $file, '<br/>';
    readfile('uploads/'.$file);
}
?>