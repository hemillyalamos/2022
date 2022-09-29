    const nav = document.getElementById('nav');

    function hasFocus() {
        const pesq = document.getElementById('pesq');
        pesq.classList.toggle('active');
    }

    nav.addEventListener('click', toggleMenu);