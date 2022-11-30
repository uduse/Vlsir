/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.vlsir.spice.NoiseInput');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.vlsir.spice.Control');


/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.vlsir.spice.NoiseInput = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.vlsir.spice.NoiseInput.repeatedFields_, null);
};
goog.inherits(proto.vlsir.spice.NoiseInput, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.vlsir.spice.NoiseInput.displayName = 'proto.vlsir.spice.NoiseInput';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.vlsir.spice.NoiseInput.repeatedFields_ = [20];



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.vlsir.spice.NoiseInput.prototype.toObject = function(opt_includeInstance) {
  return proto.vlsir.spice.NoiseInput.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.vlsir.spice.NoiseInput} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.vlsir.spice.NoiseInput.toObject = function(includeInstance, msg) {
  var f, obj = {
    analysisName: jspb.Message.getFieldWithDefault(msg, 1, ""),
    outputP: jspb.Message.getFieldWithDefault(msg, 2, ""),
    outputN: jspb.Message.getFieldWithDefault(msg, 3, ""),
    inputSource: jspb.Message.getFieldWithDefault(msg, 4, ""),
    fstart: +jspb.Message.getFieldWithDefault(msg, 10, 0.0),
    fstop: +jspb.Message.getFieldWithDefault(msg, 11, 0.0),
    npts: jspb.Message.getFieldWithDefault(msg, 12, 0),
    ctrlsList: jspb.Message.toObjectList(msg.getCtrlsList(),
    proto.vlsir.spice.Control.toObject, includeInstance),
    raw: jspb.Message.getFieldWithDefault(msg, 6, "")
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.vlsir.spice.NoiseInput}
 */
proto.vlsir.spice.NoiseInput.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.vlsir.spice.NoiseInput;
  return proto.vlsir.spice.NoiseInput.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.vlsir.spice.NoiseInput} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.vlsir.spice.NoiseInput}
 */
proto.vlsir.spice.NoiseInput.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setAnalysisName(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setOutputP(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setOutputN(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.setInputSource(value);
      break;
    case 10:
      var value = /** @type {number} */ (reader.readDouble());
      msg.setFstart(value);
      break;
    case 11:
      var value = /** @type {number} */ (reader.readDouble());
      msg.setFstop(value);
      break;
    case 12:
      var value = /** @type {number} */ (reader.readUint64());
      msg.setNpts(value);
      break;
    case 20:
      var value = new proto.vlsir.spice.Control;
      reader.readMessage(value,proto.vlsir.spice.Control.deserializeBinaryFromReader);
      msg.addCtrls(value);
      break;
    case 6:
      var value = /** @type {string} */ (reader.readString());
      msg.setRaw(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.vlsir.spice.NoiseInput.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.vlsir.spice.NoiseInput.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.vlsir.spice.NoiseInput} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.vlsir.spice.NoiseInput.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getAnalysisName();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getOutputP();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getOutputN();
  if (f.length > 0) {
    writer.writeString(
      3,
      f
    );
  }
  f = message.getInputSource();
  if (f.length > 0) {
    writer.writeString(
      4,
      f
    );
  }
  f = message.getFstart();
  if (f !== 0.0) {
    writer.writeDouble(
      10,
      f
    );
  }
  f = message.getFstop();
  if (f !== 0.0) {
    writer.writeDouble(
      11,
      f
    );
  }
  f = message.getNpts();
  if (f !== 0) {
    writer.writeUint64(
      12,
      f
    );
  }
  f = message.getCtrlsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      20,
      f,
      proto.vlsir.spice.Control.serializeBinaryToWriter
    );
  }
  f = message.getRaw();
  if (f.length > 0) {
    writer.writeString(
      6,
      f
    );
  }
};


/**
 * optional string analysis_name = 1;
 * @return {string}
 */
proto.vlsir.spice.NoiseInput.prototype.getAnalysisName = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.vlsir.spice.NoiseInput.prototype.setAnalysisName = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional string output_p = 2;
 * @return {string}
 */
proto.vlsir.spice.NoiseInput.prototype.getOutputP = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.vlsir.spice.NoiseInput.prototype.setOutputP = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional string output_n = 3;
 * @return {string}
 */
proto.vlsir.spice.NoiseInput.prototype.getOutputN = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/** @param {string} value */
proto.vlsir.spice.NoiseInput.prototype.setOutputN = function(value) {
  jspb.Message.setProto3StringField(this, 3, value);
};


/**
 * optional string input_source = 4;
 * @return {string}
 */
proto.vlsir.spice.NoiseInput.prototype.getInputSource = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/** @param {string} value */
proto.vlsir.spice.NoiseInput.prototype.setInputSource = function(value) {
  jspb.Message.setProto3StringField(this, 4, value);
};


/**
 * optional double fstart = 10;
 * @return {number}
 */
proto.vlsir.spice.NoiseInput.prototype.getFstart = function() {
  return /** @type {number} */ (+jspb.Message.getFieldWithDefault(this, 10, 0.0));
};


/** @param {number} value */
proto.vlsir.spice.NoiseInput.prototype.setFstart = function(value) {
  jspb.Message.setProto3FloatField(this, 10, value);
};


/**
 * optional double fstop = 11;
 * @return {number}
 */
proto.vlsir.spice.NoiseInput.prototype.getFstop = function() {
  return /** @type {number} */ (+jspb.Message.getFieldWithDefault(this, 11, 0.0));
};


/** @param {number} value */
proto.vlsir.spice.NoiseInput.prototype.setFstop = function(value) {
  jspb.Message.setProto3FloatField(this, 11, value);
};


/**
 * optional uint64 npts = 12;
 * @return {number}
 */
proto.vlsir.spice.NoiseInput.prototype.getNpts = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 12, 0));
};


/** @param {number} value */
proto.vlsir.spice.NoiseInput.prototype.setNpts = function(value) {
  jspb.Message.setProto3IntField(this, 12, value);
};


/**
 * repeated Control ctrls = 20;
 * @return {!Array<!proto.vlsir.spice.Control>}
 */
proto.vlsir.spice.NoiseInput.prototype.getCtrlsList = function() {
  return /** @type{!Array<!proto.vlsir.spice.Control>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.vlsir.spice.Control, 20));
};


/** @param {!Array<!proto.vlsir.spice.Control>} value */
proto.vlsir.spice.NoiseInput.prototype.setCtrlsList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 20, value);
};


/**
 * @param {!proto.vlsir.spice.Control=} opt_value
 * @param {number=} opt_index
 * @return {!proto.vlsir.spice.Control}
 */
proto.vlsir.spice.NoiseInput.prototype.addCtrls = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 20, opt_value, proto.vlsir.spice.Control, opt_index);
};


proto.vlsir.spice.NoiseInput.prototype.clearCtrlsList = function() {
  this.setCtrlsList([]);
};


/**
 * optional string raw = 6;
 * @return {string}
 */
proto.vlsir.spice.NoiseInput.prototype.getRaw = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 6, ""));
};


/** @param {string} value */
proto.vlsir.spice.NoiseInput.prototype.setRaw = function(value) {
  jspb.Message.setProto3StringField(this, 6, value);
};


