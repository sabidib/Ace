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
#include "exception/SystemException.h"

namespace Communication {

namespace Exception {

/* No such file or directory */
class SystemExceptionENOENT : public SystemException {
   public:
    SystemExceptionENOENT(std::string d);
    // const char* what() const throw();
};

/* No such process */
class SystemExceptionESRCH : public SystemException {
   public:
    SystemExceptionESRCH(std::string d);
    // const char* what() const throw();
};

/* Interrupted system call */
class SystemExceptionEINTR : public SystemException {
   public:
    SystemExceptionEINTR(std::string d);
    // const char* what() const throw();
};

/* Input/output error */
class SystemExceptionEIO : public SystemException {
   public:
    SystemExceptionEIO(std::string d);
    // const char* what() const throw();
};

/* Device not configured */
class SystemExceptionENXIO : public SystemException {
   public:
    SystemExceptionENXIO(std::string d);
    // const char* what() const throw();
};

/* Argument list too long */
class SystemExceptionE2BIG : public SystemException {
   public:
    SystemExceptionE2BIG(std::string d);
    // const char* what() const throw();
};

/* Exec format error */
class SystemExceptionENOEXEC : public SystemException {
   public:
    SystemExceptionENOEXEC(std::string d);
    // const char* what() const throw();
};

/* Bad file descriptor */
class SystemExceptionEBADF : public SystemException {
   public:
    SystemExceptionEBADF(std::string d);
    // const char* what() const throw();
};

/* No child processes */
class SystemExceptionECHILD : public SystemException {
   public:
    SystemExceptionECHILD(std::string d);
    // const char* what() const throw();
};

/* Resource deadlock avoided */
class SystemExceptionEDEADLK : public SystemException {
   public:
    SystemExceptionEDEADLK(std::string d);
    // const char* what() const throw();
};

/* Cannot allocate memory */
class SystemExceptionENOMEM : public SystemException {
   public:
    SystemExceptionENOMEM(std::string d);
    // const char* what() const throw();
};

/* Permission denied */
class SystemExceptionEACCES : public SystemException {
   public:
    SystemExceptionEACCES(std::string d);
    // const char* what() const throw();
};

/* Bad address */
class SystemExceptionEFAULT : public SystemException {
   public:
    SystemExceptionEFAULT(std::string d);
    // const char* what() const throw();
};

/* Block device required */
class SystemExceptionENOTBLK : public SystemException {
   public:
    SystemExceptionENOTBLK(std::string d);
    // const char* what() const throw();
};

/* Device / Resource busy */
class SystemExceptionEBUSY : public SystemException {
   public:
    SystemExceptionEBUSY(std::string d);
    // const char* what() const throw();
};

/* File exists */
class SystemExceptionEEXIST : public SystemException {
   public:
    SystemExceptionEEXIST(std::string d);
    // const char* what() const throw();
};

/* Cross-device link */
class SystemExceptionEXDEV : public SystemException {
   public:
    SystemExceptionEXDEV(std::string d);
    // const char* what() const throw();
};

/* Operation not supported by device */
class SystemExceptionENODEV : public SystemException {
   public:
    SystemExceptionENODEV(std::string d);
    // const char* what() const throw();
};

/* Not a directory */
class SystemExceptionENOTDIR : public SystemException {
   public:
    SystemExceptionENOTDIR(std::string d);
    // const char* what() const throw();
};

/* Is a directory */
class SystemExceptionEISDIR : public SystemException {
   public:
    SystemExceptionEISDIR(std::string d);
    // const char* what() const throw();
};

/* Invalid argument */
class SystemExceptionEINVAL : public SystemException {
   public:
    SystemExceptionEINVAL(std::string d);
    // const char* what() const throw();
};

/* Too many open files in system */
class SystemExceptionENFILE : public SystemException {
   public:
    SystemExceptionENFILE(std::string d);
    // const char* what() const throw();
};

/* Too many open files */
class SystemExceptionEMFILE : public SystemException {
   public:
    SystemExceptionEMFILE(std::string d);
    // const char* what() const throw();
};

/* Inappropriate ioctl for device */
class SystemExceptionENOTTY : public SystemException {
   public:
    SystemExceptionENOTTY(std::string d);
    // const char* what() const throw();
};

/* Text file busy */
class SystemExceptionETXTBSY : public SystemException {
   public:
    SystemExceptionETXTBSY(std::string d);
    // const char* what() const throw();
};

/* File too large */
class SystemExceptionEFBIG : public SystemException {
   public:
    SystemExceptionEFBIG(std::string d);
    // const char* what() const throw();
};

/* No space left on device */
class SystemExceptionENOSPC : public SystemException {
   public:
    SystemExceptionENOSPC(std::string d);
    // const char* what() const throw();
};

/* Illegal seek */
class SystemExceptionESPIPE : public SystemException {
   public:
    SystemExceptionESPIPE(std::string d);
    // const char* what() const throw();
};

/* Read-only file system */
class SystemExceptionEROFS : public SystemException {
   public:
    SystemExceptionEROFS(std::string d);
    // const char* what() const throw();
};

/* Too many links */
class SystemExceptionEMLINK : public SystemException {
   public:
    SystemExceptionEMLINK(std::string d);
    // const char* what() const throw();
};

/* Broken pipe */
class SystemExceptionEPIPE : public SystemException {
   public:
    SystemExceptionEPIPE(std::string d);
    // const char* what() const throw();
};

/* Numerical argument out of domain */
class SystemExceptionEDOM : public SystemException {
   public:
    SystemExceptionEDOM(std::string d);
    // const char* what() const throw();
};

/* Result too large */
class SystemExceptionERANGE : public SystemException {
   public:
    SystemExceptionERANGE(std::string d);
    // const char* what() const throw();
};

/* Resource temporarily unavailable */
class SystemExceptionEAGAIN : public SystemException {
   public:
    SystemExceptionEAGAIN(std::string d);
    // const char* what() const throw();
};

/* Operation would block */
class SystemExceptionEWOULDBLOCK : public SystemException {
   public:
    SystemExceptionEWOULDBLOCK(std::string d);
    // const char* what() const throw();
};

/* Operation now in progress */
class SystemExceptionEINPROGRESS : public SystemException {
   public:
    SystemExceptionEINPROGRESS(std::string d);
    // const char* what() const throw();
};

/* Operation already in progress */
class SystemExceptionEALREADY : public SystemException {
   public:
    SystemExceptionEALREADY(std::string d);
    // const char* what() const throw();
};

/* Socket operation on non-socket */
class SystemExceptionENOTSOCK : public SystemException {
   public:
    SystemExceptionENOTSOCK(std::string d);
    // const char* what() const throw();
};

/* Destination address required */
class SystemExceptionEDESTADDRREQ : public SystemException {
   public:
    SystemExceptionEDESTADDRREQ(std::string d);
    // const char* what() const throw();
};

/* Message too long */
class SystemExceptionEMSGSIZE : public SystemException {
   public:
    SystemExceptionEMSGSIZE(std::string d);
    // const char* what() const throw();
};

/* Protocol wrong type for socket */
class SystemExceptionEPROTOTYPE : public SystemException {
   public:
    SystemExceptionEPROTOTYPE(std::string d);
    // const char* what() const throw();
};

/* Protocol not available */
class SystemExceptionENOPROTOOPT : public SystemException {
   public:
    SystemExceptionENOPROTOOPT(std::string d);
    // const char* what() const throw();
};

/* Protocol not supported */
class SystemExceptionEPROTONOSUPPORT : public SystemException {
   public:
    SystemExceptionEPROTONOSUPPORT(std::string d);
    // const char* what() const throw();
};

/* Socket type not supported */
class SystemExceptionESOCKTNOSUPPORT : public SystemException {
   public:
    SystemExceptionESOCKTNOSUPPORT(std::string d);
    // const char* what() const throw();
};

/* Operation not supported */
class SystemExceptionENOTSUP : public SystemException {
   public:
    SystemExceptionENOTSUP(std::string d);
    // const char* what() const throw();
};

/* Protocol family not supported */
class SystemExceptionEPFNOSUPPORT : public SystemException {
   public:
    SystemExceptionEPFNOSUPPORT(std::string d);
    // const char* what() const throw();
};

/* Address family not supported by protocol family */
class SystemExceptionEAFNOSUPPORT : public SystemException {
   public:
    SystemExceptionEAFNOSUPPORT(std::string d);
    // const char* what() const throw();
};

/* Address already in use */
class SystemExceptionEADDRINUSE : public SystemException {
   public:
    SystemExceptionEADDRINUSE(std::string d);
    // const char* what() const throw();
};

/* Can't assign requested address */
class SystemExceptionEADDRNOTAVAIL : public SystemException {
   public:
    SystemExceptionEADDRNOTAVAIL(std::string d);
    // const char* what() const throw();
};

/* Network is down */
class SystemExceptionENETDOWN : public SystemException {
   public:
    SystemExceptionENETDOWN(std::string d);
    // const char* what() const throw();
};

/* Network is unreachable */
class SystemExceptionENETUNREACH : public SystemException {
   public:
    SystemExceptionENETUNREACH(std::string d);
    // const char* what() const throw();
};

/* Network dropped connection on reset */
class SystemExceptionENETRESET : public SystemException {
   public:
    SystemExceptionENETRESET(std::string d);
    // const char* what() const throw();
};

/* Software caused connection abort */
class SystemExceptionECONNABORTED : public SystemException {
   public:
    SystemExceptionECONNABORTED(std::string d);
    // const char* what() const throw();
};

/* Connection reset by peer */
class SystemExceptionECONNRESET : public SystemException {
   public:
    SystemExceptionECONNRESET(std::string d);
    // const char* what() const throw();
};

/* No buffer space available */
class SystemExceptionENOBUFS : public SystemException {
   public:
    SystemExceptionENOBUFS(std::string d);
    // const char* what() const throw();
};

/* Socket is already connected */
class SystemExceptionEISCONN : public SystemException {
   public:
    SystemExceptionEISCONN(std::string d);
    // const char* what() const throw();
};

/* Socket is not connected */
class SystemExceptionENOTCONN : public SystemException {
   public:
    SystemExceptionENOTCONN(std::string d);
    // const char* what() const throw();
};

/* Can't send after socket shutdown */
class SystemExceptionESHUTDOWN : public SystemException {
   public:
    SystemExceptionESHUTDOWN(std::string d);
    // const char* what() const throw();
};

/* Too many references: can't splice */
class SystemExceptionETOOMANYREFS : public SystemException {
   public:
    SystemExceptionETOOMANYREFS(std::string d);
    // const char* what() const throw();
};

/* Operation timed out */
class SystemExceptionETIMEDOUT : public SystemException {
   public:
    SystemExceptionETIMEDOUT(std::string d);
    // const char* what() const throw();
};

/* Connection refused */
class SystemExceptionECONNREFUSED : public SystemException {
   public:
    SystemExceptionECONNREFUSED(std::string d);
    // const char* what() const throw();
};

/* Too many levels of symbolic links */
class SystemExceptionELOOP : public SystemException {
   public:
    SystemExceptionELOOP(std::string d);
    // const char* what() const throw();
};

/* File name too long */
class SystemExceptionENAMETOOLONG : public SystemException {
   public:
    SystemExceptionENAMETOOLONG(std::string d);
    // const char* what() const throw();
};

/* Host is down */
class SystemExceptionEHOSTDOWN : public SystemException {
   public:
    SystemExceptionEHOSTDOWN(std::string d);
    // const char* what() const throw();
};

/* No route to host */
class SystemExceptionEHOSTUNREACH : public SystemException {
   public:
    SystemExceptionEHOSTUNREACH(std::string d);
    // const char* what() const throw();
};

/* Directory not empty */
class SystemExceptionENOTEMPTY : public SystemException {
   public:
    SystemExceptionENOTEMPTY(std::string d);
    // const char* what() const throw();
};

/* Too many processes */
class SystemExceptionEPROCLIM : public SystemException {
   public:
    SystemExceptionEPROCLIM(std::string d);
    // const char* what() const throw();
};

/* Too many users */
class SystemExceptionEUSERS : public SystemException {
   public:
    SystemExceptionEUSERS(std::string d);
    // const char* what() const throw();
};

/* Disc quota exceeded */
class SystemExceptionEDQUOT : public SystemException {
   public:
    SystemExceptionEDQUOT(std::string d);
    // const char* what() const throw();
};

/* Stale NFS file handle */
class SystemExceptionESTALE : public SystemException {
   public:
    SystemExceptionESTALE(std::string d);
    // const char* what() const throw();
};

/* Too many levels of remote in path */
class SystemExceptionEREMOTE : public SystemException {
   public:
    SystemExceptionEREMOTE(std::string d);
    // const char* what() const throw();
};

/* RPC struct is bad */
class SystemExceptionEBADRPC : public SystemException {
   public:
    SystemExceptionEBADRPC(std::string d);
    // const char* what() const throw();
};

/* RPC version wrong */
class SystemExceptionERPCMISMATCH : public SystemException {
   public:
    SystemExceptionERPCMISMATCH(std::string d);
    // const char* what() const throw();
};

/* RPC prog. not avail */
class SystemExceptionEPROGUNAVAIL : public SystemException {
   public:
    SystemExceptionEPROGUNAVAIL(std::string d);
    // const char* what() const throw();
};

/* Program version wrong */
class SystemExceptionEPROGMISMATCH : public SystemException {
   public:
    SystemExceptionEPROGMISMATCH(std::string d);
    // const char* what() const throw();
};

/* Bad procedure for program */
class SystemExceptionEPROCUNAVAIL : public SystemException {
   public:
    SystemExceptionEPROCUNAVAIL(std::string d);
    // const char* what() const throw();
};

/* No locks available */
class SystemExceptionENOLCK : public SystemException {
   public:
    SystemExceptionENOLCK(std::string d);
    // const char* what() const throw();
};

/* Function not implemented */
class SystemExceptionENOSYS : public SystemException {
   public:
    SystemExceptionENOSYS(std::string d);
    // const char* what() const throw();
};

/* Inappropriate file type or format */
class SystemExceptionEFTYPE : public SystemException {
   public:
    SystemExceptionEFTYPE(std::string d);
    // const char* what() const throw();
};

/* Authentication error */
class SystemExceptionEAUTH : public SystemException {
   public:
    SystemExceptionEAUTH(std::string d);
    // const char* what() const throw();
};

/* Need authenticator */
class SystemExceptionENEEDAUTH : public SystemException {
   public:
    SystemExceptionENEEDAUTH(std::string d);
    // const char* what() const throw();
};

/* Device power is off */
class SystemExceptionEPWROFF : public SystemException {
   public:
    SystemExceptionEPWROFF(std::string d);
    // const char* what() const throw();
};

/* Device error, e.g. paper out */
class SystemExceptionEDEVERR : public SystemException {
   public:
    SystemExceptionEDEVERR(std::string d);
    // const char* what() const throw();
};

/* Value too large to be stored in data type */
class SystemExceptionEOVERFLOW : public SystemException {
   public:
    SystemExceptionEOVERFLOW(std::string d);
    // const char* what() const throw();
};

/* Bad executable */
class SystemExceptionEBADEXEC : public SystemException {
   public:
    SystemExceptionEBADEXEC(std::string d);
    // const char* what() const throw();
};

/* Bad CPU type in executable */
class SystemExceptionEBADARCH : public SystemException {
   public:
    SystemExceptionEBADARCH(std::string d);
    // const char* what() const throw();
};

/* Shared library version mismatch */
class SystemExceptionESHLIBVERS : public SystemException {
   public:
    SystemExceptionESHLIBVERS(std::string d);
    // const char* what() const throw();
};

/* Malformed Macho file */
class SystemExceptionEBADMACHO : public SystemException {
   public:
    SystemExceptionEBADMACHO(std::string d);
    // const char* what() const throw();
};

/* Operation canceled */
class SystemExceptionECANCELED : public SystemException {
   public:
    SystemExceptionECANCELED(std::string d);
    // const char* what() const throw();
};

/* Identifier removed */
class SystemExceptionEIDRM : public SystemException {
   public:
    SystemExceptionEIDRM(std::string d);
    // const char* what() const throw();
};

/* No message of desired type */
class SystemExceptionENOMSG : public SystemException {
   public:
    SystemExceptionENOMSG(std::string d);
    // const char* what() const throw();
};

/* Illegal byte sequence */
class SystemExceptionEILSEQ : public SystemException {
   public:
    SystemExceptionEILSEQ(std::string d);
    // const char* what() const throw();
};

/* Attribute not found */
class SystemExceptionENOATTR : public SystemException {
   public:
    SystemExceptionENOATTR(std::string d);
    // const char* what() const throw();
};

/* Bad message */
class SystemExceptionEBADMSG : public SystemException {
   public:
    SystemExceptionEBADMSG(std::string d);
    // const char* what() const throw();
};

/* Reserved */
class SystemExceptionEMULTIHOP : public SystemException {
   public:
    SystemExceptionEMULTIHOP(std::string d);
    // const char* what() const throw();
};

/* No message available on STREAM */
class SystemExceptionENODATA : public SystemException {
   public:
    SystemExceptionENODATA(std::string d);
    // const char* what() const throw();
};

/* Reserved */
class SystemExceptionENOLINK : public SystemException {
   public:
    SystemExceptionENOLINK(std::string d);
    // const char* what() const throw();
};

/* No STREAM resources */
class SystemExceptionENOSR : public SystemException {
   public:
    SystemExceptionENOSR(std::string d);
    // const char* what() const throw();
};

/* Not a STREAM */
class SystemExceptionENOSTR : public SystemException {
   public:
    SystemExceptionENOSTR(std::string d);
    // const char* what() const throw();
};

/* Protocol error */
class SystemExceptionEPROTO : public SystemException {
   public:
    SystemExceptionEPROTO(std::string d);
    // const char* what() const throw();
};

/* STREAM ioctl timeout */
class SystemExceptionETIME : public SystemException {
   public:
    SystemExceptionETIME(std::string d);
    // const char* what() const throw();
};

/* Operation not supported on socket */
class SystemExceptionEOPNOTSUPP : public SystemException {
   public:
    SystemExceptionEOPNOTSUPP(std::string d);
    // const char* what() const throw();
};

/* No such policy registered */
class SystemExceptionENOPOLICY : public SystemException {
   public:
    SystemExceptionENOPOLICY(std::string d);
    // const char* what() const throw();
};

/* State not recoverable */
class SystemExceptionENOTRECOVERABLE : public SystemException {
   public:
    SystemExceptionENOTRECOVERABLE(std::string d);
    // const char* what() const throw();
};

/* Previous owner died */
class SystemExceptionEOWNERDEAD : public SystemException {
   public:
    SystemExceptionEOWNERDEAD(std::string d);
    // const char* what() const throw();
};

/* Interface output queue is full */
class SystemExceptionEQFULL : public SystemException {
   public:
    SystemExceptionEQFULL(std::string d);
    // const char* what() const throw();
};

/* Must be equal largest errno */
class SystemExceptionELAST : public SystemException {
   public:
    SystemExceptionELAST(std::string d);
    // const char* what() const throw();
};
}
}

#endif
