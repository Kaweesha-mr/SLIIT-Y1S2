

//javascript function creation
function loaddata(data) {
    
    if(data == "x"){
        /*
        this doucment.getelemetbyID() is used to catch a html tag using id and give access to change and modify the html elements 
        */
        document.getElementById("img").src = "iphonex.jpg";

        /* this  inner html is use to change inside things of a html tag*/
        document.getElementById("para").innerHTML = "This is iphone x";

    }
    else if(data == "11"){

        document.getElementById("img").src = "iphone11.png";
        document.getElementById("para").innerHTML = "This is iphone 11";

    }
    else if(data == "12"){

        document.getElementById("img").src = "iphone12.png";
        document.getElementById("para").innerHTML = "This is iphone 12";
    }



}

/*
//lab sheet 4)a
function priceForLoop() {

    const price = ["iphoneX = $1234","iphone11 = $1243", "iphone = $1242"];
    for(let i =0; i < 3; i++){
        //plus sign is used to append items if not it just gonna complete delete what is inside the element at add the new text we want to add
        //+ "<br>" tag is used to create a new line when printing the prices
        document.getElementById("price").innerHTML += price[i] + "<br>";
    }
    

}
*/


//lab sheet 4)b
function priceForLoop() {

    const price = ["iphoneX = $1234","iphone11 = $1243", "iphone = $1242"];
    
    for(let x in price){
        //plus sign is used to append items if not it just gonna complete delete what is inside the element at add the new text we want to add
        //+ "<br>" tag is used to create a new line when printing the prices
        document.getElementById("price").innerHTML += price[x] + "<br>";
    }
    

}

function higher(){

    const high = [1050,1045,2568,8563,4821,102,920];

    for(let x = 0; x < high.length; x++){
        
        if (high[x] > 1000){
            document.getElementById("higher").innerHTML += high[x] + "<br>";
        }
        
    }


}