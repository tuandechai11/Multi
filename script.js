document.getElementById("settings-icon").addEventListener("click", function() {
    document.getElementById("sidebar").classList.toggle("show-sidebar");
});

document.getElementById("sidebar-settings-icon").addEventListener("click", function() {
    document.getElementById("sidebar").classList.toggle("show-sidebar");
});

document.getElementById("username-greet").innerHTML = "Hi, " + username;
