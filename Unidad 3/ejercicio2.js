function rojo()
		{
            t1.style.color="#FF0000";
		}
		function negro()
		{
            t1.style.color="#000000";
		}

(document).ready(function(){
    $("tr:even").css("background-color");
});

$(document).ready(function(){
	$("#hide").click(function(){
	$("p").hide();
	});
	$("#show").click(function(){
	$("p").show();
	});
});

$(document).ready(function(){
	$("#hide").click(function(){
	$("h").hide();
	});
	$("#show").click(function(){
	$("p").show();
	});
});

style.display = 'none'


function ocultar(){
    document.getElementById(ejemplo).style.display = "none";
}


$("#ocultar").click(function() {
    $("#disparador").hide(1500);
});

$("#oculto").click(function() {
    $("#disparador").show("slow");
});


$("#c1").click(function() {
    $("#cont1").hide(1500);
    });

'style.display'='inline'
'style.display'='block'
'style.display'='none'
