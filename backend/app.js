const axios = require('axios')

const { SerialPort } = require('serialport')
const { ReadlineParser } = require('@serialport/parser-readline')
const port = new SerialPort({ path: '/dev/ttyACM1', baudRate: 9600 })

const parser = port.pipe(new ReadlineParser({ delimiter: '\n' }))
parser.on('data', )

function sendLog(data){
  console.log(data)
}

