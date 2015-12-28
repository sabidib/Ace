/* * Ace - A c++ networking library
 * Copyright (C) 2012, 2016 Samy Abidib
 *
 * This file is part of Ace.
 *
 * Ace is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Ace is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Ace.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef H_ALL_SYSTEM_EXCEPTIONS_H
#define H_ALL_SYSTEM_EXCEPTIONS_H

#include "GenHeader.h"
#include "exception/msgException.h"

namespace Communication {

namespace Exception {
/* No such file or directory */
class SystemExceptionENOENT : public MsgException {
   public:
    SystemExceptionENOENT(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* No such process */
class SystemExceptionESRCH : public MsgException {
   public:
    SystemExceptionESRCH(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Interrupted system call */
class SystemExceptionEINTR : public MsgException {
   public:
    SystemExceptionEINTR(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Input/output error */
class SystemExceptionEIO : public MsgException {
   public:
    SystemExceptionEIO(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Device not configured */
class SystemExceptionENXIO : public MsgException {
   public:
    SystemExceptionENXIO(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Argument list too long */
class SystemExceptionE2BIG : public MsgException {
   public:
    SystemExceptionE2BIG(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Exec format error */
class SystemExceptionENOEXEC : public MsgException {
   public:
    SystemExceptionENOEXEC(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Bad file descriptor */
class SystemExceptionEBADF : public MsgException {
   public:
    SystemExceptionEBADF(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* No child processes */
class SystemExceptionECHILD : public MsgException {
   public:
    SystemExceptionECHILD(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Resource deadlock avoided */
class SystemExceptionEDEADLK : public MsgException {
   public:
    SystemExceptionEDEADLK(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Cannot allocate memory */
class SystemExceptionENOMEM : public MsgException {
   public:
    SystemExceptionENOMEM(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Permission denied */
class SystemExceptionEACCES : public MsgException {
   public:
    SystemExceptionEACCES(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Bad address */
class SystemExceptionEFAULT : public MsgException {
   public:
    SystemExceptionEFAULT(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Block device required */
class SystemExceptionENOTBLK : public MsgException {
   public:
    SystemExceptionENOTBLK(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Device / Resource busy */
class SystemExceptionEBUSY : public MsgException {
   public:
    SystemExceptionEBUSY(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* File exists */
class SystemExceptionEEXIST : public MsgException {
   public:
    SystemExceptionEEXIST(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Cross-device link */
class SystemExceptionEXDEV : public MsgException {
   public:
    SystemExceptionEXDEV(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Operation not supported by device */
class SystemExceptionENODEV : public MsgException {
   public:
    SystemExceptionENODEV(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Not a directory */
class SystemExceptionENOTDIR : public MsgException {
   public:
    SystemExceptionENOTDIR(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Is a directory */
class SystemExceptionEISDIR : public MsgException {
   public:
    SystemExceptionEISDIR(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Invalid argument */
class SystemExceptionEINVAL : public MsgException {
   public:
    SystemExceptionEINVAL(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Too many open files in system */
class SystemExceptionENFILE : public MsgException {
   public:
    SystemExceptionENFILE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Too many open files */
class SystemExceptionEMFILE : public MsgException {
   public:
    SystemExceptionEMFILE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Inappropriate ioctl for device */
class SystemExceptionENOTTY : public MsgException {
   public:
    SystemExceptionENOTTY(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Text file busy */
class SystemExceptionETXTBSY : public MsgException {
   public:
    SystemExceptionETXTBSY(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* File too large */
class SystemExceptionEFBIG : public MsgException {
   public:
    SystemExceptionEFBIG(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* No space left on device */
class SystemExceptionENOSPC : public MsgException {
   public:
    SystemExceptionENOSPC(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Illegal seek */
class SystemExceptionESPIPE : public MsgException {
   public:
    SystemExceptionESPIPE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Read-only file system */
class SystemExceptionEROFS : public MsgException {
   public:
    SystemExceptionEROFS(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Too many links */
class SystemExceptionEMLINK : public MsgException {
   public:
    SystemExceptionEMLINK(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Broken pipe */
class SystemExceptionEPIPE : public MsgException {
   public:
    SystemExceptionEPIPE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Numerical argument out of domain */
class SystemExceptionEDOM : public MsgException {
   public:
    SystemExceptionEDOM(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Result too large */
class SystemExceptionERANGE : public MsgException {
   public:
    SystemExceptionERANGE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Resource temporarily unavailable */
class SystemExceptionEAGAIN : public MsgException {
   public:
    SystemExceptionEAGAIN(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Operation would block */
class SystemExceptionEWOULDBLOCK : public MsgException {
   public:
    SystemExceptionEWOULDBLOCK(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Operation now in progress */
class SystemExceptionEINPROGRESS : public MsgException {
   public:
    SystemExceptionEINPROGRESS(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Operation already in progress */
class SystemExceptionEALREADY : public MsgException {
   public:
    SystemExceptionEALREADY(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Socket operation on non-socket */
class SystemExceptionENOTSOCK : public MsgException {
   public:
    SystemExceptionENOTSOCK(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Destination address required */
class SystemExceptionEDESTADDRREQ : public MsgException {
   public:
    SystemExceptionEDESTADDRREQ(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Message too long */
class SystemExceptionEMSGSIZE : public MsgException {
   public:
    SystemExceptionEMSGSIZE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Protocol wrong type for socket */
class SystemExceptionEPROTOTYPE : public MsgException {
   public:
    SystemExceptionEPROTOTYPE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Protocol not available */
class SystemExceptionENOPROTOOPT : public MsgException {
   public:
    SystemExceptionENOPROTOOPT(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Protocol not supported */
class SystemExceptionEPROTONOSUPPORT : public MsgException {
   public:
    SystemExceptionEPROTONOSUPPORT(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Socket type not supported */
class SystemExceptionESOCKTNOSUPPORT : public MsgException {
   public:
    SystemExceptionESOCKTNOSUPPORT(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Operation not supported */
class SystemExceptionENOTSUP : public MsgException {
   public:
    SystemExceptionENOTSUP(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Protocol family not supported */
class SystemExceptionEPFNOSUPPORT : public MsgException {
   public:
    SystemExceptionEPFNOSUPPORT(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Address family not supported by protocol family */
class SystemExceptionEAFNOSUPPORT : public MsgException {
   public:
    SystemExceptionEAFNOSUPPORT(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Address already in use */
class SystemExceptionEADDRINUSE : public MsgException {
   public:
    SystemExceptionEADDRINUSE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Can't assign requested address */
class SystemExceptionEADDRNOTAVAIL : public MsgException {
   public:
    SystemExceptionEADDRNOTAVAIL(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Network is down */
class SystemExceptionENETDOWN : public MsgException {
   public:
    SystemExceptionENETDOWN(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Network is unreachable */
class SystemExceptionENETUNREACH : public MsgException {
   public:
    SystemExceptionENETUNREACH(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Network dropped connection on reset */
class SystemExceptionENETRESET : public MsgException {
   public:
    SystemExceptionENETRESET(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Software caused connection abort */
class SystemExceptionECONNABORTED : public MsgException {
   public:
    SystemExceptionECONNABORTED(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Connection reset by peer */
class SystemExceptionECONNRESET : public MsgException {
   public:
    SystemExceptionECONNRESET(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* No buffer space available */
class SystemExceptionENOBUFS : public MsgException {
   public:
    SystemExceptionENOBUFS(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Socket is already connected */
class SystemExceptionEISCONN : public MsgException {
   public:
    SystemExceptionEISCONN(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Socket is not connected */
class SystemExceptionENOTCONN : public MsgException {
   public:
    SystemExceptionENOTCONN(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Can't send after socket shutdown */
class SystemExceptionESHUTDOWN : public MsgException {
   public:
    SystemExceptionESHUTDOWN(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Too many references: can't splice */
class SystemExceptionETOOMANYREFS : public MsgException {
   public:
    SystemExceptionETOOMANYREFS(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Operation timed out */
class SystemExceptionETIMEDOUT : public MsgException {
   public:
    SystemExceptionETIMEDOUT(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Connection refused */
class SystemExceptionECONNREFUSED : public MsgException {
   public:
    SystemExceptionECONNREFUSED(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Too many levels of symbolic links */
class SystemExceptionELOOP : public MsgException {
   public:
    SystemExceptionELOOP(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* File name too long */
class SystemExceptionENAMETOOLONG : public MsgException {
   public:
    SystemExceptionENAMETOOLONG(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Host is down */
class SystemExceptionEHOSTDOWN : public MsgException {
   public:
    SystemExceptionEHOSTDOWN(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* No route to host */
class SystemExceptionEHOSTUNREACH : public MsgException {
   public:
    SystemExceptionEHOSTUNREACH(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Directory not empty */
class SystemExceptionENOTEMPTY : public MsgException {
   public:
    SystemExceptionENOTEMPTY(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Too many processes */
class SystemExceptionEPROCLIM : public MsgException {
   public:
    SystemExceptionEPROCLIM(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Too many users */
class SystemExceptionEUSERS : public MsgException {
   public:
    SystemExceptionEUSERS(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Disc quota exceeded */
class SystemExceptionEDQUOT : public MsgException {
   public:
    SystemExceptionEDQUOT(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Stale NFS file handle */
class SystemExceptionESTALE : public MsgException {
   public:
    SystemExceptionESTALE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Too many levels of remote in path */
class SystemExceptionEREMOTE : public MsgException {
   public:
    SystemExceptionEREMOTE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* RPC struct is bad */
class SystemExceptionEBADRPC : public MsgException {
   public:
    SystemExceptionEBADRPC(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* RPC version wrong */
class SystemExceptionERPCMISMATCH : public MsgException {
   public:
    SystemExceptionERPCMISMATCH(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* RPC prog. not avail */
class SystemExceptionEPROGUNAVAIL : public MsgException {
   public:
    SystemExceptionEPROGUNAVAIL(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Program version wrong */
class SystemExceptionEPROGMISMATCH : public MsgException {
   public:
    SystemExceptionEPROGMISMATCH(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Bad procedure for program */
class SystemExceptionEPROCUNAVAIL : public MsgException {
   public:
    SystemExceptionEPROCUNAVAIL(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* No locks available */
class SystemExceptionENOLCK : public MsgException {
   public:
    SystemExceptionENOLCK(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Function not implemented */
class SystemExceptionENOSYS : public MsgException {
   public:
    SystemExceptionENOSYS(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Inappropriate file type or format */
class SystemExceptionEFTYPE : public MsgException {
   public:
    SystemExceptionEFTYPE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Authentication error */
class SystemExceptionEAUTH : public MsgException {
   public:
    SystemExceptionEAUTH(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Need authenticator */
class SystemExceptionENEEDAUTH : public MsgException {
   public:
    SystemExceptionENEEDAUTH(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Device power is off */
class SystemExceptionEPWROFF : public MsgException {
   public:
    SystemExceptionEPWROFF(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Device error, e.g. paper out */
class SystemExceptionEDEVERR : public MsgException {
   public:
    SystemExceptionEDEVERR(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Value too large to be stored in data type */
class SystemExceptionEOVERFLOW : public MsgException {
   public:
    SystemExceptionEOVERFLOW(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Bad executable */
class SystemExceptionEBADEXEC : public MsgException {
   public:
    SystemExceptionEBADEXEC(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Bad CPU type in executable */
class SystemExceptionEBADARCH : public MsgException {
   public:
    SystemExceptionEBADARCH(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Shared library version mismatch */
class SystemExceptionESHLIBVERS : public MsgException {
   public:
    SystemExceptionESHLIBVERS(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Malformed Macho file */
class SystemExceptionEBADMACHO : public MsgException {
   public:
    SystemExceptionEBADMACHO(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Operation canceled */
class SystemExceptionECANCELED : public MsgException {
   public:
    SystemExceptionECANCELED(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Identifier removed */
class SystemExceptionEIDRM : public MsgException {
   public:
    SystemExceptionEIDRM(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* No message of desired type */
class SystemExceptionENOMSG : public MsgException {
   public:
    SystemExceptionENOMSG(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Illegal byte sequence */
class SystemExceptionEILSEQ : public MsgException {
   public:
    SystemExceptionEILSEQ(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Attribute not found */
class SystemExceptionENOATTR : public MsgException {
   public:
    SystemExceptionENOATTR(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Bad message */
class SystemExceptionEBADMSG : public MsgException {
   public:
    SystemExceptionEBADMSG(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Reserved */
class SystemExceptionEMULTIHOP : public MsgException {
   public:
    SystemExceptionEMULTIHOP(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* No message available on STREAM */
class SystemExceptionENODATA : public MsgException {
   public:
    SystemExceptionENODATA(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Reserved */
class SystemExceptionENOLINK : public MsgException {
   public:
    SystemExceptionENOLINK(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* No STREAM resources */
class SystemExceptionENOSR : public MsgException {
   public:
    SystemExceptionENOSR(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Not a STREAM */
class SystemExceptionENOSTR : public MsgException {
   public:
    SystemExceptionENOSTR(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Protocol error */
class SystemExceptionEPROTO : public MsgException {
   public:
    SystemExceptionEPROTO(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* STREAM ioctl timeout */
class SystemExceptionETIME : public MsgException {
   public:
    SystemExceptionETIME(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Operation not supported on socket */
class SystemExceptionEOPNOTSUPP : public MsgException {
   public:
    SystemExceptionEOPNOTSUPP(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* No such policy registered */
class SystemExceptionENOPOLICY : public MsgException {
   public:
    SystemExceptionENOPOLICY(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* State not recoverable */
class SystemExceptionENOTRECOVERABLE : public MsgException {
   public:
    SystemExceptionENOTRECOVERABLE(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Previous owner died */
class SystemExceptionEOWNERDEAD : public MsgException {
   public:
    SystemExceptionEOWNERDEAD(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Interface output queue is full */
class SystemExceptionEQFULL : public MsgException {
   public:
    SystemExceptionEQFULL(std::string d) : MsgException(d){};
    const char* what() const throw();
};

/* Must be equal largest errno */
class SystemExceptionELAST : public MsgException {
   public:
    SystemExceptionELAST(std::string d) : MsgException(d){};
    const char* what() const throw();
};
}
}

#endif
