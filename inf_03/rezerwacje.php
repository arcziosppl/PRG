<!doctype html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>KINO "Za rogiem"</title>
</head>
<body>
<!doctype html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>KINO "Za Rogiem"</title>
    <link rel="stylesheet" href="./style.css">
</head>
<body>
<header>
    <div class="baner">
        <img src="./baner.jpg" alt="baner">
    </div>
</header>
<main>
    <div class="lewy">
        <ul>
            <li><a href="./index.html">Strona Główna</a></li>
        </ul>
        <hr>
        Data i godzina seansu
        <br>
        <form action="./rezerwacje.php" method="POST">
            <input type="date" name="date">
            <input type="time" name="time">
            <input type="submit">
        </form>
    </div>
    <div class="prawy">
        EKRAN
    </div>
</main>
<footer>
    <h5>Egzamin INF.03 - AUTOR: 3245324234324</h5>
</footer>

<?php

if($_SERVER["REQUEST_METHOD"] == "POST") {
    $date = $_REQUEST['date'];
    $time = $_REQUEST['time'];

    if ($date != null && $time != null) {
        try {
            $conn = new PDO("mysql:dbname=kino", "root", "");
            $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
            $sql = "SELECT Miejsce,Rzad FROM `rezerwacje` WHERE Data='$date' AND Godzina='$time'";
            $result = $conn->prepare($sql);
            $result->execute();

            $rows = $result->fetchAll();
            print_r($rows);
            $conn = null;
        } catch (PDOException $e) {
            echo $e;
        }
    }
}else{
    echo "Podaj poprawną datę i godznie";
}

?>
</body>
</html>