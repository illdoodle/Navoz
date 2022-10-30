<?php
echo '<h1>Формы: </h1>';
?>
<pre>
    <?php
    echo '$_GET', '<br/>';
    print_r($_GET);
    echo '<br/>';
    echo '$_POST', '<br/>';
    print_r($_POST);
    echo '<br/>';
    echo '$_POST[login] = ', $_POST['login']??'none';
    ?>
</pre>
<?php
    if(isset($_POST['login']) && isset($_POST['password'])){
        if($_POST['login'] == 'abc' && $_POST['password'] == '123' ){
            header('Location:/');
        }
    }
?>
<form action="" method="POST">
    <input type="text" name="login" value="<?= $_POST['login']??''?>"/> <br/>
    <input type="password" name="password"/> 
    <input type="submit" value="send"/>
</form>