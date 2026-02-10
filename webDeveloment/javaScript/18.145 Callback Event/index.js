function anotherAddEventListener(typeOfEvent, callback) {
  var eventThatHappend = {
    eventType: "keydown",
    key: "p",
    durationOfKeyPress: 2,
  };

  if (eventThatEvent.eventType === typeOfEvent) {
    callback(eventThatHappend);
  }
}

anotherAddEventListener("keydown", function (event) {
  console.log(event);
});
