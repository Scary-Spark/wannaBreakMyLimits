const fs = require("fs");

// Write file
fs.writeFile("./message.txt", "Hello from node js!", (err) => {
  if (err) throw err;
  console.log("File has been created");
});

// Read file
fs.readFile("./personData.txt", "utf-8", (err, data) => {
  if (err) throw err;
  console.log(data);
});
