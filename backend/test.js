const axios = require('axios')

function main(){
  //var running = true;
  
  console.log('sending post request')
  setInterval(runTest, 500)
  console.log('finished')
}

async function runTest(seatNumber){
  seatNumber = 4
  var seats = []
  for(var i = 0; i < seatNumber; i++){
    var seatStatus = Math.floor(Math.random() * 2)
    seats.push(seatStatus)
  }
  console.log(seats)
  await postSeats(seats)
}

async function postSeats(inputSeats){
  await axios.post('http://localhost:3000/seats', 
  {
    seats: inputSeats
  }
  )
  .then(function (response) {
    console.log(response.data);
  })
  .catch(function (error) {
    console.log(error);
  });
}

main()
