// Adding a typing effect for the About Me section
document.addEventListener("DOMContentLoaded", function () {
    const aboutText = document.querySelector("#about p");
    const aboutContent = aboutText.innerHTML;
    let index = 0;
    
    aboutText.innerHTML = ""; // Clear the text to simulate typing
    
    function typeEffect() {
        if (index < aboutContent.length) {
            aboutText.innerHTML += aboutContent.charAt(index);
            index++;
            setTimeout(typeEffect, 50); // Adjust typing speed
        }
    }
    
    typeEffect();
});

// Glitchy hover effect for profile pic
const profilePic = document.querySelector(".profile-pic");
profilePic.addEventListener("mouseover", function () {
    profilePic.classList.add("glitch");
});

profilePic.addEventListener("mouseout", function () {
    profilePic.classList.remove("glitch");
});

// Random glitch effect on titles
const titles = document.querySelectorAll("h2, h3");
setInterval(() => {
    titles.forEach(title => {
        if (Math.random() > 0.5) {
            title.style.textShadow = "1px 1px #ff00ff, -1px -1px #00ff00";
        } else {
            title.style.textShadow = "0px 0px #00ff00, 0px 0px #ff00ff";
        }
    });
}, 1000);
