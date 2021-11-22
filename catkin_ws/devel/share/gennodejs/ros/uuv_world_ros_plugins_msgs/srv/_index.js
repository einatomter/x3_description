
"use strict";

let SetCurrentVelocity = require('./SetCurrentVelocity.js')
let TransformFromSphericalCoord = require('./TransformFromSphericalCoord.js')
let GetOriginSphericalCoord = require('./GetOriginSphericalCoord.js')
let TransformToSphericalCoord = require('./TransformToSphericalCoord.js')
let SetCurrentDirection = require('./SetCurrentDirection.js')
let GetCurrentModel = require('./GetCurrentModel.js')
let SetOriginSphericalCoord = require('./SetOriginSphericalCoord.js')
let SetCurrentModel = require('./SetCurrentModel.js')

module.exports = {
  SetCurrentVelocity: SetCurrentVelocity,
  TransformFromSphericalCoord: TransformFromSphericalCoord,
  GetOriginSphericalCoord: GetOriginSphericalCoord,
  TransformToSphericalCoord: TransformToSphericalCoord,
  SetCurrentDirection: SetCurrentDirection,
  GetCurrentModel: GetCurrentModel,
  SetOriginSphericalCoord: SetOriginSphericalCoord,
  SetCurrentModel: SetCurrentModel,
};
