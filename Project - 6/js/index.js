function showConfirmation(nextPage) 
{
    Swal.fire({
        title: 'Welcome',
        text: 'Take your quiz',
        showCancelButton: true,
        confirmButtonText: 'OK',
        cancelButtonText: 'Later'
    }).then((result) => {

    if (result.isConfirmed)
    {
        // Redirect to the next page

        window.location.href = nextPage; // Redirect to the specified page
    }
    });
}





// Dropdown menu toggle for responsive navbar
document.addEventListener('DOMContentLoaded', function () {
    const toggle = document.getElementById('toggle');
    const dropdownMenu = document.getElementById('dropdown_menu');

    toggle.addEventListener('click', function () {
        dropdownMenu.classList.toggle('active');
    });

    // Optional: Close dropdown when clicking outside
    document.addEventListener('click', function (event) {
        if (!toggle.contains(event.target) && !dropdownMenu.contains(event.target)) {
            dropdownMenu.classList.remove('active');
        }
    });
});