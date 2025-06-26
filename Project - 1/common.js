// Dropdown menu functionality
const toggle = document.getElementById('toggle');
const dropdownMenu = document.getElementById('dropdown_menu');
toggle.addEventListener('click', () => {
    dropdownMenu.classList.toggle('active');
});