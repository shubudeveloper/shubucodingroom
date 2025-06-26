let timeLeft = 60; // total time in seconds
let timer = setInterval(() => {
  timeLeft--;
  document.getElementById('time').textContent = timeLeft;
  if (timeLeft <= 0) {
    clearInterval(timer);
    submitQuiz();
    document.getElementById('submitBtn').disabled = true;
    document.getElementById('timer').textContent = "⏰ Time's up!";
  }
}, 1000);

function submitQuiz() {
  // Stop the timer if it's still running
  if (timer) {
    clearInterval(timer);
    timer = null;
  }

  let questions = document.querySelectorAll('.question');
  let score = 0;
  questions.forEach(q => {
    let correctAnswer = q.getAttribute('data-answer');
    let options = q.querySelectorAll('input[type="radio"]');
    options.forEach(opt => {
      let label = opt.parentElement;
      label.classList.remove('correct', 'wrong');
      if (opt.checked) {
        if (opt.value === correctAnswer) {
          label.classList.add('correct');
          score++;
        } else {
          label.classList.add('wrong');
        }
      }
    });
  });

  let total = questions.length;
  document.getElementById('result').textContent = `You scored ${score} out of ${total}`;
  document.getElementById('submitBtn').disabled = true;
}