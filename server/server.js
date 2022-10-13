import mongoose from 'mongoose'

import {testValue} from './db.js'

import path from 'path'
import express from 'express'
import bodyparser  from 'body-parser'
const app = express()
const port = 3000

var retults = [] 
var bodyParser = bodyparser
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json())


app.get('/', (req, res) => {
      res.sendFile(path.join(__dirname, '/frontend/index.html'))
})

app.get('/seatIframe', (req, res) => {
      res.sendFile(path.join(__dirname, 'frontend/iframehtml.html'))
})

app.get('/styles.css', (req, res) => {
      res.sendFile(path.join(__dirname, '/frontend/styles.css'))
})

app.get('/stylesIframe.css', (req, res) => {
      res.sendFile(path.join(__dirname, '/frontend/stylesIframe.css'))
})

app.get('/makeSeats', (req, res) => {
      res.sendFile(path.join(__dirname, '/frontend/scripts/makeSeats.js'))
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})

var currentSeatStatus
var tenLastStatus

app.post('/seats', async (req, res) => {
  console.log('post request received');
  await console.log(req.body)
  //results.push(req.body)
  currentSeatStatus = req.body
  res.send('received')
})

app.get('/seatStatus', (req, res) => {
  if(currentSeatStatus){
    res.json(
      currentSeatStatus
    )
  }
  else{
    res.json({
      seats: [0, 0, 0, 0]
    })
  }
})

app.get('/testSeatStatus', (req, res) => {
  res.json({
    seats: [0, 1, 0, 1]
  })
})

app.get('/seats', async (req, res) =>{
  res.sendFile('./frontend/iframehtml.html')
})


