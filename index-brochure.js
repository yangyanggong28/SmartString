var single = document.getElementById("single");
var month =  document.getElementById("monthly");
var column = document.getElementsByClassName("column");
month.onclick = function() {
    month.classList.add("valid");
    single.classList.remove("valid");
}
single.onclick = function() {
    single.classList.add("valid");
    month.classList.remove("valid");
}
column.onclick = function() {
    column.classList.remove("valid");
}
