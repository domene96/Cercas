<!DOCTYPE html>
<html>

<?php
    // Connect to database
    $username = "root";
    $password = "";
    try {
        // PDO (host;dbname,username,password)
        $conn = new PDO ('mysql:host=localhost;dbname=cercascenturion',$username,$password) /*or die ("Unable to connect")*/;
        // Set the PDO error mode to exception
        $conn->setAttribute (PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        echo "Conexion exitosa";
    } catch (PDOException $e) {
        echo "Error de conexion: " . $e->getMessage ();
        die ();
    }
?>

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <title>CercasCenturion</title>

    <!-- Stylesheets -->
    <link rel="stylesheet" href="css/cotizar.css">
    <link rel='stylesheet prefetch' href='https://fonts.googleapis.com/css?family=Roboto'>

    <!-- <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script> -->
</head>

<body>
    <h2>Cercas Centurion<small>Cotizaciones</small></h2>
    <!-- Datos iniciales -->
    <div class="basic">
        <form>
            <!-- Cliente -->
            <div class="Cliente">
                <input type="string" name="ClienteInput" required>
                <label>Nombre del Cliente</label>
            </div>
            <div class="Cliente">
                <input type="string" name="MailClienteInput" required>
                <label>Mail del Cliente</label>
            </div>
            <!-- Metros -->
            <div class="Mts">
                <input type="double" name="MtsInput" required>
                <label>Metros</label>
            </div>
            <!-- Costo Instalacion -->
            <div class="CI">
                <input type="double" name="CostoInstalacionInput" required>
                <label>Costo Instalacion</label>
            </div>
        </form>
        <!-- <br><br><br><br> --> <br>
        <button class="cotizar">Cotizar</Button>
    </div>
    <!-- Productos -->
    <div class="cercas">
        <h3>Cercas</h3>
        <p>--------Menu 1----------------Menu 2----------------Menu 3----------------Menu 4----------------Menu 5--------</p>
        <!-- <br><br><br><br> --> <br>
    </div>
    <div class="fortacera">
        <h3>Fortacera</h3>
        <p>--------Menu 1----------------Menu 2----------------Menu 3----------------Menu 4----------------Menu 5--------</p>
        <!-- <br><br><br><br> --> <br>
    </div>
    <div class="postes">
        <h3>Postes</h3>
        <p>--------Menu 1----------------Menu 2----------------Menu 3----------------Menu 4----------------Menu 5--------</p>
        <!-- <br><br><br><br> --> <br>
    </div>
    <div class="portones">
        <h3>Portones</h3>
        <p>--------Menu 1----------------Menu 2----------------Menu 3----------------Menu 4----------------Menu 5--------</p>
        <!-- <br><br><br><br> --> <br>
    </div>
    <div class="parques">
        <h3>Parques</h3>
        <p>--------Menu 1----------------Menu 2----------------Menu 3----------------Menu 4----------------Menu 5--------</p>
        <!-- <br><br><br><br> --> <br>
    </div>
    <div class="otros">
        <h3>Otros, etc...</h3>
        <p>--------Menu 1----------------Menu 2----------------Menu 3----------------Menu 4----------------Menu 5--------</p>
        <!-- <br><br><br><br> --> <br>
    </div>
    <div class="automatico">
        <h3>Agregado por default</h3>
        <p>//Con otros productos</p>
        <p>Ej: por cada 50cm de poste se agrega una abrazadera</p>
        <p>Menus o solo los items relevantes?<p>
        <p>--------Menu 1----------------Menu 2----------------Menu 3----------------Menu 4----------------Menu 5--------</p>
        <!-- <br><br><br><br> --> <br>
    </div>
</body>

</html>
