///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// Copyright Test Competence Center (TCC) ETH 2008                           //
//                                                                           //
// The copyright to the computer  program(s) herein  is the property of TCC. //
// The program(s) may be used and/or copied only with the written permission //
// of TCC or in accordance with  the terms and conditions  stipulated in the //
// agreement/contract under which the program(s) has been supplied.          //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//
//  File:               IPL4asp_User_CtrlFuncDef.ttcn
//  Rev:                R18N
//  Prodnr:             CNL 113 531
//  Updated:            2008-01-28
//  Contact:            http://ttcn.ericsson.se
//  Reference:          

//  Template to define the port control functions
//  Replace the <user port type> tag with your user port type and
//  the <user types module> tag with the module name in which the
//  user port type is declared.
//  Remember to replace the underscores in the TTCN name with
//  double underscore!
//  Feel free to rename this file according to your naming conventions.

#include "IPL4asp_PortType.hh"
#include "IPL4asp_PT.hh"
#include "<user types module>.hh"

namespace IPL4__user__CtrlFunct {

  IPL4asp__Types::Result f__IPL4__listen(
    <user types module>::<user port type>& portRef,
    const IPL4asp__Types::HostName& locName,
    const IPL4asp__Types::PortNumber& locPort,
    const IPL4asp__Types::ProtoTuple& proto,
    const IPL4asp__Types::OptionList& options)
  {
    return f__IPL4__PROVIDER__listen(portRef, locName, locPort, proto);
  }
  
  IPL4asp__Types::Result f__IPL4__connect(
    <user types module>::<user port type>& portRef,
    const IPL4asp__Types::HostName& remName,
    const IPL4asp__Types::PortNumber& remPort,
    const IPL4asp__Types::HostName& locName,
    const IPL4asp__Types::PortNumber& locPort,
    const IPL4asp__Types::ConnectionId& connId,
    const IPL4asp__Types::ProtoTuple& proto,
    const IPL4asp__Types::OptionList& options)
  {
    return f__IPL4__PROVIDER__connect(portRef, remName, remPort,
                                      locName, locPort, connId, proto, options);
  }

  IPL4asp__Types::Result f__IPL4__close(
    <user types module>::<user port type>& portRef, 
    const IPL4asp__Types::ConnectionId& connId, 
    const IPL4asp__Types::ProtoTuple& proto)
  {
      return f__IPL4__PROVIDER__close(portRef, connId, proto);
  }

  IPL4asp__Types::Result f__IPL4__setUserData(
    <user types module>::<user port type>& portRef,
    const IPL4asp__Types::ConnectionId& connId,
    const IPL4asp__Types::UserData& userData)
  {
    return f__IPL4__PROVIDER__setUserData(portRef, connId, userData);
  }
  
  IPL4asp__Types::Result f__IPL4__getUserData(
    <user types module>::<user port type>& portRef,
    const IPL4asp__Types::ConnectionId& connId,
    IPL4asp__Types::UserData& userData)
  {
    return f__IPL4__PROVIDER__getUserData(portRef, connId, userData);
  }

  void f__IPL4__setGetMsgLen(
    <user types module>::<user port type>& portRef,
    const ConnectionId& connId,
    f__IPL4__getMsgLen& f,
    const ro__integer& msgLenArgs)
  {
    f__IPL4__PROVIDER__setGetMsgLen(portRef, connId, f, msgLenArgs);
  }
  
} // namespace IPL4__user__CtrlFunct

