# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: tech.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database

# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(
    b'\n\ntech.proto\x12\nvlsir.tech"\x81\x01\n\nTechnology\x12\x0c\n\x04name\x18\x01 \x01(\t\x12%\n\x08packages\x18\x0b \x03(\x0b\x32\x13.vlsir.tech.Package\x12%\n\x06layers\x18\x65 \x03(\x0b\x32\x15.vlsir.tech.LayerInfo\x12\x17\n\x0flabel_sub_index\x18\x66 \x01(\t"\x17\n\x07Package\x12\x0c\n\x04name\x18\x01 \x01(\t"L\n\tLayerInfo\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x0f\n\x07purpose\x18\x0b \x01(\t\x12\r\n\x05index\x18\x15 \x01(\x04\x12\x11\n\tsub_index\x18\x1f \x01(\x04\x62\x06proto3'
)


_TECHNOLOGY = DESCRIPTOR.message_types_by_name["Technology"]
_PACKAGE = DESCRIPTOR.message_types_by_name["Package"]
_LAYERINFO = DESCRIPTOR.message_types_by_name["LayerInfo"]
Technology = _reflection.GeneratedProtocolMessageType(
    "Technology",
    (_message.Message,),
    {
        "DESCRIPTOR": _TECHNOLOGY,
        "__module__": "tech_pb2"
        # @@protoc_insertion_point(class_scope:vlsir.tech.Technology)
    },
)
_sym_db.RegisterMessage(Technology)

Package = _reflection.GeneratedProtocolMessageType(
    "Package",
    (_message.Message,),
    {
        "DESCRIPTOR": _PACKAGE,
        "__module__": "tech_pb2"
        # @@protoc_insertion_point(class_scope:vlsir.tech.Package)
    },
)
_sym_db.RegisterMessage(Package)

LayerInfo = _reflection.GeneratedProtocolMessageType(
    "LayerInfo",
    (_message.Message,),
    {
        "DESCRIPTOR": _LAYERINFO,
        "__module__": "tech_pb2"
        # @@protoc_insertion_point(class_scope:vlsir.tech.LayerInfo)
    },
)
_sym_db.RegisterMessage(LayerInfo)

if _descriptor._USE_C_DESCRIPTORS == False:

    DESCRIPTOR._options = None
    _TECHNOLOGY._serialized_start = 27
    _TECHNOLOGY._serialized_end = 156
    _PACKAGE._serialized_start = 158
    _PACKAGE._serialized_end = 181
    _LAYERINFO._serialized_start = 183
    _LAYERINFO._serialized_end = 259
# @@protoc_insertion_point(module_scope)
