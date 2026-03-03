const myCheckBox = document.querySelector("#myCheckBox");
const visaBtn = document.querySelector("#visaBtn");
const masterCard = document.querySelector("#masterCard");
const paypalBtn = document.querySelector("#paypalBtn");
const mySubmit = document.querySelector("#mySubmit");
const subResult = document.querySelector("#subResult");
const paymentResult = document.querySelector("#paymentResult");

mySubmit.onclick = function () {
  if (myCheckBox.checked) subResult.textContent = `You're subscribed!`;
  else subResult.textContent = `You're not subscribed!`;

  if (visaBtn.checked) paymentResult.textContent(`You're paying with visa`);
  else if (masterCard.checked)
    paymentResult.textContent(`You're paying with Master Card`);
  else if (paypalBtn.checked)
    paymentResult.textContent(`You're paying with Master Card`);
  else paymentResult.textContent(`You're not paying`);
};
