<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>DB</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="form">
        <form action="index.php" method="post">
            <label for="db">Wybierz: </label>
            <select name="data">
            <option value="BAZY DANYCH">BAZY DANCYH</option>
            <option value="ARCHITEKTURA KOMPUTEROW">ARCHITEKTURA KOMPUTEROW</option>
</select>
            <input type="submit">
</form>
    </div>
    <div class="result">
        <?php
        display();
        ?>
    </div>

    <?php

function display()
{

if($_SERVER["REQUEST_METHOD"] == "POST")
{
$conn = new mysqli("localhost","root","","zad6");
if($conn->connect_error)
{
    die("error" . $conn->connect_error);
}

$option = $_REQUEST['data'];

$sql = "SELECT s.NAZWISKO, p.NAZWA_PRZEDM FROM przedmioty p, oceny o, studenci s WHERE s.NR_STUD=o.NR_STUD AND p.NR_PRZEDM=o.NR_PRZEDM AND p.NAZWA_PRZEDM='$option'";
$result = $conn->query($sql);

if($result->num_rows > 0)
{
    echo '<table>';
    echo '<tr>';
    echo '<td>' . "Nazwisko" . '</td>';
    echo '<td>' . "Nazwa przedmiotu" . '</td>';
    echo '</tr>';
    while($row = $result->fetch_assoc())
    {
        echo '<tr>';
        echo '<td>'. $row['NAZWISKO']. '</td>';
        echo '<td>'. $row['NAZWA_PRZEDM']. '</td>';
        echo '</tr>';
    }
    echo '</table>';

}

$conn->close();
$result->free();
}
}
    ?>
</body>
</html>