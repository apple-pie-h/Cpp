string greetUser(string language) {
   if (language == "English") {
        return "Hello";
    } else if (language == "Spanish") {
        return "Hola";
    } else if (language == "French") {
        return "Bonjour";
    } else if (language == "Italian") {
        return "Ciao";
    } else {
        return "Hello"; // Default greeting
    }
}
