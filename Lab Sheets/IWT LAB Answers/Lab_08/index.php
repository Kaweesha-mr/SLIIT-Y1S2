<?php

    //this is and extra part not thing in a lab sheet
    //this codes are used to display update of database realtime inside the html table
    $conn = mysqli_connect("localhost","root","","student");

?>



<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="./style.css">
</head>
<body>

    <div class="container">

        <div class="table list">

            <table border="1px solid black">
                <tr>
                    <th>ID</th>
                    <th>Name</th>
                    <th>Div</th>
                </tr>

                <tr>

                    <?php

                         //this is and extra part not thing in a lab sheet
                        //this codes are used to display update of database realtime inside the html table
                        $sql = "select * from list";

                        $result = mysqli_query($conn,$sql);


                        //fetch assoc command is not in sliit content but it is used to fetch details realtime in to html table
                        while ($row = mysqli_fetch_assoc($result)){

                            echo '<tr>

                                    <td>'.$row['en_no'].'</td>
                                    <td>'.$row['name'].'</td>
                                    <td>'.$row['division'].'</td>
                            ';
                        }
                    ?>

                </tr>
            </table>

        </div>

            <div class="table form"></div>

            <form action="config.php" method="post">

                <table>

                    <tr>
                        <th>first name</th>
                        <td><input type="text" placeholder="Enter name" name="Fname"></td>
                    </tr>
                    <tr>
                        <th>last name</th>
                        <td><input type="text" placeholder="Enter name" name="Lname"></td>
                    </tr>
                    <tr>
                        <th>Division</th>
                        <td><select name="div">
                            <option value="A">A</option>
                            <option value="B">B</option>
                            </select>
                        </td>
                    </tr>
                    <tr>
                        <td></td>
                        <td><button type="submit">Insert</button></td>
                    </tr>
                    
                </table>

            </form>
            
                
            <div class="table count">

                <div class="count">25 students</div>


            </div>
        
    </div>


</body>
</html>