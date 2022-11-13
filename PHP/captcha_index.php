<?php 
session_start();
print_r($_SESSION);
if(isset($_POST['captcha'])){
    if($_SESSION['captcha'] == $_POST['captcha']){
        unset($_SESSION['captcha']);
        unset($_SESSION['captchaError']);
        $_SESSION['status'] = true;
        header('Location: '.$_SERVER['PHP_SELF']);
        die();
    }
    if(!isset($_SESSION['captchaError'])){
        $_SESSION['captchaError'] = 0;
    }
    if(++$_SESSION['captchaError'] > 2){
        unset($_SESSION['captchaError']);
        unset($_SESSION['captcha']);
    }
}
?>
<img src="captcha.php" alt="">
<form action="" method="post">
    <input type="text" name= "captcha">
    <input type="submit" value="Капчировать">
</form>