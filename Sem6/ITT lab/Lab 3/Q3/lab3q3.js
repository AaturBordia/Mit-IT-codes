var phone = document.getElementById("lab3q3").value;
function get()
{
    var phoneno=document.getElementById("lab3q3").value;
    var a=phoneno.split(" ");
    var areacode = a[0].substring(0,5);
    var phon =a[0].substring(5,a[0].length);
    document.getElementById("area-code").value = areacode;
    document.getElementById("phone-no").value = phon;
}