var id = 0;

$(".submission").click(function (e){
    e.preventDefault;
    var newId = id++;
    var value = $(".values").val();
    var li = "<li id='"+newId+"'>"+
                "<p>"+value+"</p>"+
            "</li>";
                
    $("ul").append(li);
});