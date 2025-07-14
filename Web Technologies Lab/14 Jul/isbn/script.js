const form = document.querySelector("form");
form.addEventListener("submit", (e) => {
  // Prevent page from reloading on form submit
  e.preventDefault();

  let input = document.querySelector("#isbn").value;
  input = input.replaceAll("-", "");

  let sum = 0;
  for (let i = 0; i <= input.length - 2; i++) {
    if (isNaN(input[i])) {
      sum = -1;
      break;
    }
    if (i % 2 === 0) {
      sum += Number(input[i]);
    } else {
      sum += Number(input[i]) * 3;
    }
  }

  const checkDigit = (10 - (sum % 10)) % 10;

  console.log({
    sum,
    checkDigit,
    lastDigit: input.at(-1),
  });

  let para = document.querySelector("#verify");
  if (!para) {
    para = document.createElement("p");
    para.id = "verify";
    form.append(para);
  }
  document.querySelector("form").append(para);

  if (Number(input[input.length - 1]) === checkDigit) {
    para.textContent = "Correct!";
  } else {
    para.textContent = "Incorrect!";
  }
});
