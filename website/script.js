
                  document.getElementById("date").innerHTML=new Date().getFullYear();
                 function getstoke(id) {
    let check = document.getElementById(id).textContent;
    if (check.includes('Yes')) {
        alert("enrollment open");
    } else {
        alert("enrollment close");
    }
}
function validateForm() {
    let name = document.getElementById("name").value;
    let email = document.getElementById("email").value;
    let message = document.getElementById("message").value;

    
    if (name == "" || email == "" || message == "") {
        alert("All fields must be filled out!");
        return false; 
    }

    
    if (email.indexOf('@') == -1 || email.indexOf('.') == -1) {
        alert("Please enter a valid email address.");
        return false;
    }


    if (name.length < 3) {
        alert("Name must be at least 3 characters.");
        return false;
    }


    if (message.length < 10) {
        alert("Message must be at least 10 characters.");
        return false;
    }


    return true; 
}
function sendMessage() {
  let input = document.getElementById("user-input").value.toLowerCase().trim();
  let chatLog = document.getElementById("chat-log");

  if (input === "") return;

  
  let userMsg = document.createElement("p");
  userMsg.textContent = "You: " + input;
  userMsg.style.color = "grey";
  chatLog.appendChild(userMsg);

  
  let botReply = getBotResponse(input);

  
  let botMsg = document.createElement("p");
  botMsg.textContent = "Bot: " + botReply;
  botMsg.style.color = "grey";
  chatLog.appendChild(botMsg);

  
  document.getElementById("user-input").value = "";

  
  chatLog.scrollTop = chatLog.scrollHeight;
}

function getBotResponse(input) {
  if (input.includes("hello") || input.includes("hi")) {
    return "Hello! How can I help you today?";
  } else if (input.includes("how are you")) {
    return "I'm doing great, thanks!";
  } else if (input.includes("bye")) {
    return "Goodbye! Have a great day!";
  }else if (input.includes("what are you selling")) {
    return "courses";
     }else if (input.includes("are enrollment open")) {
    return "obviously haven't you checked avaiblity button goose";
  } else {
    return "Sorry, I didn't understand that.";
  }
}
