
"use strict";

let SetFloatValue = require('./SetFloatValue.js')
let SetROI = require('./SetROI.js')
let SetExposure = require('./SetExposure.js')
let SetBrightness = require('./SetBrightness.js')
let SetStringValue = require('./SetStringValue.js')
let SetBinning = require('./SetBinning.js')
let SetGain = require('./SetGain.js')
let SetSleeping = require('./SetSleeping.js')
let SetIntegerValue = require('./SetIntegerValue.js')
let GetCamProperties = require('./GetCamProperties.js')
let SetGamma = require('./SetGamma.js')

module.exports = {
  SetFloatValue: SetFloatValue,
  SetROI: SetROI,
  SetExposure: SetExposure,
  SetBrightness: SetBrightness,
  SetStringValue: SetStringValue,
  SetBinning: SetBinning,
  SetGain: SetGain,
  SetSleeping: SetSleeping,
  SetIntegerValue: SetIntegerValue,
  GetCamProperties: GetCamProperties,
  SetGamma: SetGamma,
};
