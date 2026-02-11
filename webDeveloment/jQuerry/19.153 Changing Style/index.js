$("h1").css("color", "red");

// another way: changing using the style.css

$("h2").addClass("big-title");

setTimeout(function () {
  $("h2").removeClass("big-title");
}, 1000);
