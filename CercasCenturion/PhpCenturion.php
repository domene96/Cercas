<?php
$servername = "localhost";
$dbname = "CercasCenturion";

// Create connection
$conn = new mysqli($servername, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 

$sql = "INSERT INTO Metros (Metros1)
VALUES (MetrosInput)";

if ($conn->query($sql) === TRUE) {
    echo "Metros introducidos exitosamente";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>
