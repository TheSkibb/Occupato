/*const { ReadlineParser } = require('@serialport/parser-readline')


const { SerialPort } = require('serialport')
var serialPort = new SerialPort({ path: 'COM4', baudRate: 9600, parsers: new ReadlineParser()
});

// Switches the port into "flowing mode"
serialPort.on('data', function (data) {
    console.log('Data:', data);
});
// Read data that is available but keep the stream from entering //"flowing mode"
serialPort.on('data', function () {
    console.log('Data:', serialPort.read());
});*/


const { SerialPort } = require('serialport')
const { ReadlineParser } = require('@serialport/parser-readline')
const port = new SerialPort({ path: 'COM4', baudRate: 9600 })

const parser = port.pipe(new ReadlineParser({ delimiter: '\n' }))
parser.on('data', console.log)

