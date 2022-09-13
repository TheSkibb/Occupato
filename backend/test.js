import {postSeats} from 'post.js'
//this is a code which can be run to test locally without the need for arduino
//
function main(){
  var running = true;
  
  setInterval(runTest, 500)
}

function runTest(seatNumber){
  seatNumber = 4
  var seats = []
  for(var i = 0; i < seatNumber; i++){
    var seatStatus = Math.floor(Math.random() * 2)
    seats.push(seatStatus)
  }
  console.log(seats)
}

main()
