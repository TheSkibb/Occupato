import mongoose from 'mongoose'

export const testValue = {}

const { Schema, model } = mongoose;

const seatSchema = new Schema({
  seatID: Number
})
const sittingSchema = new Schema({
  sittingID: Number,
  seatID: Number,
  startTime: Date,
  endTime: Date
})

const seat = model('seat', seatSchema)
const sitting = model('sitting', sittingSchema)
