//funkjce służące do czyszczenia elemnetów div pojawia sie treść wykonanego skryptu
//podmienia zawartość diva na pusty ciąg znaków 
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

    for(i=0; i<=100; i+=2) //iteruje od wartości 0 do 100 ze zwiększaniem zmiennej o 2 i wypisuje wynik
    {
        result+=i + " ";
    }
    document.querySelector(".main").innerHTML = result;
}

function skrypt_2()
{
    var result="";
    var i=0;

    while(i++<10)  //iteruje od 0 do 10 inkrementując zmienną i
    {
        result+="Ten napis się powtarza...";
        result+="<br>";
    }
    document.querySelector(".main").innerHTML = result;
}

function skrypt_3()
{
    var result="<hr>";
    var i=0;

    while(i<3)    //pętla zewnętrzna ma za zadanie wypisuywać lewy kolumne liczb oraz linie poziomą a druga zagnieżdżona kolumne prawą
    {
        var j=0;
        while(j<3)
        {
            result+=i+" "+j;
            result+="<br>";
            j++;
        }
        i++;
        result+="<hr>";
    }
    document.querySelector(".main").innerHTML = result;
}

function skrypt_4()
{

      var i=0;
     var result="";

while(true)
{
result+="Wartość zmiennej i to: " + i;  //pętla nieskończona jeśli zmienna i osiągnie wartość 10 to przerywamy działanie pętli
result+="<br>";
i++;
if(i==10)
{
    break;
}
}
document.querySelector(".main").innerHTML = result;
}

function skrypt_5()
{
var result="";
var i=0;

for(i; i++<10;)
{
result+="Ten napis się powtarza...";
result+="<br>";
}
document.querySelector(".main_2").innerHTML = result;

}

function skrypt_6()
{
    var result = "<hr />"; //to samo co w skrypt_3() tylko inkrementacja zmiennych odbywa się w innych miejscach
i = 0;
while(i < 3){
    i++;
j = 0;
while(j < 3){
    j++;
result += i + " " + j;
result += "<br />";
}
result += "<hr />";
}

document.querySelector(".main_2").innerHTML = result;

}

function skrypt_7()
{
    var result="";
    for(i=1; i<=20; i++)    //iteruje od wartości 1 do 20 wypisuje tylko liczby parzyste
    {
        if(i%2 == false)
        {
        result+=i;
        result+=" ";
        }
    }
    document.querySelector(".main_2").innerHTML = result;
}

function skrypt_8()
{
    var result="";
    var i=10;
    while(i++<30)        //iteruje od wartości 10 do 30 wypisuje liczby nieparzyste z pominięciem 15,21,27
    {
        if(i%2 == true)
        {
            if(i === 15)
            {
                continue;
            }
            if(i === 21)
            {
                continue;
            }
            if(i === 27)
            {
                continue;
            }
        result+=i;
        result+=" ";
        }
    }
    document.querySelector(".main_2").innerHTML = result
}

function skrypt_9()
{
//nie rozumiem treści zadania (jak wyrażenie warunkowe może być usunięte z pętli )
}

function button_handler()
{

    //nasłuchuje zdarzenia w elementach <button> i jeżeli urzytkownik kliknie przycisk wywołuje odpowiednie funkcje
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
    skrypt_5();
    });

    var b2_2 = document.querySelector(".b2_2");
    b2_2.addEventListener("click", function(){
    skrypt_6();
    });

    var b3_3 = document.querySelector(".b3_3");
    b3_3.addEventListener("click", function(){
    skrypt_7();
    });

    var b4_4 = document.querySelector(".b4_4");
    b4_4.addEventListener("click", function(){
    skrypt_8();
    });

    var b5_5 = document.querySelector(".b5_5");
    b5_5.addEventListener("click", function(){
    skrypt_9();
    });

    var clear = document.querySelector(".clear");
    clear.addEventListener("click", function(){
    clear_html();
    });

    var clear2 = document.querySelector(".clear_2");
    clear2.addEventListener("click", function(){
    clear_html_2();
    });

}

button_handler();