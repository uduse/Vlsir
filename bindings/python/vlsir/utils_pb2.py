# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: utils.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database

# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(
    b'\n\x0butils.proto\x12\x0bvlsir.utils"`\n\x08Prefixed\x12%\n\x06prefix\x18\x01 \x01(\x0e\x32\x15.vlsir.utils.SIPrefix\x12\x11\n\x07integer\x18\x02 \x01(\x03H\x00\x12\x10\n\x06string\x18\x04 \x01(\tH\x00\x42\x08\n\x06number"\x8a\x01\n\nParamValue\x12\x11\n\x07integer\x18\x02 \x01(\x03H\x00\x12\x10\n\x06\x64ouble\x18\x03 \x01(\x01H\x00\x12\x10\n\x06string\x18\x04 \x01(\tH\x00\x12\x11\n\x07literal\x18\x05 \x01(\tH\x00\x12)\n\x08prefixed\x18\x06 \x01(\x0b\x32\x15.vlsir.utils.PrefixedH\x00\x42\x07\n\x05value"K\n\x05Param\x12\x0c\n\x04name\x18\x01 \x01(\t\x12&\n\x05value\x18\x02 \x01(\x0b\x32\x17.vlsir.utils.ParamValue\x12\x0c\n\x04\x64\x65sc\x18\x03 \x01(\t"-\n\rQualifiedName\x12\x0e\n\x06\x64omain\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t"R\n\tReference\x12\x0f\n\x05local\x18\x01 \x01(\tH\x00\x12.\n\x08\x65xternal\x18\x02 \x01(\x0b\x32\x1a.vlsir.utils.QualifiedNameH\x00\x42\x04\n\x02to"b\n\x0fLibraryMetadata\x12\x0e\n\x06\x64omain\x18\x01 \x01(\t\x12\x12\n\ncell_names\x18\n \x03(\t\x12+\n\x06\x61uthor\x18\x14 \x01(\x0b\x32\x1b.vlsir.utils.AuthorMetadata"D\n\x0e\x41uthorMetadata\x12\x0e\n\x06\x61uthor\x18\x01 \x01(\t\x12\x11\n\tcopyright\x18\n \x01(\t\x12\x0f\n\x07license\x18\x0b \x01(\t*\xe4\x01\n\x08SIPrefix\x12\t\n\x05YOCTO\x10\x00\x12\t\n\x05ZEPTO\x10\x01\x12\x08\n\x04\x41TTO\x10\x02\x12\t\n\x05\x46\x45MTO\x10\x03\x12\x08\n\x04PICO\x10\x04\x12\x08\n\x04NANO\x10\x05\x12\t\n\x05MICRO\x10\x06\x12\t\n\x05MILLI\x10\x07\x12\t\n\x05\x43\x45NTI\x10\x08\x12\x08\n\x04\x44\x45\x43I\x10\t\x12\x08\n\x04\x44\x45\x43\x41\x10\n\x12\t\n\x05HECTO\x10\x0b\x12\x08\n\x04KILO\x10\x0c\x12\x08\n\x04MEGA\x10\r\x12\x08\n\x04GIGA\x10\x0e\x12\x08\n\x04TERA\x10\x0f\x12\x08\n\x04PETA\x10\x10\x12\x07\n\x03\x45XA\x10\x11\x12\t\n\x05ZETTA\x10\x12\x12\t\n\x05YOTTA\x10\x13\x12\x08\n\x04UNIT\x10\x14\x62\x06proto3'
)

_SIPREFIX = DESCRIPTOR.enum_types_by_name["SIPrefix"]
SIPrefix = enum_type_wrapper.EnumTypeWrapper(_SIPREFIX)
YOCTO = 0
ZEPTO = 1
ATTO = 2
FEMTO = 3
PICO = 4
NANO = 5
MICRO = 6
MILLI = 7
CENTI = 8
DECI = 9
DECA = 10
HECTO = 11
KILO = 12
MEGA = 13
GIGA = 14
TERA = 15
PETA = 16
EXA = 17
ZETTA = 18
YOTTA = 19
UNIT = 20


_PREFIXED = DESCRIPTOR.message_types_by_name["Prefixed"]
_PARAMVALUE = DESCRIPTOR.message_types_by_name["ParamValue"]
_PARAM = DESCRIPTOR.message_types_by_name["Param"]
_QUALIFIEDNAME = DESCRIPTOR.message_types_by_name["QualifiedName"]
_REFERENCE = DESCRIPTOR.message_types_by_name["Reference"]
_LIBRARYMETADATA = DESCRIPTOR.message_types_by_name["LibraryMetadata"]
_AUTHORMETADATA = DESCRIPTOR.message_types_by_name["AuthorMetadata"]
Prefixed = _reflection.GeneratedProtocolMessageType(
    "Prefixed",
    (_message.Message,),
    {
        "DESCRIPTOR": _PREFIXED,
        "__module__": "utils_pb2"
        # @@protoc_insertion_point(class_scope:vlsir.utils.Prefixed)
    },
)
_sym_db.RegisterMessage(Prefixed)

ParamValue = _reflection.GeneratedProtocolMessageType(
    "ParamValue",
    (_message.Message,),
    {
        "DESCRIPTOR": _PARAMVALUE,
        "__module__": "utils_pb2"
        # @@protoc_insertion_point(class_scope:vlsir.utils.ParamValue)
    },
)
_sym_db.RegisterMessage(ParamValue)

Param = _reflection.GeneratedProtocolMessageType(
    "Param",
    (_message.Message,),
    {
        "DESCRIPTOR": _PARAM,
        "__module__": "utils_pb2"
        # @@protoc_insertion_point(class_scope:vlsir.utils.Param)
    },
)
_sym_db.RegisterMessage(Param)

QualifiedName = _reflection.GeneratedProtocolMessageType(
    "QualifiedName",
    (_message.Message,),
    {
        "DESCRIPTOR": _QUALIFIEDNAME,
        "__module__": "utils_pb2"
        # @@protoc_insertion_point(class_scope:vlsir.utils.QualifiedName)
    },
)
_sym_db.RegisterMessage(QualifiedName)

Reference = _reflection.GeneratedProtocolMessageType(
    "Reference",
    (_message.Message,),
    {
        "DESCRIPTOR": _REFERENCE,
        "__module__": "utils_pb2"
        # @@protoc_insertion_point(class_scope:vlsir.utils.Reference)
    },
)
_sym_db.RegisterMessage(Reference)

LibraryMetadata = _reflection.GeneratedProtocolMessageType(
    "LibraryMetadata",
    (_message.Message,),
    {
        "DESCRIPTOR": _LIBRARYMETADATA,
        "__module__": "utils_pb2"
        # @@protoc_insertion_point(class_scope:vlsir.utils.LibraryMetadata)
    },
)
_sym_db.RegisterMessage(LibraryMetadata)

AuthorMetadata = _reflection.GeneratedProtocolMessageType(
    "AuthorMetadata",
    (_message.Message,),
    {
        "DESCRIPTOR": _AUTHORMETADATA,
        "__module__": "utils_pb2"
        # @@protoc_insertion_point(class_scope:vlsir.utils.AuthorMetadata)
    },
)
_sym_db.RegisterMessage(AuthorMetadata)

if _descriptor._USE_C_DESCRIPTORS == False:

    DESCRIPTOR._options = None
    _SIPREFIX._serialized_start = 646
    _SIPREFIX._serialized_end = 874
    _PREFIXED._serialized_start = 28
    _PREFIXED._serialized_end = 124
    _PARAMVALUE._serialized_start = 127
    _PARAMVALUE._serialized_end = 265
    _PARAM._serialized_start = 267
    _PARAM._serialized_end = 342
    _QUALIFIEDNAME._serialized_start = 344
    _QUALIFIEDNAME._serialized_end = 389
    _REFERENCE._serialized_start = 391
    _REFERENCE._serialized_end = 473
    _LIBRARYMETADATA._serialized_start = 475
    _LIBRARYMETADATA._serialized_end = 573
    _AUTHORMETADATA._serialized_start = 575
    _AUTHORMETADATA._serialized_end = 643
# @@protoc_insertion_point(module_scope)
