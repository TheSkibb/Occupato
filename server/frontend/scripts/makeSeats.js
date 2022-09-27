var seatContainer = document.getElementById('seatContainer')
var numberSeats = 4
var gridItem = '<div class="grid-item seatDiv">X</div>'
document.getElementById('numberOfSeats').innerHTML = numberSeats
for(i = 0; i < numberSeats; i++){
  seatContainer.innerHTML += gridItem 
}

var seatStatus

function getSeats(){
  fetch("http://localhost:3000/seatStatus")
    .then(response => {
      // indicates whether the response is successful (status code 200-299) or not
      if (!response.ok) {
        throw new Error(`Request failed with status ${reponse.status}`)
      }
      return response.json()
    })
    .then(data => {
      seatStatus = data.seats
      updateSeats(seatStatus)
    })
    .catch(error => console.log(error))
}

function updateSeats(seatStatus){
  const seats = document.getElementsByClassName('seatDiv')
  var availableSeats = 0
  for(i = 0; i < seats.length; i++){
    if(seatStatus[i] === 0){
      seats[i].style.background = '#dcd9d7'
    }
    else{
      seats[i].style.background = 'blue'
      availableSeats ++
    }
  }
  document.getElementById('availableSeats').innerHTML = availableSeats + '/'
}

setInterval(getSeats, 500)
