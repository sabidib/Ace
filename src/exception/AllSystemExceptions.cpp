//
// Ace - A c++ networking library
// Copyright (C) 2012, 2016 Samy Abidib
//
// This file is part of Ace.
//
// Ace is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Ace is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Ace.  If not, see <http://www.gnu.org/licenses/>.
//

#include "exception/AllSystemExceptions.h"

namespace Communication {

namespace Exception {

SystemExceptionENOENT::SystemExceptionENOENT(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOENT:") +
                      std::string(strerror(ENOENT))) {}
// const char* SystemExceptionENOENT::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOENT))).c_str();
// }

SystemExceptionESRCH::SystemExceptionESRCH(std::string d)
    : SystemException(d + std::string("  SystemExceptionESRCH:") +
                      std::string(strerror(ESRCH))) {}
// const char* SystemExceptionESRCH::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ESRCH))).c_str();
// }

SystemExceptionEINTR::SystemExceptionEINTR(std::string d)
    : SystemException(d + std::string("  SystemExceptionEINTR:") +
                      std::string(strerror(EINTR))) {}
// const char* SystemExceptionEINTR::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EINTR))).c_str();
// }

SystemExceptionEIO::SystemExceptionEIO(std::string d)
    : SystemException(d + std::string("  SystemExceptionEIO:") +
                      std::string(strerror(EIO))) {}
// const char* SystemExceptionEIO::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EIO))).c_str();
// }

SystemExceptionENXIO::SystemExceptionENXIO(std::string d)
    : SystemException(d + std::string("  SystemExceptionENXIO:") +
                      std::string(strerror(ENXIO))) {}
// const char* SystemExceptionENXIO::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENXIO))).c_str();
// }

SystemExceptionE2BIG::SystemExceptionE2BIG(std::string d)
    : SystemException(d + std::string("  SystemExceptionE2BIG:") +
                      std::string(strerror(E2BIG))) {}
// const char* SystemExceptionE2BIG::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(E2BIG))).c_str();
// }

SystemExceptionENOEXEC::SystemExceptionENOEXEC(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOEXEC:") +
                      std::string(strerror(ENOEXEC))) {}
// const char* SystemExceptionENOEXEC::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOEXEC))).c_str();
// }

SystemExceptionEBADF::SystemExceptionEBADF(std::string d)
    : SystemException(d + std::string("  SystemExceptionEBADF:") +
                      std::string(strerror(EBADF))) {}
// const char* SystemExceptionEBADF::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EBADF))).c_str();
// }

SystemExceptionECHILD::SystemExceptionECHILD(std::string d)
    : SystemException(d + std::string("  SystemExceptionECHILD:") +
                      std::string(strerror(ECHILD))) {}
// const char* SystemExceptionECHILD::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ECHILD))).c_str();
// }

SystemExceptionEDEADLK::SystemExceptionEDEADLK(std::string d)
    : SystemException(d + std::string("  SystemExceptionEDEADLK:") +
                      std::string(strerror(EDEADLK))) {}
// const char* SystemExceptionEDEADLK::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EDEADLK))).c_str();
// }

SystemExceptionENOMEM::SystemExceptionENOMEM(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOMEM:") +
                      std::string(strerror(ENOMEM))) {}
// const char* SystemExceptionENOMEM::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOMEM))).c_str();
// }

SystemExceptionEACCES::SystemExceptionEACCES(std::string d)
    : SystemException(d + std::string("  SystemExceptionEACCES:") +
                      std::string(strerror(EACCES))) {}
// const char* SystemExceptionEACCES::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EACCES))).c_str();
// }

SystemExceptionEFAULT::SystemExceptionEFAULT(std::string d)
    : SystemException(d + std::string("  SystemExceptionEFAULT:") +
                      std::string(strerror(EFAULT))) {}
// const char* SystemExceptionEFAULT::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EFAULT))).c_str();
// }

SystemExceptionENOTBLK::SystemExceptionENOTBLK(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOTBLK:") +
                      std::string(strerror(ENOTBLK))) {}
// const char* SystemExceptionENOTBLK::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOTBLK))).c_str();
// }

SystemExceptionEBUSY::SystemExceptionEBUSY(std::string d)
    : SystemException(d + std::string("  SystemExceptionEBUSY:") +
                      std::string(strerror(EBUSY))) {}
// const char* SystemExceptionEBUSY::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EBUSY))).c_str();
// }

SystemExceptionEEXIST::SystemExceptionEEXIST(std::string d)
    : SystemException(d + std::string("  SystemExceptionEEXIST:") +
                      std::string(strerror(EEXIST))) {}
// const char* SystemExceptionEEXIST::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EEXIST))).c_str();
// }

SystemExceptionEXDEV::SystemExceptionEXDEV(std::string d)
    : SystemException(d + std::string("  SystemExceptionEXDEV:") +
                      std::string(strerror(EXDEV))) {}
// const char* SystemExceptionEXDEV::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EXDEV))).c_str();
// }

SystemExceptionENODEV::SystemExceptionENODEV(std::string d)
    : SystemException(d + std::string("  SystemExceptionENODEV:") +
                      std::string(strerror(ENODEV))) {}
// const char* SystemExceptionENODEV::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENODEV))).c_str();
// }

SystemExceptionENOTDIR::SystemExceptionENOTDIR(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOTDIR:") +
                      std::string(strerror(ENOTDIR))) {}
// const char* SystemExceptionENOTDIR::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOTDIR))).c_str();
// }

SystemExceptionEISDIR::SystemExceptionEISDIR(std::string d)
    : SystemException(d + std::string("  SystemExceptionEISDIR:") +
                      std::string(strerror(EISDIR))) {}
// const char* SystemExceptionEISDIR::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EISDIR))).c_str();
// }

SystemExceptionEINVAL::SystemExceptionEINVAL(std::string d)
    : SystemException(d + std::string("  SystemExceptionEINVAL:") +
                      std::string(strerror(EINVAL))) {}
// const char* SystemExceptionEINVAL::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EINVAL))).c_str();
// }

SystemExceptionENFILE::SystemExceptionENFILE(std::string d)
    : SystemException(d + std::string("  SystemExceptionENFILE:") +
                      std::string(strerror(ENFILE))) {}
// const char* SystemExceptionENFILE::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENFILE))).c_str();
// }

SystemExceptionEMFILE::SystemExceptionEMFILE(std::string d)
    : SystemException(d + std::string("  SystemExceptionEMFILE:") +
                      std::string(strerror(EMFILE))) {}
// const char* SystemExceptionEMFILE::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EMFILE))).c_str();
// }

SystemExceptionENOTTY::SystemExceptionENOTTY(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOTTY:") +
                      std::string(strerror(ENOTTY))) {}
// const char* SystemExceptionENOTTY::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOTTY))).c_str();
// }

SystemExceptionETXTBSY::SystemExceptionETXTBSY(std::string d)
    : SystemException(d + std::string("  SystemExceptionETXTBSY:") +
                      std::string(strerror(ETXTBSY))) {}
// const char* SystemExceptionETXTBSY::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ETXTBSY))).c_str();
// }

SystemExceptionEFBIG::SystemExceptionEFBIG(std::string d)
    : SystemException(d + std::string("  SystemExceptionEFBIG:") +
                      std::string(strerror(EFBIG))) {}
// const char* SystemExceptionEFBIG::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EFBIG))).c_str();
// }

SystemExceptionENOSPC::SystemExceptionENOSPC(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOSPC:") +
                      std::string(strerror(ENOSPC))) {}
// const char* SystemExceptionENOSPC::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOSPC))).c_str();
// }

SystemExceptionESPIPE::SystemExceptionESPIPE(std::string d)
    : SystemException(d + std::string("  SystemExceptionESPIPE:") +
                      std::string(strerror(ESPIPE))) {}
// const char* SystemExceptionESPIPE::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ESPIPE))).c_str();
// }

SystemExceptionEROFS::SystemExceptionEROFS(std::string d)
    : SystemException(d + std::string("  SystemExceptionEROFS:") +
                      std::string(strerror(EROFS))) {}
// const char* SystemExceptionEROFS::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EROFS))).c_str();
// }

SystemExceptionEMLINK::SystemExceptionEMLINK(std::string d)
    : SystemException(d + std::string("  SystemExceptionEMLINK:") +
                      std::string(strerror(EMLINK))) {}
// const char* SystemExceptionEMLINK::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EMLINK))).c_str();
// }

SystemExceptionEPIPE::SystemExceptionEPIPE(std::string d)
    : SystemException(d + std::string("  SystemExceptionEPIPE:") +
                      std::string(strerror(EPIPE))) {}
// const char* SystemExceptionEPIPE::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EPIPE))).c_str();
// }

SystemExceptionEDOM::SystemExceptionEDOM(std::string d)
    : SystemException(d + std::string("  SystemExceptionEDOM:") +
                      std::string(strerror(EDOM))) {}
// const char* SystemExceptionEDOM::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EDOM))).c_str();
// }

SystemExceptionERANGE::SystemExceptionERANGE(std::string d)
    : SystemException(d + std::string("  SystemExceptionERANGE:") +
                      std::string(strerror(ERANGE))) {}
// const char* SystemExceptionERANGE::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ERANGE))).c_str();
// }

SystemExceptionEAGAIN::SystemExceptionEAGAIN(std::string d)
    : SystemException(d + std::string("  SystemExceptionEAGAIN:") +
                      std::string(strerror(EAGAIN))) {}
// const char* SystemExceptionEAGAIN::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EAGAIN))).c_str();
// }

SystemExceptionEWOULDBLOCK::SystemExceptionEWOULDBLOCK(std::string d)
    : SystemException(d + std::string("  SystemExceptionEWOULDBLOCK:") +
                      std::string(strerror(EWOULDBLOCK))) {}
// const char* SystemExceptionEWOULDBLOCK::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EWOULDBLOCK))).c_str();
// };

SystemExceptionEINPROGRESS::SystemExceptionEINPROGRESS(std::string d)
    : SystemException(d + std::string("  SystemExceptionEINPROGRESS:") +
                      std::string(strerror(EINPROGRESS))) {}
// const char* SystemExceptionEINPROGRESS::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EINPROGRESS))).c_str();
// };

SystemExceptionEALREADY::SystemExceptionEALREADY(std::string d)
    : SystemException(d + std::string("  SystemExceptionEALREADY:") +
                      std::string(strerror(EALREADY))) {}
// const char* SystemExceptionEALREADY::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EALREADY))).c_str();
// };

SystemExceptionENOTSOCK::SystemExceptionENOTSOCK(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOTSOCK:") +
                      std::string(strerror(ENOTSOCK))) {}
// const char* SystemExceptionENOTSOCK::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOTSOCK))).c_str();
// };

SystemExceptionEDESTADDRREQ::SystemExceptionEDESTADDRREQ(std::string d)
    : SystemException(d + std::string("  SystemExceptionEDESTADDRREQ:") +
                      std::string(strerror(EDESTADDRREQ))) {}
// const char* SystemExceptionEDESTADDRREQ::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EDESTADDRREQ))).c_str();
// };

SystemExceptionEMSGSIZE::SystemExceptionEMSGSIZE(std::string d)
    : SystemException(d + std::string("  SystemExceptionEMSGSIZE:") +
                      std::string(strerror(EMSGSIZE))) {}
// const char* SystemExceptionEMSGSIZE::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EMSGSIZE))).c_str();
// };

SystemExceptionEPROTOTYPE::SystemExceptionEPROTOTYPE(std::string d)
    : SystemException(d + std::string("  SystemExceptionEPROTOTYPE:") +
                      std::string(strerror(EPROTOTYPE))) {}
// const char* SystemExceptionEPROTOTYPE::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EPROTOTYPE))).c_str();
// };

SystemExceptionENOPROTOOPT::SystemExceptionENOPROTOOPT(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOPROTOOPT:") +
                      std::string(strerror(ENOPROTOOPT))) {}
// const char* SystemExceptionENOPROTOOPT::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOPROTOOPT))).c_str();
// };

SystemExceptionEPROTONOSUPPORT::SystemExceptionEPROTONOSUPPORT(std::string d)
    : SystemException(d + std::string("  SystemExceptionEPROTONOSUPPORT:") +
                      std::string(strerror(EPROTONOSUPPORT))) {}
// const char* SystemExceptionEPROTONOSUPPORT::what() const throw() {
// return (s + std::string("  ") +
// std::string(strerror(EPROTONOSUPPORT))).c_str();
// };

SystemExceptionESOCKTNOSUPPORT::SystemExceptionESOCKTNOSUPPORT(std::string d)
    : SystemException(d + std::string("  SystemExceptionESOCKTNOSUPPORT:") +
                      std::string(strerror(ESOCKTNOSUPPORT))) {}
// const char* SystemExceptionESOCKTNOSUPPORT::what() const throw() {
// return (s + std::string("  ") +
// std::string(strerror(ESOCKTNOSUPPORT))).c_str();
// };

SystemExceptionENOTSUP::SystemExceptionENOTSUP(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOTSUP:") +
                      std::string(strerror(ENOTSUP))) {}
// const char* SystemExceptionENOTSUP::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOTSUP))).c_str();
// }

SystemExceptionEPFNOSUPPORT::SystemExceptionEPFNOSUPPORT(std::string d)
    : SystemException(d + std::string("  SystemExceptionEPFNOSUPPORT:") +
                      std::string(strerror(EPFNOSUPPORT))) {}
// const char* SystemExceptionEPFNOSUPPORT::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EPFNOSUPPORT))).c_str();
// };

SystemExceptionEAFNOSUPPORT::SystemExceptionEAFNOSUPPORT(std::string d)
    : SystemException(d + std::string("  SystemExceptionEAFNOSUPPORT:") +
                      std::string(strerror(EAFNOSUPPORT))) {}
// const char* SystemExceptionEAFNOSUPPORT::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EAFNOSUPPORT))).c_str();
// };

SystemExceptionEADDRINUSE::SystemExceptionEADDRINUSE(std::string d)
    : SystemException(d + std::string("  SystemExceptionEADDRINUSE:") +
                      std::string(strerror(EADDRINUSE))) {}
// const char* SystemExceptionEADDRINUSE::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EADDRINUSE))).c_str();
// };

SystemExceptionEADDRNOTAVAIL::SystemExceptionEADDRNOTAVAIL(std::string d)
    : SystemException(d + std::string("  SystemExceptionEADDRNOTAVAIL:") +
                      std::string(strerror(EADDRNOTAVAIL))) {}
// const char* SystemExceptionEADDRNOTAVAIL::what() const throw() {
// return (s + std::string("  ") +
// std::string(strerror(EADDRNOTAVAIL))).c_str();
// };

SystemExceptionENETDOWN::SystemExceptionENETDOWN(std::string d)
    : SystemException(d + std::string("  SystemExceptionENETDOWN:") +
                      std::string(strerror(ENETDOWN))) {}
// const char* SystemExceptionENETDOWN::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENETDOWN))).c_str();
// };

SystemExceptionENETUNREACH::SystemExceptionENETUNREACH(std::string d)
    : SystemException(d + std::string("  SystemExceptionENETUNREACH:") +
                      std::string(strerror(ENETUNREACH))) {}
// const char* SystemExceptionENETUNREACH::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENETUNREACH))).c_str();
// };

SystemExceptionENETRESET::SystemExceptionENETRESET(std::string d)
    : SystemException(d + std::string("  SystemExceptionENETRESET:") +
                      std::string(strerror(ENETRESET))) {}
// const char* SystemExceptionENETRESET::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENETRESET))).c_str();
// };

SystemExceptionECONNABORTED::SystemExceptionECONNABORTED(std::string d)
    : SystemException(d + std::string("  SystemExceptionECONNABORTED:") +
                      std::string(strerror(ECONNABORTED))) {}
// const char* SystemExceptionECONNABORTED::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ECONNABORTED))).c_str();
// };

SystemExceptionECONNRESET::SystemExceptionECONNRESET(std::string d)
    : SystemException(d + std::string("  SystemExceptionECONNRESET:") +
                      std::string(strerror(ECONNRESET))) {}
// const char* SystemExceptionECONNRESET::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ECONNRESET))).c_str();
// };

SystemExceptionENOBUFS::SystemExceptionENOBUFS(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOBUFS:") +
                      std::string(strerror(ENOBUFS))) {}
// const char* SystemExceptionENOBUFS::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOBUFS))).c_str();
// }

SystemExceptionEISCONN::SystemExceptionEISCONN(std::string d)
    : SystemException(d + std::string("  SystemExceptionEISCONN:") +
                      std::string(strerror(EISCONN))) {}
// const char* SystemExceptionEISCONN::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EISCONN))).c_str();
// }

SystemExceptionENOTCONN::SystemExceptionENOTCONN(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOTCONN:") +
                      std::string(strerror(ENOTCONN))) {}
// const char* SystemExceptionENOTCONN::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOTCONN))).c_str();
// };

SystemExceptionESHUTDOWN::SystemExceptionESHUTDOWN(std::string d)
    : SystemException(d + std::string("  SystemExceptionESHUTDOWN:") +
                      std::string(strerror(ESHUTDOWN))) {}
// const char* SystemExceptionESHUTDOWN::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ESHUTDOWN))).c_str();
// };

SystemExceptionETOOMANYREFS::SystemExceptionETOOMANYREFS(std::string d)
    : SystemException(d + std::string("  SystemExceptionETOOMANYREFS:") +
                      std::string(strerror(ETOOMANYREFS))) {}
// const char* SystemExceptionETOOMANYREFS::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ETOOMANYREFS))).c_str();
// };

SystemExceptionETIMEDOUT::SystemExceptionETIMEDOUT(std::string d)
    : SystemException(d + std::string("  SystemExceptionETIMEDOUT:") +
                      std::string(strerror(ETIMEDOUT))) {}
// const char* SystemExceptionETIMEDOUT::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ETIMEDOUT))).c_str();
// };

SystemExceptionECONNREFUSED::SystemExceptionECONNREFUSED(std::string d)
    : SystemException(d + std::string("  SystemExceptionECONNREFUSED:") +
                      std::string(strerror(ECONNREFUSED))) {}
// const char* SystemExceptionECONNREFUSED::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ECONNREFUSED))).c_str();
// };

SystemExceptionELOOP::SystemExceptionELOOP(std::string d)
    : SystemException(d + std::string("  SystemExceptionELOOP:") +
                      std::string(strerror(ELOOP))) {}
// const char* SystemExceptionELOOP::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ELOOP))).c_str();
// }

SystemExceptionENAMETOOLONG::SystemExceptionENAMETOOLONG(std::string d)
    : SystemException(d + std::string("  SystemExceptionENAMETOOLONG:") +
                      std::string(strerror(ENAMETOOLONG))) {}
// const char* SystemExceptionENAMETOOLONG::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENAMETOOLONG))).c_str();
// };

SystemExceptionEHOSTDOWN::SystemExceptionEHOSTDOWN(std::string d)
    : SystemException(d + std::string("  SystemExceptionEHOSTDOWN:") +
                      std::string(strerror(EHOSTDOWN))) {}
// const char* SystemExceptionEHOSTDOWN::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EHOSTDOWN))).c_str();
// };

SystemExceptionEHOSTUNREACH::SystemExceptionEHOSTUNREACH(std::string d)
    : SystemException(d + std::string("  SystemExceptionEHOSTUNREACH:") +
                      std::string(strerror(EHOSTUNREACH))) {}
// const char* SystemExceptionEHOSTUNREACH::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EHOSTUNREACH))).c_str();
// };

SystemExceptionENOTEMPTY::SystemExceptionENOTEMPTY(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOTEMPTY:") +
                      std::string(strerror(ENOTEMPTY))) {}
// const char* SystemExceptionENOTEMPTY::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOTEMPTY))).c_str();
// };

SystemExceptionEPROCLIM::SystemExceptionEPROCLIM(std::string d)
    : SystemException(d + std::string("  SystemExceptionEPROCLIM:") +
                      std::string(strerror(EPROCLIM))) {}
// const char* SystemExceptionEPROCLIM::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EPROCLIM))).c_str();
// };

SystemExceptionEUSERS::SystemExceptionEUSERS(std::string d)
    : SystemException(d + std::string("  SystemExceptionEUSERS:") +
                      std::string(strerror(EUSERS))) {}
// const char* SystemExceptionEUSERS::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EUSERS))).c_str();
// }

SystemExceptionEDQUOT::SystemExceptionEDQUOT(std::string d)
    : SystemException(d + std::string("  SystemExceptionEDQUOT:") +
                      std::string(strerror(EDQUOT))) {}
// const char* SystemExceptionEDQUOT::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EDQUOT))).c_str();
// }

SystemExceptionESTALE::SystemExceptionESTALE(std::string d)
    : SystemException(d + std::string("  SystemExceptionESTALE:") +
                      std::string(strerror(ESTALE))) {}
// const char* SystemExceptionESTALE::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ESTALE))).c_str();
// }

SystemExceptionEREMOTE::SystemExceptionEREMOTE(std::string d)
    : SystemException(d + std::string("  SystemExceptionEREMOTE:") +
                      std::string(strerror(EREMOTE))) {}
// const char* SystemExceptionEREMOTE::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EREMOTE))).c_str();
// }

SystemExceptionEBADRPC::SystemExceptionEBADRPC(std::string d)
    : SystemException(d + std::string("  SystemExceptionEBADRPC:") +
                      std::string(strerror(EBADRPC))) {}
// const char* SystemExceptionEBADRPC::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EBADRPC))).c_str();
// }

SystemExceptionERPCMISMATCH::SystemExceptionERPCMISMATCH(std::string d)
    : SystemException(d + std::string("  SystemExceptionERPCMISMATCH:") +
                      std::string(strerror(ERPCMISMATCH))) {}
// const char* SystemExceptionERPCMISMATCH::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ERPCMISMATCH))).c_str();
// };

SystemExceptionEPROGUNAVAIL::SystemExceptionEPROGUNAVAIL(std::string d)
    : SystemException(d + std::string("  SystemExceptionEPROGUNAVAIL:") +
                      std::string(strerror(EPROGUNAVAIL))) {}
// const char* SystemExceptionEPROGUNAVAIL::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EPROGUNAVAIL))).c_str();
// };

SystemExceptionEPROGMISMATCH::SystemExceptionEPROGMISMATCH(std::string d)
    : SystemException(d + std::string("  SystemExceptionEPROGMISMATCH:") +
                      std::string(strerror(EPROGMISMATCH))) {}
// const char* SystemExceptionEPROGMISMATCH::what() const throw() {
// return (s + std::string("  ") +
// std::string(strerror(EPROGMISMATCH))).c_str();
// };

SystemExceptionEPROCUNAVAIL::SystemExceptionEPROCUNAVAIL(std::string d)
    : SystemException(d + std::string("  SystemExceptionEPROCUNAVAIL:") +
                      std::string(strerror(EPROCUNAVAIL))) {}
// const char* SystemExceptionEPROCUNAVAIL::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EPROCUNAVAIL))).c_str();
// };

SystemExceptionENOLCK::SystemExceptionENOLCK(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOLCK:") +
                      std::string(strerror(ENOLCK))) {}
// const char* SystemExceptionENOLCK::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOLCK))).c_str();
// }

SystemExceptionENOSYS::SystemExceptionENOSYS(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOSYS:") +
                      std::string(strerror(ENOSYS))) {}
// const char* SystemExceptionENOSYS::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOSYS))).c_str();
// }

SystemExceptionEFTYPE::SystemExceptionEFTYPE(std::string d)
    : SystemException(d + std::string("  SystemExceptionEFTYPE:") +
                      std::string(strerror(EFTYPE))) {}
// const char* SystemExceptionEFTYPE::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EFTYPE))).c_str();
// }

SystemExceptionEAUTH::SystemExceptionEAUTH(std::string d)
    : SystemException(d + std::string("  SystemExceptionEAUTH:") +
                      std::string(strerror(EAUTH))) {}
// const char* SystemExceptionEAUTH::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EAUTH))).c_str();
// }

SystemExceptionENEEDAUTH::SystemExceptionENEEDAUTH(std::string d)
    : SystemException(d + std::string("  SystemExceptionENEEDAUTH:") +
                      std::string(strerror(ENEEDAUTH))) {}
// const char* SystemExceptionENEEDAUTH::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENEEDAUTH))).c_str();
// };

SystemExceptionEPWROFF::SystemExceptionEPWROFF(std::string d)
    : SystemException(d + std::string("  SystemExceptionEPWROFF:") +
                      std::string(strerror(EPWROFF))) {}
// const char* SystemExceptionEPWROFF::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EPWROFF))).c_str();
// }

SystemExceptionEDEVERR::SystemExceptionEDEVERR(std::string d)
    : SystemException(d + std::string("  SystemExceptionEDEVERR:") +
                      std::string(strerror(EDEVERR))) {}
// const char* SystemExceptionEDEVERR::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EDEVERR))).c_str();
// }

SystemExceptionEOVERFLOW::SystemExceptionEOVERFLOW(std::string d)
    : SystemException(d + std::string("  SystemExceptionEOVERFLOW:") +
                      std::string(strerror(EOVERFLOW))) {}
// const char* SystemExceptionEOVERFLOW::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EOVERFLOW))).c_str();
// };

SystemExceptionEBADEXEC::SystemExceptionEBADEXEC(std::string d)
    : SystemException(d + std::string("  SystemExceptionEBADEXEC:") +
                      std::string(strerror(EBADEXEC))) {}
// const char* SystemExceptionEBADEXEC::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EBADEXEC))).c_str();
// };

SystemExceptionEBADARCH::SystemExceptionEBADARCH(std::string d)
    : SystemException(d + std::string("  SystemExceptionEBADARCH:") +
                      std::string(strerror(EBADARCH))) {}
// const char* SystemExceptionEBADARCH::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EBADARCH))).c_str();
// };

SystemExceptionESHLIBVERS::SystemExceptionESHLIBVERS(std::string d)
    : SystemException(d + std::string("  SystemExceptionESHLIBVERS:") +
                      std::string(strerror(ESHLIBVERS))) {}
// const char* SystemExceptionESHLIBVERS::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ESHLIBVERS))).c_str();
// };

SystemExceptionEBADMACHO::SystemExceptionEBADMACHO(std::string d)
    : SystemException(d + std::string("  SystemExceptionEBADMACHO:") +
                      std::string(strerror(EBADMACHO))) {}
// const char* SystemExceptionEBADMACHO::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EBADMACHO))).c_str();
// };

SystemExceptionECANCELED::SystemExceptionECANCELED(std::string d)
    : SystemException(d + std::string("  SystemExceptionECANCELED:") +
                      std::string(strerror(ECANCELED))) {}
// const char* SystemExceptionECANCELED::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ECANCELED))).c_str();
// };

SystemExceptionEIDRM::SystemExceptionEIDRM(std::string d)
    : SystemException(d + std::string("  SystemExceptionEIDRM:") +
                      std::string(strerror(EIDRM))) {}
// const char* SystemExceptionEIDRM::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EIDRM))).c_str();
// }

SystemExceptionENOMSG::SystemExceptionENOMSG(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOMSG:") +
                      std::string(strerror(ENOMSG))) {}
// const char* SystemExceptionENOMSG::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOMSG))).c_str();
// }

SystemExceptionEILSEQ::SystemExceptionEILSEQ(std::string d)
    : SystemException(d + std::string("  SystemExceptionEILSEQ:") +
                      std::string(strerror(EILSEQ))) {}
// const char* SystemExceptionEILSEQ::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EILSEQ))).c_str();
// }

SystemExceptionENOATTR::SystemExceptionENOATTR(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOATTR:") +
                      std::string(strerror(ENOATTR))) {}
// const char* SystemExceptionENOATTR::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOATTR))).c_str();
// }

SystemExceptionEBADMSG::SystemExceptionEBADMSG(std::string d)
    : SystemException(d + std::string("  SystemExceptionEBADMSG:") +
                      std::string(strerror(EBADMSG))) {}
// const char* SystemExceptionEBADMSG::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EBADMSG))).c_str();
// }

SystemExceptionEMULTIHOP::SystemExceptionEMULTIHOP(std::string d)
    : SystemException(d + std::string("  SystemExceptionEMULTIHOP:") +
                      std::string(strerror(EMULTIHOP))) {}
// const char* SystemExceptionEMULTIHOP::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EMULTIHOP))).c_str();
// };

SystemExceptionENODATA::SystemExceptionENODATA(std::string d)
    : SystemException(d + std::string("  SystemExceptionENODATA:") +
                      std::string(strerror(ENODATA))) {}
// const char* SystemExceptionENODATA::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENODATA))).c_str();
// }

SystemExceptionENOLINK::SystemExceptionENOLINK(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOLINK:") +
                      std::string(strerror(ENOLINK))) {}
// const char* SystemExceptionENOLINK::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOLINK))).c_str();
// }

SystemExceptionENOSR::SystemExceptionENOSR(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOSR:") +
                      std::string(strerror(ENOSR))) {}
// const char* SystemExceptionENOSR::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOSR))).c_str();
// }

SystemExceptionENOSTR::SystemExceptionENOSTR(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOSTR:") +
                      std::string(strerror(ENOSTR))) {}
// const char* SystemExceptionENOSTR::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOSTR))).c_str();
// }

SystemExceptionEPROTO::SystemExceptionEPROTO(std::string d)
    : SystemException(d + std::string("  SystemExceptionEPROTO:") +
                      std::string(strerror(EPROTO))) {}
// const char* SystemExceptionEPROTO::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EPROTO))).c_str();
// }

SystemExceptionETIME::SystemExceptionETIME(std::string d)
    : SystemException(d + std::string("  SystemExceptionETIME:") +
                      std::string(strerror(ETIME))) {}
// const char* SystemExceptionETIME::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ETIME))).c_str();
// }

SystemExceptionEOPNOTSUPP::SystemExceptionEOPNOTSUPP(std::string d)
    : SystemException(d + std::string("  SystemExceptionEOPNOTSUPP:") +
                      std::string(strerror(EOPNOTSUPP))) {}
// const char* SystemExceptionEOPNOTSUPP::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EOPNOTSUPP))).c_str();
// };

SystemExceptionENOPOLICY::SystemExceptionENOPOLICY(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOPOLICY:") +
                      std::string(strerror(ENOPOLICY))) {}
// const char* SystemExceptionENOPOLICY::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ENOPOLICY))).c_str();
// };

SystemExceptionENOTRECOVERABLE::SystemExceptionENOTRECOVERABLE(std::string d)
    : SystemException(d + std::string("  SystemExceptionENOTRECOVERABLE:") +
                      std::string(strerror(ENOTRECOVERABLE))) {}
// const char* SystemExceptionENOTRECOVERABLE::what() const throw() {
// return (s + std::string("  ") +
// std::string(strerror(ENOTRECOVERABLE))).c_str();
// };

SystemExceptionEOWNERDEAD::SystemExceptionEOWNERDEAD(std::string d)
    : SystemException(d + std::string("  SystemExceptionEOWNERDEAD:") +
                      std::string(strerror(EOWNERDEAD))) {}
// const char* SystemExceptionEOWNERDEAD::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EOWNERDEAD))).c_str();
// };

SystemExceptionEQFULL::SystemExceptionEQFULL(std::string d)
    : SystemException(d + std::string("  SystemExceptionEQFULL:") +
                      std::string(strerror(EQFULL))) {}
// const char* SystemExceptionEQFULL::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(EQFULL))).c_str();
// }

SystemExceptionELAST::SystemExceptionELAST(std::string d)
    : SystemException(d + std::string("  SystemExceptionELAST:") +
                      std::string(strerror(ELAST))) {}
// const char* SystemExceptionELAST::what() const throw() {
// return (s + std::string("  ") + std::string(strerror(ELAST))).c_str();
// }
}
}
