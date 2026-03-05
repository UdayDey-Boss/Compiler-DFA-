document.getElementById("contactForm").addEventListener("submit", function(e) {
    e.preventDefault();

    let firstName = document.getElementById("firstName").value.trim();
    let lastName  = document.getElementById("lastName").value.trim();
    let email     = document.getElementById("email").value.trim();
    let phone     = document.getElementById("phone").value.trim();
    let message   = document.getElementById("message").value.trim();

    if (firstName === "" || lastName === "" || email === "" || phone === "" || message === "") {
        alert("Field Value need to be filled up");
        return;
    }

    console.log("=== Form Submitted Successfully ===");
    console.log("First Name :", firstName);
    console.log("Last Name  :", lastName);
    console.log("Email      :", email);
    console.log("Phone      :", phone);
    console.log("Message    :", message);

    alert("Form submitted!");
});