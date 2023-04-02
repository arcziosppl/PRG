<!DOCTYPE html>
<html lang="pl">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="./style/style.css">
</head>

<body>
    <div class="main">
        <div class="table_data">
            <?php
            display_table();
            ?>
        </div>
        <div class="forms">
            <div class="update">
                <p>Wprowadź imię i nazwisko pracownika, którego dane chcesz zaktualizować</p>
                <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="POST">
                    <input type="text" name="imiecurrent" placeholder="Imie">
                    <input type="text" name="nazwiskocurrent" placeholder="Nazwisko">
                    <p>Podaj dane do aktualizacji</p>
                    <input type="text" name="imie" placeholder="Imie">
                    <input type="text" name="nazwisko" placeholder="Nazwisko">
                    <input type="text" name="wojewodztwo" placeholder="Województwo">
                    <input type="text" name="miasto" placeholder="Miasto">
                    <input type="submit" value="AKTUALIZUJ" name="update">
                </form>
            </div>
            <div class="add">
                <p>Podaj dane nowego pracownika</p>
                <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="POST">
                    <input type="text" name="imie" placeholder="Imie">
                    <input type="text" name="nazwisko" placeholder="Nazwisko">
                    <input type="text" name="wojewodztwo" placeholder="Województwo">
                    <input type="text" name="miasto" placeholder="Miasto">
                    <input type="submit" value="DODAJ" name="put">
                </form>
            </div>
            <div class="delete">
                <p>Pracownik do usunięcia</p>
                <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="POST">
                    <input type="text" name="imie" placeholder="Imie">
                    <input type="text" name="nazwisko" placeholder="Nazwisko">
                    <input type="submit" value="USUŃ" name="delete">
                </form>
            </div>
        </div>
    </div>


    <?php
function display_table(){
    try{
    $conn = new PDO("mysql:host=localhost;dbname=pracownicy","root","");
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    $sql = "SELECT * FROM pracownicy";
    $result = $conn->query($sql);

    if($result->rowCount() > 0){
        echo '<table>';
        echo '<thead>';
        echo '<tr>';
        echo '<th>' . "Lp" . '</th>';
        echo '<th>' . "Imie" . '</th>';
        echo '<th>' . "Nazwisko" . '</th>';
        echo '<th>' . "Województwo" . '</th>';
        echo '<th>' . "Miasto" . '</th>';
        echo '</tr>';
        echo '<thead>';
    while($row = $result->fetch(PDO::FETCH_ASSOC)){
        echo '<tbody>';
        echo '<tr>';
        echo '<td>' . $row['Id'] . '</td>';
        echo '<td>' . $row['Imie'] . '</td>';
        echo '<td>' . $row['Nazwisko'] . '</td>';
        echo '<td>' . $row['Wojewodztwo'] . '</td>';
        echo '<td>' . $row['Miasto'] . '</td>';
        echo '</tr>';
        echo '</tbody>';
    }
    echo '</table>';
}
$conn = null;
    }catch(PDOException $e){
        echo $e;
    }
}

if($_SERVER["REQUEST_METHOD"] == "POST"){
    $imie_current = $_REQUEST['imiecurrent'];
    $nazwisko_current = $_REQUEST['nazwiskocurrent'];
    $imie = $_REQUEST['imie'];
    $nazwisko = $_REQUEST['nazwisko'];
    $wojewodztwo = $_REQUEST['wojewodztwo'];
    $miasto = $_REQUEST['miasto'];

    if(isset($_REQUEST['update'])){
        try{
        $conn = new PDO("mysql:host=localhost;dbname=pracownicy","root","");
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    $sql = "UPDATE pracownicy SET Imie='$imie', Nazwisko='$nazwisko', Wojewodztwo='$wojewodztwo', Miasto='$miasto' WHERE Imie='$imie_current' AND Nazwisko='$nazwisko_current'";
    $query = $conn->prepare($sql);
    $query->execute();
    $conn = null;
        }catch(PDOException $e){
            echo $e;
        }
        echo("<meta http-equiv='refresh' content='1'>");

    }else if(isset($_REQUEST['put'])){
        try{
            $conn = new PDO("mysql:host=localhost;dbname=pracownicy","root","");
        $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        $sql = "INSERT INTO  pracownicy(imie, nazwisko, Wojewodztwo, Miasto) VALUES ('$imie','$nazwisko','$wojewodztwo','$miasto')";
        $query = $conn->prepare($sql);
        $query->execute();
        $conn = null;
            }catch(PDOException $e){
                echo $e;
            }
            echo("<meta http-equiv='refresh' content='1'>");
    }else{
        try{
            $conn = new PDO("mysql:host=localhost;dbname=pracownicy","root","");
        $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        $sql = "DELETE FROM  pracownicy WHERE Imie='$imie' AND Nazwisko='$nazwisko'";
        $query = $conn->prepare($sql);
        $query->execute();
        $conn = null;
            }catch(PDOException $e){
                echo $e;
            }
            echo("<meta http-equiv='refresh' content='1'>");
    }
}

?>
</body>

</html>