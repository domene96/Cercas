<!DOCTYPE html>
<html>

<head>
  <meta charset="UTF-8">
  <title>CercasCenturion</title>
  <link rel='stylesheet prefetch' href='https://fonts.googleapis.com/css?family=Roboto'>
  <link rel="stylesheet" href="css/style.css">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
  <script src='http://cdnjs.cloudflare.com/ajax/libs/jquery/2.1.3/jquery.min.js'></script>
  <script type="text/javascript" src='jQuery-3.2.1.min.js'></script>

</head>

<body>
  <div class="container">
  
  <h2>Cercas Centurion<small>Cotizaciones</small></h2>
  
  <form>
    
    <div id="CC" action="/action_page.php" class="group">      
      <input type="double" name="MetrosInput" required>
      <span class="highlight"></span>
      <span class="bar"></span>
      <label>Metros</label>
    </div>
      
    <div id="CC" action="/action_page.php" class="group">      
      <input type="double" name="CostoInstalacionInput"required>
      <span class="highlight"></span>
      <span class="bar"></span>
      <label>Costo Instalacion</label>
    </div>
    <div class="container">
<button class="btn btn-default" onclick='javascript:ajaxCall("MetrosInput")' >Agregar</button> <!-- QUIEN SABE-->
</div>
  </form>

<script>
function myFunction() {
   document.getElementById("CC").submit();
}
</script>
  
<div class="container">                   
  <div class="dropdown">
    <button class="btn btn-primary btn-lg dropdown-toggle" type="button" data-toggle="dropdown">+
    <span class="caret"></span></button>
    <ul class="dropdown-menu">
      <li><a href='Cercacel.html'>Cercacel</a></li>
      <li><a href="#">Ciclonica</a></li>
    </ul>
  </div>
</div>




</body>

</html>