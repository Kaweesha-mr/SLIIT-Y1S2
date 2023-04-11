<?php

    //first creating the connection between database

    $conn = mysqli_connect("localhost","root","","student",);

    if($conn -> connect_error){

        die("connection failed :" .$conn->connect_error);
    }

    //catching form data and assign them to php varibles
    $name = $_POST['Fname']." ".$_POST['Lname'];
    $div = $_POST['div'];

    //inserting the sql query into sql variable
    $sql = "INSERT INTO list (name, division)
    VALUES ('$name', '$div')";
    // check if the query is running well if yes print the following statement else display the error
    if($conn->query($sql) == TRUE){

        echo "New Record created successfully";
    }
    else {

        echo "Error:".$sql."<br>".$conn->error;
    }

    $conn->close();
?>