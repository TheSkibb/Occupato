const axios = require('axios')

const { SerialPort } = require('serialport')
const { ReadlineParser } = require('@serialport/parser-readline')
const port = new SerialPort({ path: '/dev/ttyACM0', baudRate: 9600 })

const parser = port.pipe(new ReadlineParser({ delimiter: '\n' }))
parser.on('data', await sendLog)

async function sendLog(data){
  data = Array.from(data.(0, data.length - 1))
  console.log(data)
}

async function postSeats(inputSeats){
  await axios.post('http://localhost:3000/seats', 
  {
    seats: inputSeats
  }
  )
  .then(function (response) {
    //console.log(response.data);
  })
  .catch(function (error) {
    console.log(error);
  });
}
