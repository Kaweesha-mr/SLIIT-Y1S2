<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>


    <!-- add logo -->
    <img src="#" alt="Add your logo here" style="padding-left: 900px;">


    <!-- Discription under logo -->
    <h2 style="text-align: center;">Online SHopping Cart</h2>
    <h3 style="text-align: center;">The Online Shopping Store</h3>


    <!-- Horizontal line  -->
    <hr>


    <ul class="navigation">

        <li><a href="#">Home</a></li>
        <li><a href="#">News</a></li>
        <li><a href="#">Contact</a></li>
        <li><a href="#">About</a></li>

    </ul>


    <!-- printing the company name using constant and echo command -->
    <?php

        define("store_name","Online Shooping site");
        echo "<h2>".store_name."</h2>";
        echo "<h2> This page is main about".store_name."</h2>";


        //creating the variables and assign the values to them according the given instrutions on the labsheet
        $sold = 75;
        $total = 100;


        //printing the varibales value with echo command
        echo "shopping cart";
        echo "No of Sold items : .$total";

        //creating a function
        function findPercentage(int $TOTAL, int $SOLD){
            
            //creating the global function 
            global $percentage;

            //calculation inside function
            $percentage =  ($SOLD/$TOTAL)*100;

            //returning the values
            return $percentage;
        }

        //printing return answers from the function
        echo "<h2> percentage of sold Items :".findPercentage($total,$sold)."</h2>";

        $today = date("2019-07-12"); // get today's date
        $status = ""; // initialize the status variable

        $shipDay = "2019-09-21";//shiiping day included

        //condition check that date comparission
        if ($today > $shipDay) {
            $status = "SHIPPED";
        } else {
             $status = "TO BE SHIPPED";
        }

        // no of items
        $items = $sold;

        //printing the output
        echo "For " . $today . " " . $items . " items has " . $status . ".";



        //im not going to do the loop exercise in this lab if you need them inform me
    ?>

    <table border  =  "1px solid ">

        <tr>
            <th>Item Name</th>
            <th>Discription</th>
        </tr>

        <tr>
            <td>Apple Iphone XS Max</td>
            <td>
                <ul>
                    <li>True Tone Display</li>
                    <li><span style="color: red;"> Wide color</span>  Color Display(p3)</li>
                    <li>3D touch</li>
                    <li>624 cd/m2 max brightness</li>
                    <li>Fingerprint resistant oleophobic display</li>
                    <li>True Tone Display</li>

                </ul>
        </td>
        </tr>
        <tr>
            <td>Apple Iphone XS Max</td>
            <td>
                <ol>
                    <li>True Tone Display</li>
                    <li><span style="color: red;"> Wide color</span> Display(p3)</li>
                    <li>3D touch</li>
                    <li>624 cd/m2 max bri11ghtness</li>
                    <li>Fingerprint resistant oleophobic display</li>
                    <li>True Tone Display</li>

                </ol>
        </td>
        </tr>
        <tr>
            <td>Apple Iphone XS Max</td>
            <td>
                <ul type = "sqaure">
                    <li>True Tone Display</li>
                    <li><span style="color: red;"> Wide color</span> Display(p3)</li>
                    <li>3D touch</li>
                    <li>624 cd/m2 max brightness</li>
                    <li>Fingerprint resistant oleophobic display</li>
                    <li>True Tone Display</li>

                </ul>
        </td>
        </tr>
    </table>
    <hr>

    <footer style="text-align: center;">

        created by Kaweesha Marasinghe
        Vist our site

    </footer>

    
</body>
</html>