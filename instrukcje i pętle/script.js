//clear html content func...
function clear_html()
{
document.querySelector(".main").innerHTML = "";
}

function clear_html_2()
{
document.querySelector(".main_2").innerHTML = "";
}



function script_1()
{
    var result="";

    for(i=2; i<=100; i+=2)
    {
        result+=i + " ";
    }
    document.querySelector(".main").innerHTML = result;
}

function skrypt_2()
{
    var result="";
    var i=0;

    while(i<=10)
    {
        result+="Ten napis się powtarza...";
        result+="<br>";
        i++;
        if(i==10)
        {
            break;
        }
    }
    document.querySelector(".main").innerHTML = result;
}

function skrypt_3()
{
    var result="<hr>";
    var i=0;
    var j=0;

    while(i<3)
    {
        while(j<3)
        {
            result+=i+" "+j;
            result+="<br>";
            j++;
        }
        result+="<hr>";
        i++;
    }
    document.querySelector(".main").innerHTML = result;
}

function skrypt_4()
{

      var i=0;
     var result="";

while(true)
{
result+="Wartość zmiennej i to: " + i;
result+="<br>";
i++;
if(i==10)
{
    break;
}
}
document.querySelector(".main").innerHTML = result;

}

function skrypt_4()
{
    var result = "";
i = 0;
while(i < 10){
result += "Ten napis się powtarza...";
result += "<br />";
i++;
}

function skrypt_5()
{

}

document.querySelector(".main_2").innerHTML = result;

}





function button_handler()
{
    var b1 = document.querySelector(".b1");
    b1.addEventListener("click", function(){
    script_1();
    });

    var b2 = document.querySelector(".b2");
    b2.addEventListener("click", function(){
    skrypt_2();
    });

    var b3 = document.querySelector(".b3");
    b3.addEventListener("click", function(){
    skrypt_3();
    });

    var b4 = document.querySelector(".b4");
    b4.addEventListener("click", function(){
    skrypt_4();
    });

    var b1_1 = document.querySelector(".b1_1");
    b1_1.addEventListener("click", function(){
    skrypt_4();
    });


    //clear html content buton handler
    var clear = document.querySelector(".clear");
    clear.addEventListener("click", function(){
    clear_html();
    });

    var clear_2 = document.querySelector(".clear_2");
    clear_2.addEventListener("click", function(){
    clear_html_2();
    });

}

button_handler();
