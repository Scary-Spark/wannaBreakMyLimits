import express from "express";
const app = express();
const port = 3000;

app.get("/", (req, res) => {
  const today = new Date();
  const day = today.getDate();

  res.render("index.ejs", {
    daytype: "A weekday",
    advice: "It's time to work",
  });
});

app.listen(port, (req, res) => {
  console.log(`Server running on port ${port}`);
});
