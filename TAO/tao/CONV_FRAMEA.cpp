// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "CONV_FRAMEC.h"
#include "tao/Typecode.h"
#include "tao/CDR.h"
#include "tao/Any.h"
#include "tao/Any_Dual_Impl_T.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_CONV_FRAME_CodeSetId[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  37,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x65744964), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
    10,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657449), 
  ACE_NTOHL (0x64000000),  // name = CodeSetId
    CORBA::tk_ulong,

};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetId (
    CORBA::tk_alias,
    sizeof (_oc_CONV_FRAME_CodeSetId),
    (char *) &_oc_CONV_FRAME_CodeSetId,
    0,
    0
  );

namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr _tc_CodeSetId =
    &_tc_TAO_tc_CONV_FRAME_CodeSetId;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_CONV_FRAME_CodeSetIdSeq[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  40,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x65744964), 
  ACE_NTOHL (0x5365713a), 
  ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetIdSeq:1.0
    13,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657449), 
  ACE_NTOHL (0x64536571), 
  ACE_NTOHL (0x0),  // name = CodeSetIdSeq
    CORBA::tk_sequence, // typecode kind
  84, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_alias, // typecode kind for typedefs
    68, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      37,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f4e56), 
      ACE_NTOHL (0x5f465241), 
      ACE_NTOHL (0x4d452f43), 
      ACE_NTOHL (0x6f646553), 
      ACE_NTOHL (0x65744964), 
      ACE_NTOHL (0x3a312e30), 
      ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
            10,
      ACE_NTOHL (0x436f6465), 
      ACE_NTOHL (0x53657449), 
      ACE_NTOHL (0x64000000),  // name = CodeSetId
            CORBA::tk_ulong,


    0U,

};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetIdSeq (
    CORBA::tk_alias,
    sizeof (_oc_CONV_FRAME_CodeSetIdSeq),
    (char *) &_oc_CONV_FRAME_CodeSetIdSeq,
    0,
    0
  );

namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr _tc_CodeSetIdSeq =
    &_tc_TAO_tc_CONV_FRAME_CodeSetIdSeq;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_CONV_FRAME_CodeSetComponent[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  44,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x6574436f), 
  ACE_NTOHL (0x6d706f6e), 
  ACE_NTOHL (0x656e743a), 
  ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetComponent:1.0
    17,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657443), 
  ACE_NTOHL (0x6f6d706f), 
  ACE_NTOHL (0x6e656e74), 
  ACE_NTOHL (0x0),  // name = CodeSetComponent
  2, // member count
    16,
  ACE_NTOHL (0x6e617469), 
  ACE_NTOHL (0x76655f63), 
  ACE_NTOHL (0x6f64655f), 
  ACE_NTOHL (0x73657400),  // name = native_code_set
    CORBA::tk_alias, // typecode kind for typedefs
  68, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    37,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x65744964), 
    ACE_NTOHL (0x3a312e30), 
    ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
        10,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657449), 
    ACE_NTOHL (0x64000000),  // name = CodeSetId
        CORBA::tk_ulong,


  21,
  ACE_NTOHL (0x636f6e76), 
  ACE_NTOHL (0x65727369), 
  ACE_NTOHL (0x6f6e5f63), 
  ACE_NTOHL (0x6f64655f), 
  ACE_NTOHL (0x73657473), 
  ACE_NTOHL (0x0),  // name = conversion_code_sets
    CORBA::tk_alias, // typecode kind for typedefs
  160, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    40,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x65744964), 
    ACE_NTOHL (0x5365713a), 
    ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetIdSeq:1.0
        13,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657449), 
    ACE_NTOHL (0x64536571), 
    ACE_NTOHL (0x0),  // name = CodeSetIdSeq
        CORBA::tk_sequence, // typecode kind
    84, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      CORBA::tk_alias, // typecode kind for typedefs
      68, // encapsulation length
        TAO_ENCAP_BYTE_ORDER, // byte order
        37,
        ACE_NTOHL (0x49444c3a), 
        ACE_NTOHL (0x6f6d672e), 
        ACE_NTOHL (0x6f72672f), 
        ACE_NTOHL (0x434f4e56), 
        ACE_NTOHL (0x5f465241), 
        ACE_NTOHL (0x4d452f43), 
        ACE_NTOHL (0x6f646553), 
        ACE_NTOHL (0x65744964), 
        ACE_NTOHL (0x3a312e30), 
        ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
                10,
        ACE_NTOHL (0x436f6465), 
        ACE_NTOHL (0x53657449), 
        ACE_NTOHL (0x64000000),  // name = CodeSetId
                CORBA::tk_ulong,


      0U,


};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetComponent (
    CORBA::tk_struct,
    sizeof (_oc_CONV_FRAME_CodeSetComponent),
    (char *) &_oc_CONV_FRAME_CodeSetComponent,
    0,
    0
  );

namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr _tc_CodeSetComponent =
    &_tc_TAO_tc_CONV_FRAME_CodeSetComponent;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_CONV_FRAME_CodeSetComponentInfo[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  48,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x6574436f), 
  ACE_NTOHL (0x6d706f6e), 
  ACE_NTOHL (0x656e7449), 
  ACE_NTOHL (0x6e666f3a), 
  ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetComponentInfo:1.0
    21,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657443), 
  ACE_NTOHL (0x6f6d706f), 
  ACE_NTOHL (0x6e656e74), 
  ACE_NTOHL (0x496e666f), 
  ACE_NTOHL (0x0),  // name = CodeSetComponentInfo
  2, // member count
    12,
  ACE_NTOHL (0x466f7243), 
  ACE_NTOHL (0x68617244), 
  ACE_NTOHL (0x61746100),  // name = ForCharData
    CORBA::tk_struct, // typecode kind
  372, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    44,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x6574436f), 
    ACE_NTOHL (0x6d706f6e), 
    ACE_NTOHL (0x656e743a), 
    ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetComponent:1.0
        17,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657443), 
    ACE_NTOHL (0x6f6d706f), 
    ACE_NTOHL (0x6e656e74), 
    ACE_NTOHL (0x0),  // name = CodeSetComponent
    2, // member count
        16,
    ACE_NTOHL (0x6e617469), 
    ACE_NTOHL (0x76655f63), 
    ACE_NTOHL (0x6f64655f), 
    ACE_NTOHL (0x73657400),  // name = native_code_set
        CORBA::tk_alias, // typecode kind for typedefs
    68, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      37,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f4e56), 
      ACE_NTOHL (0x5f465241), 
      ACE_NTOHL (0x4d452f43), 
      ACE_NTOHL (0x6f646553), 
      ACE_NTOHL (0x65744964), 
      ACE_NTOHL (0x3a312e30), 
      ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
            10,
      ACE_NTOHL (0x436f6465), 
      ACE_NTOHL (0x53657449), 
      ACE_NTOHL (0x64000000),  // name = CodeSetId
            CORBA::tk_ulong,


    21,
    ACE_NTOHL (0x636f6e76), 
    ACE_NTOHL (0x65727369), 
    ACE_NTOHL (0x6f6e5f63), 
    ACE_NTOHL (0x6f64655f), 
    ACE_NTOHL (0x73657473), 
    ACE_NTOHL (0x0),  // name = conversion_code_sets
        CORBA::tk_alias, // typecode kind for typedefs
    160, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      40,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f4e56), 
      ACE_NTOHL (0x5f465241), 
      ACE_NTOHL (0x4d452f43), 
      ACE_NTOHL (0x6f646553), 
      ACE_NTOHL (0x65744964), 
      ACE_NTOHL (0x5365713a), 
      ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetIdSeq:1.0
            13,
      ACE_NTOHL (0x436f6465), 
      ACE_NTOHL (0x53657449), 
      ACE_NTOHL (0x64536571), 
      ACE_NTOHL (0x0),  // name = CodeSetIdSeq
            CORBA::tk_sequence, // typecode kind
      84, // encapsulation length
        TAO_ENCAP_BYTE_ORDER, // byte order
        CORBA::tk_alias, // typecode kind for typedefs
        68, // encapsulation length
          TAO_ENCAP_BYTE_ORDER, // byte order
          37,
          ACE_NTOHL (0x49444c3a), 
          ACE_NTOHL (0x6f6d672e), 
          ACE_NTOHL (0x6f72672f), 
          ACE_NTOHL (0x434f4e56), 
          ACE_NTOHL (0x5f465241), 
          ACE_NTOHL (0x4d452f43), 
          ACE_NTOHL (0x6f646553), 
          ACE_NTOHL (0x65744964), 
          ACE_NTOHL (0x3a312e30), 
          ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
                    10,
          ACE_NTOHL (0x436f6465), 
          ACE_NTOHL (0x53657449), 
          ACE_NTOHL (0x64000000),  // name = CodeSetId
                    CORBA::tk_ulong,


        0U,



  13,
  ACE_NTOHL (0x466f7257), 
  ACE_NTOHL (0x63686172), 
  ACE_NTOHL (0x44617461), 
  ACE_NTOHL (0x0),  // name = ForWcharData
    CORBA::tk_struct, // typecode kind
  372, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    44,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x6574436f), 
    ACE_NTOHL (0x6d706f6e), 
    ACE_NTOHL (0x656e743a), 
    ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetComponent:1.0
        17,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657443), 
    ACE_NTOHL (0x6f6d706f), 
    ACE_NTOHL (0x6e656e74), 
    ACE_NTOHL (0x0),  // name = CodeSetComponent
    2, // member count
        16,
    ACE_NTOHL (0x6e617469), 
    ACE_NTOHL (0x76655f63), 
    ACE_NTOHL (0x6f64655f), 
    ACE_NTOHL (0x73657400),  // name = native_code_set
        CORBA::tk_alias, // typecode kind for typedefs
    68, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      37,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f4e56), 
      ACE_NTOHL (0x5f465241), 
      ACE_NTOHL (0x4d452f43), 
      ACE_NTOHL (0x6f646553), 
      ACE_NTOHL (0x65744964), 
      ACE_NTOHL (0x3a312e30), 
      ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
            10,
      ACE_NTOHL (0x436f6465), 
      ACE_NTOHL (0x53657449), 
      ACE_NTOHL (0x64000000),  // name = CodeSetId
            CORBA::tk_ulong,


    21,
    ACE_NTOHL (0x636f6e76), 
    ACE_NTOHL (0x65727369), 
    ACE_NTOHL (0x6f6e5f63), 
    ACE_NTOHL (0x6f64655f), 
    ACE_NTOHL (0x73657473), 
    ACE_NTOHL (0x0),  // name = conversion_code_sets
        CORBA::tk_alias, // typecode kind for typedefs
    160, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      40,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f4e56), 
      ACE_NTOHL (0x5f465241), 
      ACE_NTOHL (0x4d452f43), 
      ACE_NTOHL (0x6f646553), 
      ACE_NTOHL (0x65744964), 
      ACE_NTOHL (0x5365713a), 
      ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetIdSeq:1.0
            13,
      ACE_NTOHL (0x436f6465), 
      ACE_NTOHL (0x53657449), 
      ACE_NTOHL (0x64536571), 
      ACE_NTOHL (0x0),  // name = CodeSetIdSeq
            CORBA::tk_sequence, // typecode kind
      84, // encapsulation length
        TAO_ENCAP_BYTE_ORDER, // byte order
        CORBA::tk_alias, // typecode kind for typedefs
        68, // encapsulation length
          TAO_ENCAP_BYTE_ORDER, // byte order
          37,
          ACE_NTOHL (0x49444c3a), 
          ACE_NTOHL (0x6f6d672e), 
          ACE_NTOHL (0x6f72672f), 
          ACE_NTOHL (0x434f4e56), 
          ACE_NTOHL (0x5f465241), 
          ACE_NTOHL (0x4d452f43), 
          ACE_NTOHL (0x6f646553), 
          ACE_NTOHL (0x65744964), 
          ACE_NTOHL (0x3a312e30), 
          ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
                    10,
          ACE_NTOHL (0x436f6465), 
          ACE_NTOHL (0x53657449), 
          ACE_NTOHL (0x64000000),  // name = CodeSetId
                    CORBA::tk_ulong,


        0U,



};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetComponentInfo (
    CORBA::tk_struct,
    sizeof (_oc_CONV_FRAME_CodeSetComponentInfo),
    (char *) &_oc_CONV_FRAME_CodeSetComponentInfo,
    0,
    0
  );

namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr _tc_CodeSetComponentInfo =
    &_tc_TAO_tc_CONV_FRAME_CodeSetComponentInfo;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_CONV_FRAME_CodeSetContext[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  42,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x6574436f), 
  ACE_NTOHL (0x6e746578), 
  ACE_NTOHL (0x743a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetContext:1.0
    15,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657443), 
  ACE_NTOHL (0x6f6e7465), 
  ACE_NTOHL (0x78740000),  // name = CodeSetContext
  2, // member count
    10,
  ACE_NTOHL (0x63686172), 
  ACE_NTOHL (0x5f646174), 
  ACE_NTOHL (0x61000000),  // name = char_data
    CORBA::tk_alias, // typecode kind for typedefs
  68, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    37,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x65744964), 
    ACE_NTOHL (0x3a312e30), 
    ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
        10,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657449), 
    ACE_NTOHL (0x64000000),  // name = CodeSetId
        CORBA::tk_ulong,


  11,
  ACE_NTOHL (0x77636861), 
  ACE_NTOHL (0x725f6461), 
  ACE_NTOHL (0x74610000),  // name = wchar_data
    CORBA::tk_alias, // typecode kind for typedefs
  68, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    37,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x65744964), 
    ACE_NTOHL (0x3a312e30), 
    ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
        10,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657449), 
    ACE_NTOHL (0x64000000),  // name = CodeSetId
        CORBA::tk_ulong,


};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetContext (
    CORBA::tk_struct,
    sizeof (_oc_CONV_FRAME_CodeSetContext),
    (char *) &_oc_CONV_FRAME_CodeSetContext,
    0,
    0
  );

namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr _tc_CodeSetContext =
    &_tc_TAO_tc_CONV_FRAME_CodeSetContext;
}

// TAO_IDL - Generated from 
// be\be_visitor_sequence/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetIdSeq &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetIdSeq>::insert_copy (
      _tao_any,
      CONV_FRAME::CodeSetIdSeq::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetIdSeq,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetIdSeq *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetIdSeq>::insert (
      _tao_any,
      CONV_FRAME::CodeSetIdSeq::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetIdSeq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetIdSeq *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const CONV_FRAME::CodeSetIdSeq *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetIdSeq *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetIdSeq>::extract (
        _tao_any,
        CONV_FRAME::CodeSetIdSeq::_tao_any_destructor,
        CONV_FRAME::_tc_CodeSetIdSeq,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetComponent &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponent>::insert_copy (
      _tao_any,
      CONV_FRAME::CodeSetComponent::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetComponent,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetComponent *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponent>::insert (
      _tao_any,
      CONV_FRAME::CodeSetComponent::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetComponent,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetComponent *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const CONV_FRAME::CodeSetComponent *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetComponent *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponent>::extract (
        _tao_any,
        CONV_FRAME::CodeSetComponent::_tao_any_destructor,
        CONV_FRAME::_tc_CodeSetComponent,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetComponentInfo &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponentInfo>::insert_copy (
      _tao_any,
      CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetComponentInfo,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetComponentInfo *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponentInfo>::insert (
      _tao_any,
      CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetComponentInfo,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetComponentInfo *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const CONV_FRAME::CodeSetComponentInfo *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetComponentInfo *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponentInfo>::extract (
        _tao_any,
        CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
        CONV_FRAME::_tc_CodeSetComponentInfo,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetContext &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetContext>::insert_copy (
      _tao_any,
      CONV_FRAME::CodeSetContext::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetContext,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetContext *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetContext>::insert (
      _tao_any,
      CONV_FRAME::CodeSetContext::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetContext,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetContext *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const CONV_FRAME::CodeSetContext *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetContext *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetContext>::extract (
        _tao_any,
        CONV_FRAME::CodeSetContext::_tao_any_destructor,
        CONV_FRAME::_tc_CodeSetContext,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Dual_Impl_T<
        CONV_FRAME::CodeSetIdSeq
      >;

  template class
    TAO::Any_Dual_Impl_T<
        CONV_FRAME::CodeSetComponent
      >;

  template class
    TAO::Any_Dual_Impl_T<
        CONV_FRAME::CodeSetComponentInfo
      >;

  template class
    TAO::Any_Dual_Impl_T<
        CONV_FRAME::CodeSetContext
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        CONV_FRAME::CodeSetIdSeq \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        CONV_FRAME::CodeSetComponent \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        CONV_FRAME::CodeSetComponentInfo \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        CONV_FRAME::CodeSetContext \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
