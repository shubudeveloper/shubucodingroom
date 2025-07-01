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
