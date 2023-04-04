


let count = 1;

//use to print row by row
for(let i = 0; i < 5; i++){

    //use to print  inside the row
    for(let j = 0; j < i; j++){

        document.getElementById("loop").innerHTML += count + " ";
        count ++;//use to get flow of 1 2 3 4 5 6 
    }

    document.getElementById("loop").innerHTML += "<br>"; // use to get the line brake in action

}