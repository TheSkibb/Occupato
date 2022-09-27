const path = require('path')
const express = require('express')
const app = express()
const port = 3000

var retults = [] 
var bodyParser = require('body-parser');
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json())

//app.use(express.static(__dirname + 

app.get('/', (req, res) => {
      res.sendFile(path.join(__dirname, '/frontend/index.html'))
      res.sendFile(path.join(__dirname, '/frontend/styles/styles.css'))
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})

app.post('/seats', async (req, res) => {
  console.log('post request received');
  await console.log(req.body)
  results.push(req.body)
  res.send('received')
})

app.get('/seats', async (req, res) =>{
  res.sendFile('./frontend/iframehtml.html')
})


