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

#include "ExceptionCreator.h"

namespace Communication {

MsgException ExceptionCreator::getAnException(INT Error) {
    if (Error == ENOENT) {
        /* No such file or directory */
        return Exception::SystemExceptionENOENT("");
    } else if (Error == ESRCH) {
        /* No such process */
        return Exception::SystemExceptionESRCH("");
    } else if (Error == EINTR) {
        /* Interrupted system call */
        return Exception::SystemExceptionEINTR("");
    } else if (Error == EIO) {
        /* Input/output error */
        return Exception::SystemExceptionEIO("");
    } else if (Error == ENXIO) {
        /* Device not configured */
        return Exception::SystemExceptionENXIO("");
    } else if (Error == E2BIG) {
        /* Argument list too long */
        return Exception::SystemExceptionE2BIG("");
    } else if (Error == ENOEXEC) {
        /* Exec format error */
        return Exception::SystemExceptionENOEXEC("");
    } else if (Error == EBADF) {
        /* Bad file descriptor */
        return Exception::SystemExceptionEBADF("");
    } else if (Error == ECHILD) {
        /* No child processes */
        return Exception::SystemExceptionECHILD("");
    } else if (Error == EDEADLK) {
        /* Resource deadlock avoided */
        return Exception::SystemExceptionEDEADLK("");
    } else if (Error == ENOMEM) {
        /* Cannot allocate memory */
        return Exception::SystemExceptionENOMEM("");
    } else if (Error == EACCES) {
        /* Permission denied */
        return Exception::SystemExceptionEACCES("");
    } else if (Error == EFAULT) {
        /* Bad address */
        return Exception::SystemExceptionEFAULT("");
    } else if (Error == ENOTBLK) {
        /* Block device required */
        return Exception::SystemExceptionENOTBLK("");
    } else if (Error == EBUSY) {
        /* Device / Resource busy */
        return Exception::SystemExceptionEBUSY("");
    } else if (Error == EEXIST) {
        /* File exists */
        return Exception::SystemExceptionEEXIST("");
    } else if (Error == EXDEV) {
        /* Cross-device link */
        return Exception::SystemExceptionEXDEV("");
    } else if (Error == ENODEV) {
        /* Operation not supported by device */
        return Exception::SystemExceptionENODEV("");
    } else if (Error == ENOTDIR) {
        /* Not a directory */
        return Exception::SystemExceptionENOTDIR("");
    } else if (Error == EISDIR) {
        /* Is a directory */
        return Exception::SystemExceptionEISDIR("");
    } else if (Error == EINVAL) {
        /* Invalid argument */
        return Exception::SystemExceptionEINVAL("");
    } else if (Error == ENFILE) {
        /* Too many open files in system */
        return Exception::SystemExceptionENFILE("");
    } else if (Error == EMFILE) {
        /* Too many open files */
        return Exception::SystemExceptionEMFILE("");
    } else if (Error == ENOTTY) {
        /* Inappropriate ioctl for device */
        return Exception::SystemExceptionENOTTY("");
    } else if (Error == ETXTBSY) {
        /* Text file busy */
        return Exception::SystemExceptionETXTBSY("");
    } else if (Error == EFBIG) {
        /* File too large */
        return Exception::SystemExceptionEFBIG("");
    } else if (Error == ENOSPC) {
        /* No space left on device */
        return Exception::SystemExceptionENOSPC("");
    } else if (Error == ESPIPE) {
        /* Illegal seek */
        return Exception::SystemExceptionESPIPE("");
    } else if (Error == EROFS) {
        /* Read-only file system */
        return Exception::SystemExceptionEROFS("");
    } else if (Error == EMLINK) {
        /* Too many links */
        return Exception::SystemExceptionEMLINK("");
    } else if (Error == EPIPE) {
        /* Broken pipe */
        return Exception::SystemExceptionEPIPE("");
    } else if (Error == EDOM) {
        /* Numerical argument out of domain */
        return Exception::SystemExceptionEDOM("");
    } else if (Error == ERANGE) {
        /* Result too large */
        return Exception::SystemExceptionERANGE("");
    } else if (Error == EAGAIN) {
        /* Resource temporarily unavailable */
        return Exception::SystemExceptionEAGAIN("");
    } else if (Error == EWOULDBLOCK) {
        /* Operation would block */
        return Exception::SystemExceptionEWOULDBLOCK("");
    } else if (Error == EINPROGRESS) {
        /* Operation now in progress */
        return Exception::SystemExceptionEINPROGRESS("");
    } else if (Error == EALREADY) {
        /* Operation already in progress */
        return Exception::SystemExceptionEALREADY("");
    } else if (Error == ENOTSOCK) {
        /* Socket operation on non-socket */
        return Exception::SystemExceptionENOTSOCK("");
    } else if (Error == EDESTADDRREQ) {
        /* Destination address required */
        return Exception::SystemExceptionEDESTADDRREQ("");
    } else if (Error == EMSGSIZE) {
        /* Message too long */
        return Exception::SystemExceptionEMSGSIZE("");
    } else if (Error == EPROTOTYPE) {
        /* Protocol wrong type for socket */
        return Exception::SystemExceptionEPROTOTYPE("");
    } else if (Error == ENOPROTOOPT) {
        /* Protocol not available */
        return Exception::SystemExceptionENOPROTOOPT("");
    } else if (Error == EPROTONOSUPPORT) {
        /* Protocol not supported */
        return Exception::SystemExceptionEPROTONOSUPPORT("");
    } else if (Error == ESOCKTNOSUPPORT) {
        /* Socket type not supported */
        return Exception::SystemExceptionESOCKTNOSUPPORT("");
    } else if (Error == ENOTSUP) {
        /* Operation not supported */
        return Exception::SystemExceptionENOTSUP("");
    } else if (Error == EPFNOSUPPORT) {
        /* Protocol family not supported */
        return Exception::SystemExceptionEPFNOSUPPORT("");
    } else if (Error == EAFNOSUPPORT) {
        /* Address family not supported by protocol family */
        return Exception::SystemExceptionEAFNOSUPPORT("");
    } else if (Error == EADDRINUSE) {
        /* Address already in use */
        return Exception::SystemExceptionEADDRINUSE("");
    } else if (Error == EADDRNOTAVAIL) {
        /* Can't assign requested address */
        return Exception::SystemExceptionEADDRNOTAVAIL("");
    } else if (Error == ENETDOWN) {
        /* Network is down */
        return Exception::SystemExceptionENETDOWN("");
    } else if (Error == ENETUNREACH) {
        /* Network is unreachable */
        return Exception::SystemExceptionENETUNREACH("");
    } else if (Error == ENETRESET) {
        /* Network dropped connection on reset */
        return Exception::SystemExceptionENETRESET("");
    } else if (Error == ECONNABORTED) {
        /* Software caused connection abort */
        return Exception::SystemExceptionECONNABORTED("");
    } else if (Error == ECONNRESET) {
        /* Connection reset by peer */
        return Exception::SystemExceptionECONNRESET("");
    } else if (Error == ENOBUFS) {
        /* No buffer space available */
        return Exception::SystemExceptionENOBUFS("");
    } else if (Error == EISCONN) {
        /* Socket is already connected */
        return Exception::SystemExceptionEISCONN("");
    } else if (Error == ENOTCONN) {
        /* Socket is not connected */
        return Exception::SystemExceptionENOTCONN("");
    } else if (Error == ESHUTDOWN) {
        /* Can't send after socket shutdown */
        return Exception::SystemExceptionESHUTDOWN("");
    } else if (Error == ETOOMANYREFS) {
        /* Too many references: can't splice */
        return Exception::SystemExceptionETOOMANYREFS("");
    } else if (Error == ETIMEDOUT) {
        /* Operation timed out */
        return Exception::SystemExceptionETIMEDOUT("");
    } else if (Error == ECONNREFUSED) {
        /* Connection refused */
        return Exception::SystemExceptionECONNREFUSED("");
    } else if (Error == ELOOP) {
        /* Too many levels of symbolic links */
        return Exception::SystemExceptionELOOP("");
    } else if (Error == ENAMETOOLONG) {
        /* File name too long */
        return Exception::SystemExceptionENAMETOOLONG("");
    } else if (Error == EHOSTDOWN) {
        /* Host is down */
        return Exception::SystemExceptionEHOSTDOWN("");
    } else if (Error == EHOSTUNREACH) {
        /* No route to host */
        return Exception::SystemExceptionEHOSTUNREACH("");
    } else if (Error == ENOTEMPTY) {
        /* Directory not empty */
        return Exception::SystemExceptionENOTEMPTY("");
    } else if (Error == EPROCLIM) {
        /* Too many processes */
        return Exception::SystemExceptionEPROCLIM("");
    } else if (Error == EUSERS) {
        /* Too many users */
        return Exception::SystemExceptionEUSERS("");
    } else if (Error == EDQUOT) {
        /* Disc quota exceeded */
        return Exception::SystemExceptionEDQUOT("");
    } else if (Error == ESTALE) {
        /* Stale NFS file handle */
        return Exception::SystemExceptionESTALE("");
    } else if (Error == EREMOTE) {
        /* Too many levels of remote in path */
        return Exception::SystemExceptionEREMOTE("");
    } else if (Error == EBADRPC) {
        /* RPC struct is bad */
        return Exception::SystemExceptionEBADRPC("");
    } else if (Error == ERPCMISMATCH) {
        /* RPC version wrong */
        return Exception::SystemExceptionERPCMISMATCH("");
    } else if (Error == EPROGUNAVAIL) {
        /* RPC prog. not avail */
        return Exception::SystemExceptionEPROGUNAVAIL("");
    } else if (Error == EPROGMISMATCH) {
        /* Program version wrong */
        return Exception::SystemExceptionEPROGMISMATCH("");
    } else if (Error == EPROCUNAVAIL) {
        /* Bad procedure for program */
        return Exception::SystemExceptionEPROCUNAVAIL("");
    } else if (Error == ENOLCK) {
        /* No locks available */
        return Exception::SystemExceptionENOLCK("");
    } else if (Error == ENOSYS) {
        /* Function not implemented */
        return Exception::SystemExceptionENOSYS("");
    } else if (Error == EFTYPE) {
        /* Inappropriate file type or format */
        return Exception::SystemExceptionEFTYPE("");
    } else if (Error == EAUTH) {
        /* Authentication error */
        return Exception::SystemExceptionEAUTH("");
    } else if (Error == ENEEDAUTH) {
        /* Need authenticator */
        return Exception::SystemExceptionENEEDAUTH("");
    } else if (Error == EPWROFF) {
        /* Device power is off */
        return Exception::SystemExceptionEPWROFF("");
    } else if (Error == EDEVERR) {
        /* Device error, e.g. paper out */
        return Exception::SystemExceptionEDEVERR("");
    } else if (Error == EOVERFLOW) {
        /* Value too large to be stored in data type */
        return Exception::SystemExceptionEOVERFLOW("");
    } else if (Error == EBADEXEC) {
        /* Bad executable */
        return Exception::SystemExceptionEBADEXEC("");
    } else if (Error == EBADARCH) {
        /* Bad CPU type in executable */
        return Exception::SystemExceptionEBADARCH("");
    } else if (Error == ESHLIBVERS) {
        /* Shared library version mismatch */
        return Exception::SystemExceptionESHLIBVERS("");
    } else if (Error == EBADMACHO) {
        /* Malformed Macho file */
        return Exception::SystemExceptionEBADMACHO("");
    } else if (Error == ECANCELED) {
        /* Operation canceled */
        return Exception::SystemExceptionECANCELED("");
    } else if (Error == EIDRM) {
        /* Identifier removed */
        return Exception::SystemExceptionEIDRM("");
    } else if (Error == ENOMSG) {
        /* No message of desired type */
        return Exception::SystemExceptionENOMSG("");
    } else if (Error == EILSEQ) {
        /* Illegal byte sequence */
        return Exception::SystemExceptionEILSEQ("");
    } else if (Error == ENOATTR) {
        /* Attribute not found */
        return Exception::SystemExceptionENOATTR("");
    } else if (Error == EBADMSG) {
        /* Bad message */
        return Exception::SystemExceptionEBADMSG("");
    } else if (Error == EMULTIHOP) {
        /* Reserved */
        return Exception::SystemExceptionEMULTIHOP("");
    } else if (Error == ENODATA) {
        /* No message available on STREAM */
        return Exception::SystemExceptionENODATA("");
    } else if (Error == ENOLINK) {
        /* Reserved */
        return Exception::SystemExceptionENOLINK("");
    } else if (Error == ENOSR) {
        /* No STREAM resources */
        return Exception::SystemExceptionENOSR("");
    } else if (Error == ENOSTR) {
        /* Not a STREAM */
        return Exception::SystemExceptionENOSTR("");
    } else if (Error == EPROTO) {
        /* Protocol error */
        return Exception::SystemExceptionEPROTO("");
    } else if (Error == ETIME) {
        /* STREAM ioctl timeout */
        return Exception::SystemExceptionETIME("");
    } else if (Error == EOPNOTSUPP) {
        /* Operation not supported on socket */
        return Exception::SystemExceptionEOPNOTSUPP("");
    } else if (Error == ENOPOLICY) {
        /* No such policy registered */
        return Exception::SystemExceptionENOPOLICY("");
    } else if (Error == ENOTRECOVERABLE) {
        /* State not recoverable */
        return Exception::SystemExceptionENOTRECOVERABLE("");
    } else if (Error == EOWNERDEAD) {
        /* Previous owner died */
        return Exception::SystemExceptionEOWNERDEAD("");
    } else if (Error == EQFULL) {
        /* Interface output queue is full */
        return Exception::SystemExceptionEQFULL("");
    } else if (Error == ELAST) {
        /* Must be equal largest errno */
        return Exception::SystemExceptionELAST("");
    } else {
        return MsgException("Unspecfied error");
    }
}
}