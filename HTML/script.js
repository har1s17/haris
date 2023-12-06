function validateForm(){  
alert("successful")
}
function ValidateEmail() {
        var email = document.getElementById("txtEmail").value;
        var lblError = document.getElementById("lblError");
        lblError.innerHTML = "";
        var expr = /^([\w-\.]+)@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.)|(([\w-]+\.)+))([a-zA-Z]{2,4}|[0-9]{1,3})(\]?)$/;
        if (!expr.test(email)) {
            lblError.innerHTML = "Invalid email address.";
        }
}
function validateMobileNumber(event) {
            const keyCode = evenfunction getRandomColor() {
            var letters = "0123456789ABCDEF";
            var color = "#";
            for (var i = 0; i < 6; i++) {
                color += letters[Math.floor(Math.random() * 16)];
            }
            return color;
        }

      
        function changeBackgroundColor() {
            document.body.style.backgroundColor = getRandomColor();
        }

       
        var button = document.getElementById("changeColorButton");
        button.addEventListener("click", changeBackgroundColor);t.keyCode;

            if ((keyCode >= 48 && keyCode <= 57) || keyCode === 8) {
                document.getElementById("error-message").innerText = "";
            } else {
                document.getElementById("error-message").innerText = "Please enter only numeric digits.";
                event.preventDefault();
            }
        }
