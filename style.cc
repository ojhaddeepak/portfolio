* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'Courier New', Courier, monospace;
}

body {
    background-color: #000;
    color: #00ff00;
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    overflow: hidden;
}

.container {
    display: flex;
    width: 80%;
    height: 80%;
    border: 2px solid #00ff00;
    box-shadow: 0 0 20px #00ff00;
    padding: 20px;
}

.left {
    flex: 1;
    text-align: center;
    padding: 20px;
    border-right: 2px solid #00ff00;
}

.profile-pic {
    width: 200px;
    height: 200px;
    border-radius: 50%;
    border: 2px solid #00ff00;
    box-shadow: 0 0 10px #00ff00;
}

h1 {
    font-size: 3rem;
    margin: 20px 0;
    color: #ff0000;
}

p {
    font-size: 1.2rem;
}

.right {
    flex: 2;
    padding: 20px;
}

h2 {
    font-size: 2.5rem;
    margin-bottom: 10px;
    text-transform: uppercase;
    color: #00ff00;
}

ul {
    list-style-type: none;
}

ul li {
    font-size: 1.5rem;
    margin-bottom: 10px;
    color: #ff00ff;
}

section {
    margin-bottom: 30px;
}

/* Cool glitch effect for titles */
h2, h3 {
    position: relative;
    animation: glitch 1s infinite;
}

@keyframes glitch {
    0% { text-shadow: 1px 1px #00ff00, -1px -1px #ff00ff; }
    25% { text-shadow: -2px -2px #ff00ff, 2px 2px #00ff00; }
    50% { text-shadow: 3px 3px #00ff00, -3px -3px #ff00ff; }
    75% { text-shadow: -1px -1px #ff00ff, 1px 1px #00ff00; }
    100% { text-shadow: 0px 0px #ff00ff, 0px 0px #00ff00; }
}

/* Glitchy background lines */
body::before {
    content: "";
    position: absolute;
    width: 100%;
    height: 100%;
    background: repeating-linear-gradient(180deg, rgba(0, 255, 0, 0.1), rgba(0, 255, 0, 0.1) 1px, transparent 1px, transparent 3px);
    z-index: -1;
    animation: glitch-bg 3s infinite;
}

@keyframes glitch-bg {
    0% { transform: translateY(0); }
    50% { transform: translateY(-10px); }
    100% { transform: translateY(0); }
}
