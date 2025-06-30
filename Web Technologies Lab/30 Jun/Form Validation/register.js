function register() {
    const email = document.querySelector("#email").value;
    const name = document.querySelector("#name").value;
    const bYear = document.querySelector("#bYear").value;
    const password = document.querySelector("#password").value;
    const confirm = document.querySelector("#confirm").value;

    const currentDate = new Date();
    const currentYear = currentDate.getFullYear();

    if (email == "" || name == "" || bYear == "" || password == "" || confirm == "") {
        alert("You need to fill all the fields.");
        return false;
    }

    if ((currentYear - bYear) < 12) {
        alert("You should not be here.");
        return false;
    }

    if (confirm != password) {
        alert("Passwords do not match!");
        return false;
    }

    return true;
}
