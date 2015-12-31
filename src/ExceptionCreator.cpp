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

void ExceptionCreator::getAnException(INT Error) {

    // if (Error == ENOENT) {
    //     /* No such file or directory */
    //     throw Exception::SystemExceptionE<ENOENT>("");
    // } else if (Error == ESRCH) {
    //     /* No such process */
    //     throw Exception::SystemExceptionE<ESRCH>("");
    // } else if (Error == EINTR) {
    //     /* Interrupted system call */
    //     throw Exception::SystemExceptionE<EINTR>("");
    // } else if (Error == EIO) {
    //     /* Input/output error */
    //     throw Exception::SystemExceptionE<EIO>("");
    // } else if (Error == ENXIO) {
    //     /* Device not configured */
    //     throw Exception::SystemExceptionE<ENXIO>("");
    // } else if (Error == E2BIG) {
    //     /* Argument list too long */
    //     throw Exception::SystemExceptionE<E2BIG>("");
    // } else if (Error == ENOEXEC) {
    //     /* Exec format error */
    //     throw Exception::SystemExceptionE<ENOEXEC>("");
    // } else if (Error == EBADF) {
    //     /* Bad file descriptor */
    //     throw Exception::SystemExceptionE<EBADF>("");
    // } else if (Error == ECHILD) {
    //     /* No child processes */
    //     throw Exception::SystemExceptionE<ECHILD>("");
    // } else if (Error == EDEADLK) {
    //     /* Resource deadlock avoided */
    //     throw Exception::SystemExceptionE<EDEADLK>("");
    // } else if (Error == ENOMEM) {
    //     /* Cannot allocate memory */
    //     throw Exception::SystemExceptionE<ENOMEM>("");
    // } else if (Error == EACCES) {
    //     /* Permission denied */
    //     throw Exception::SystemExceptionE<EACCES>("");
    // } else if (Error == EFAULT) {
    //     /* Bad address */
    //     throw Exception::SystemExceptionE<EFAULT>("");
    // } else if (Error == ENOTBLK) {
    //     /* Block device required */
    //     throw Exception::SystemExceptionE<ENOTBLK>("");
    // } else if (Error == EBUSY) {
    //     /* Device / Resource busy */
    //     throw Exception::SystemExceptionE<EBUSY>("");
    // } else if (Error == EEXIST) {
    //     /* File exists */
    //     throw Exception::SystemExceptionE<EEXIST>("");
    // } else if (Error == EXDEV) {
    //     /* Cross-device link */
    //     throw Exception::SystemExceptionE<EXDEV>("");
    // } else if (Error == ENODEV) {
    //     /* Operation not supported by device */
    //     throw Exception::SystemExceptionE<ENODEV>("");
    // } else if (Error == ENOTDIR) {
    //     /* Not a directory */
    //     throw Exception::SystemExceptionE<ENOTDIR>("");
    // } else if (Error == EISDIR) {
    //     /* Is a directory */
    //     throw Exception::SystemExceptionE<EISDIR>("");
    // } else if (Error == EINVAL) {
    //     /* Invalid argument */
    //     throw Exception::SystemExceptionE<EINVAL>("");
    // } else if (Error == ENFILE) {
    //     /* Too many open files in system */
    //     throw Exception::SystemExceptionE<ENFILE>("");
    // } else if (Error == EMFILE) {
    //     /* Too many open files */
    //     throw Exception::SystemExceptionE<EMFILE>("");
    // } else if (Error == ENOTTY) {
    //     /* Inappropriate ioctl for device */
    //     throw Exception::SystemExceptionE<ENOTTY>("");
    // } else if (Error == ETXTBSY) {
    //     /* Text file busy */
    //     throw Exception::SystemExceptionE<ETXTBSY>("");
    // } else if (Error == EFBIG) {
    //     /* File too large */
    //     throw Exception::SystemExceptionE<EFBIG>("");
    // } else if (Error == ENOSPC) {
    //     /* No space left on device */
    //     throw Exception::SystemExceptionE<ENOSPC>("");
    // } else if (Error == ESPIPE) {
    //     /* Illegal seek */
    //     throw Exception::SystemExceptionE<ESPIPE>("");
    // } else if (Error == EROFS) {
    //     /* Read-only file system */
    //     throw Exception::SystemExceptionE<EROFS>("");
    // } else if (Error == EMLINK) {
    //     /* Too many links */
    //     throw Exception::SystemExceptionE<EMLINK>("");
    // } else if (Error == EPIPE) {
    //     /* Broken pipe */
    //     throw Exception::SystemExceptionE<EPIPE>("");
    // } else if (Error == EDOM) {
    //     /* Numerical argument out of domain */
    //     throw Exception::SystemExceptionE<EDOM>("");
    // } else if (Error == ERANGE) {
    //     /* Result too large */
    //     throw Exception::SystemExceptionE<ERANGE>("");
    // } else if (Error == EAGAIN) {
    //     /* Resource temporarily unavailable */
    //     throw Exception::SystemExceptionE<EAGAIN>("");
    // } else if (Error == EWOULDBLOCK) {
    //     /* Operation would block */
    //     throw Exception::SystemExceptionE<EWOULDBLOCK>("");
    // } else if (Error == EINPROGRESS) {
    //     /* Operation now in progress */
    //     throw Exception::SystemExceptionE<EINPROGRESS>("");
    // } else if (Error == EALREADY) {
    //     /* Operation already in progress */
    //     throw Exception::SystemExceptionE<EALREADY>("");
    // } else if (Error == ENOTSOCK) {
    //     /* Socket operation on non-socket */
    //     throw Exception::SystemExceptionE<ENOTSOCK>("");
    // } else if (Error == EDESTADDRREQ) {
    //     /* Destination address required */
    //     throw Exception::SystemExceptionE<EDESTADDRREQ>("");
    // } else if (Error == EMSGSIZE) {
    //     /* Message too long */
    //     throw Exception::SystemExceptionE<EMSGSIZE>("");
    // } else if (Error == EPROTOTYPE) {
    //     /* Protocol wrong type for socket */
    //     throw Exception::SystemExceptionE<EPROTOTYPE>("");
    // } else if (Error == ENOPROTOOPT) {
    //     /* Protocol not available */
    //     throw Exception::SystemExceptionE<ENOPROTOOPT>("");
    // } else if (Error == EPROTONOSUPPORT) {
    //     /* Protocol not supported */
    //     throw Exception::SystemExceptionE<EPROTONOSUPPORT>("");
    // } else if (Error == ESOCKTNOSUPPORT) {
    //     /* Socket type not supported */
    //     throw Exception::SystemExceptionE<ESOCKTNOSUPPORT>("");
    // } else if (Error == ENOTSUP) {
    //     /* Operation not supported */
    //     throw Exception::SystemExceptionE<ENOTSUP>("");
    // } else if (Error == EPFNOSUPPORT) {
    //     /* Protocol family not supported */
    //     throw Exception::SystemExceptionE<EPFNOSUPPORT>("");
    // } else if (Error == EAFNOSUPPORT) {
    //     /* Address family not supported by protocol family */
    //     throw Exception::SystemExceptionE<EAFNOSUPPORT>("");
    // } else if (Error == EADDRINUSE) {
    //     /* Address already in use */
    //     throw Exception::SystemExceptionE<EADDRINUSE>("");
    // } else if (Error == EADDRNOTAVAIL) {
    //     /* Can't assign requested address */
    //     throw Exception::SystemExceptionE<EADDRNOTAVAIL>("");
    // } else if (Error == ENETDOWN) {
    //     /* Network is down */
    //     throw Exception::SystemExceptionE<ENETDOWN>("");
    // } else if (Error == ENETUNREACH) {
    //     /* Network is unreachable */
    //     throw Exception::SystemExceptionE<ENETUNREACH>("");
    // } else if (Error == ENETRESET) {
    //     /* Network dropped connection on reset */
    //     throw Exception::SystemExceptionE<ENETRESET>("");
    // } else if (Error == ECONNABORTED) {
    //     /* Software caused connection abort */
    //     throw Exception::SystemExceptionE<ECONNABORTED>("");
    // } else if (Error == ECONNRESET) {
    //     /* Connection reset by peer */
    //     throw Exception::SystemExceptionE<ECONNRESET>("");
    // } else if (Error == ENOBUFS) {
    //     /* No buffer space available */
    //     throw Exception::SystemExceptionE<ENOBUFS>("");
    // } else if (Error == EISCONN) {
    //     /* Socket is already connected */
    //     throw Exception::SystemExceptionE<EISCONN>("");
    // } else if (Error == ENOTCONN) {
    //     /* Socket is not connected */
    //     throw Exception::SystemExceptionE<ENOTCONN>("");
    // } else if (Error == ESHUTDOWN) {
    //     /* Can't send after socket shutdown */
    //     throw Exception::SystemExceptionE<ESHUTDOWN>("");
    // } else if (Error == ETOOMANYREFS) {
    //     /* Too many references: can't splice */
    //     throw Exception::SystemExceptionE<ETOOMANYREFS>("");
    // } else if (Error == ETIMEDOUT) {
    //     /* Operation timed out */
    //     throw Exception::SystemExceptionE<ETIMEDOUT>("");
    // } else if (Error == ECONNREFUSED) {
    //     /* Connection refused */
    //     throw Exception::SystemExceptionE<ECONNREFUSED>("");
    // } else if (Error == ELOOP) {
    //     /* Too many levels of symbolic links */
    //     throw Exception::SystemExceptionE<ELOOP>("");
    // } else if (Error == ENAMETOOLONG) {
    //     /* File name too long */
    //     throw Exception::SystemExceptionE<ENAMETOOLONG>("");
    // } else if (Error == EHOSTDOWN) {
    //     /* Host is down */
    //     throw Exception::SystemExceptionE<EHOSTDOWN>("");
    // } else if (Error == EHOSTUNREACH) {
    //     /* No route to host */
    //     throw Exception::SystemExceptionE<EHOSTUNREACH>("");
    // } else if (Error == ENOTEMPTY) {
    //     /* Directory not empty */
    //     throw Exception::SystemExceptionE<ENOTEMPTY>("");
    // } else if (Error == EPROCLIM) {
    //     /* Too many processes */
    //     throw Exception::SystemExceptionE<EPROCLIM>("");
    // } else if (Error == EUSERS) {
    //     /* Too many users */
    //     throw Exception::SystemExceptionE<EUSERS>("");
    // } else if (Error == EDQUOT) {
    //     /* Disc quota exceeded */
    //     throw Exception::SystemExceptionE<EDQUOT>("");
    // } else if (Error == ESTALE) {
    //     /* Stale NFS file handle */
    //     throw Exception::SystemExceptionE<ESTALE>("");
    // } else if (Error == EREMOTE) {
    //     /* Too many levels of remote in path */
    //     throw Exception::SystemExceptionE<EREMOTE>("");
    // } else if (Error == EBADRPC) {
    //     /* RPC struct is bad */
    //     throw Exception::SystemExceptionE<EBADRPC>("");
    // } else if (Error == ERPCMISMATCH) {
    //     /* RPC version wrong */
    //     throw Exception::SystemExceptionE<ERPCMISMATCH>("");
    // } else if (Error == EPROGUNAVAIL) {
    //     /* RPC prog. not avail */
    //     throw Exception::SystemExceptionE<EPROGUNAVAIL>("");
    // } else if (Error == EPROGMISMATCH) {
    //     /* Program version wrong */
    //     throw Exception::SystemExceptionE<EPROGMISMATCH>("");
    // } else if (Error == EPROCUNAVAIL) {
    //     /* Bad procedure for program */
    //     throw Exception::SystemExceptionE<EPROCUNAVAIL>("");
    // } else if (Error == ENOLCK) {
    //     /* No locks available */
    //     throw Exception::SystemExceptionE<ENOLCK>("");
    // } else if (Error == ENOSYS) {
    //     /* Function not implemented */
    //     throw Exception::SystemExceptionE<ENOSYS>("");
    // } else if (Error == EFTYPE) {
    //     /* Inappropriate file type or format */
    //     throw Exception::SystemExceptionE<EFTYPE>("");
    // } else if (Error == EAUTH) {
    //     /* Authentication error */
    //     throw Exception::SystemExceptionE<EAUTH>("");
    // } else if (Error == ENEEDAUTH) {
    //     /* Need authenticator */
    //     throw Exception::SystemExceptionE<ENEEDAUTH>("");
    // } else if (Error == EPWROFF) {
    //     /* Device power is off */
    //     throw Exception::SystemExceptionE<EPWROFF>("");
    // } else if (Error == EDEVERR) {
    //     /* Device error, e.g. paper out */
    //     throw Exception::SystemExceptionE<EDEVERR>("");
    // } else if (Error == EOVERFLOW) {
    //     /* Value too large to be stored in data type */
    //     throw Exception::SystemExceptionE<EOVERFLOW>("");
    // } else if (Error == EBADEXEC) {
    //     /* Bad executable */
    //     throw Exception::SystemExceptionE<EBADEXEC>("");
    // } else if (Error == EBADARCH) {
    //     /* Bad CPU type in executable */
    //     throw Exception::SystemExceptionE<EBADARCH>("");
    // } else if (Error == ESHLIBVERS) {
    //     /* Shared library version mismatch */
    //     throw Exception::SystemExceptionE<ESHLIBVERS>("");
    // } else if (Error == EBADMACHO) {
    //     /* Malformed Macho file */
    //     throw Exception::SystemExceptionE<EBADMACHO>("");
    // } else if (Error == ECANCELED) {
    //     /* Operation canceled */
    //     throw Exception::SystemExceptionE<ECANCELED>("");
    // } else if (Error == EIDRM) {
    //     /* Identifier removed */
    //     throw Exception::SystemExceptionE<EIDRM>("");
    // } else if (Error == ENOMSG) {
    //     /* No message of desired type */
    //     throw Exception::SystemExceptionE<ENOMSG>("");
    // } else if (Error == EILSEQ) {
    //     /* Illegal byte sequence */
    //     throw Exception::SystemExceptionE<EILSEQ>("");
    // } else if (Error == ENOATTR) {
    //     /* Attribute not found */
    //     throw Exception::SystemExceptionE<ENOATTR>("");
    // } else if (Error == EBADMSG) {
    //     /* Bad message */
    //     throw Exception::SystemExceptionE<EBADMSG>("");
    // } else if (Error == EMULTIHOP) {
    //     /* Reserved */
    //     throw Exception::SystemExceptionE<EMULTIHOP>("");
    // } else if (Error == ENODATA) {
    //     /* No message available on STREAM */
    //     throw Exception::SystemExceptionE<ENODATA>("");
    // } else if (Error == ENOLINK) {
    //     /* Reserved */
    //     throw Exception::SystemExceptionE<ENOLINK>("");
    // } else if (Error == ENOSR) {
    //     /* No STREAM resources */
    //     throw Exception::SystemExceptionE<ENOSR>("");
    // } else if (Error == ENOSTR) {
    //     /* Not a STREAM */
    //     throw Exception::SystemExceptionE<ENOSTR>("");
    // } else if (Error == EPROTO) {
    //     /* Protocol error */
    //     throw Exception::SystemExceptionE<EPROTO>("");
    // } else if (Error == ETIME) {
    //     /* STREAM ioctl timeout */
    //     throw Exception::SystemExceptionE<ETIME>("");
    // } else if (Error == EOPNOTSUPP) {
    //     /* Operation not supported on socket */
    //     throw Exception::SystemExceptionE<EOPNOTSUPP>("");
    // } else if (Error == ENOPOLICY) {
    //     /* No such policy registered */
    //     throw Exception::SystemExceptionE<ENOPOLICY>("");
    // } else if (Error == ENOTRECOVERABLE) {
    //     /* State not recoverable */
    //     throw Exception::SystemExceptionE<ENOTRECOVERABLE>("");
    // } else if (Error == EOWNERDEAD) {
    //     /* Previous owner died */
    //     throw Exception::SystemExceptionE<EOWNERDEAD>("");
    // } else if (Error == EQFULL) {
    //     /* Interface output queue is full */
    //     throw Exception::SystemExceptionE<EQFULL>("");
    // } else if (Error == ELAST) {
    //     /* Must be equal largest errno */
    //     throw Exception::SystemExceptionE<ELAST>("");
    // } else {
    //     std::stringstream ss;
    //     ss << "Unspecfied error with errno"  << Error;
    //     throw Exception::SystemExceptionE<0>(ss.str());
    // }

    if (Error == ENOENT) {
        /* No such file or directory */
        throw Exception::SystemExceptionENOENT("");
    } else if (Error == ESRCH) {
        /* No such process */
        throw Exception::SystemExceptionESRCH("");
    } else if (Error == EINTR) {
        /* Interrupted system call */
        throw Exception::SystemExceptionEINTR("");
    } else if (Error == EIO) {
        /* Input/output error */
        throw Exception::SystemExceptionEIO("");
    } else if (Error == ENXIO) {
        /* Device not configured */
        throw Exception::SystemExceptionENXIO("");
    } else if (Error == E2BIG) {
        /* Argument list too long */
        throw Exception::SystemExceptionE2BIG("");
    } else if (Error == ENOEXEC) {
        /* Exec format error */
        throw Exception::SystemExceptionENOEXEC("");
    } else if (Error == EBADF) {
        /* Bad file descriptor */
        throw Exception::SystemExceptionEBADF("");
    } else if (Error == ECHILD) {
        /* No child processes */
        throw Exception::SystemExceptionECHILD("");
    } else if (Error == EDEADLK) {
        /* Resource deadlock avoided */
        throw Exception::SystemExceptionEDEADLK("");
    } else if (Error == ENOMEM) {
        /* Cannot allocate memory */
        throw Exception::SystemExceptionENOMEM("");
    } else if (Error == EACCES) {
        /* Permission denied */
        throw Exception::SystemExceptionEACCES("");
    } else if (Error == EFAULT) {
        /* Bad address */
        throw Exception::SystemExceptionEFAULT("");
    } else if (Error == ENOTBLK) {
        /* Block device required */
        throw Exception::SystemExceptionENOTBLK("");
    } else if (Error == EBUSY) {
        /* Device / Resource busy */
        throw Exception::SystemExceptionEBUSY("");
    } else if (Error == EEXIST) {
        /* File exists */
        throw Exception::SystemExceptionEEXIST("");
    } else if (Error == EXDEV) {
        /* Cross-device link */
        throw Exception::SystemExceptionEXDEV("");
    } else if (Error == ENODEV) {
        /* Operation not supported by device */
        throw Exception::SystemExceptionENODEV("");
    } else if (Error == ENOTDIR) {
        /* Not a directory */
        throw Exception::SystemExceptionENOTDIR("");
    } else if (Error == EISDIR) {
        /* Is a directory */
        throw Exception::SystemExceptionEISDIR("");
    } else if (Error == EINVAL) {
        /* Invalid argument */
        throw Exception::SystemExceptionEINVAL("");
    } else if (Error == ENFILE) {
        /* Too many open files in system */
        throw Exception::SystemExceptionENFILE("");
    } else if (Error == EMFILE) {
        /* Too many open files */
        throw Exception::SystemExceptionEMFILE("");
    } else if (Error == ENOTTY) {
        /* Inappropriate ioctl for device */
        throw Exception::SystemExceptionENOTTY("");
    } else if (Error == ETXTBSY) {
        /* Text file busy */
        throw Exception::SystemExceptionETXTBSY("");
    } else if (Error == EFBIG) {
        /* File too large */
        throw Exception::SystemExceptionEFBIG("");
    } else if (Error == ENOSPC) {
        /* No space left on device */
        throw Exception::SystemExceptionENOSPC("");
    } else if (Error == ESPIPE) {
        /* Illegal seek */
        throw Exception::SystemExceptionESPIPE("");
    } else if (Error == EROFS) {
        /* Read-only file system */
        throw Exception::SystemExceptionEROFS("");
    } else if (Error == EMLINK) {
        /* Too many links */
        throw Exception::SystemExceptionEMLINK("");
    } else if (Error == EPIPE) {
        /* Broken pipe */
        throw Exception::SystemExceptionEPIPE("");
    } else if (Error == EDOM) {
        /* Numerical argument out of domain */
        throw Exception::SystemExceptionEDOM("");
    } else if (Error == ERANGE) {
        /* Result too large */
        throw Exception::SystemExceptionERANGE("");
    } else if (Error == EAGAIN) {
        /* Resource temporarily unavailable */
        throw Exception::SystemExceptionEAGAIN("");
    } else if (Error == EWOULDBLOCK) {
        /* Operation would block */
        throw Exception::SystemExceptionEWOULDBLOCK("");
    } else if (Error == EINPROGRESS) {
        /* Operation now in progress */
        throw Exception::SystemExceptionEINPROGRESS("");
    } else if (Error == EALREADY) {
        /* Operation already in progress */
        throw Exception::SystemExceptionEALREADY("");
    } else if (Error == ENOTSOCK) {
        /* Socket operation on non-socket */
        throw Exception::SystemExceptionENOTSOCK("");
    } else if (Error == EDESTADDRREQ) {
        /* Destination address required */
        throw Exception::SystemExceptionEDESTADDRREQ("");
    } else if (Error == EMSGSIZE) {
        /* Message too long */
        throw Exception::SystemExceptionEMSGSIZE("");
    } else if (Error == EPROTOTYPE) {
        /* Protocol wrong type for socket */
        throw Exception::SystemExceptionEPROTOTYPE("");
    } else if (Error == ENOPROTOOPT) {
        /* Protocol not available */
        throw Exception::SystemExceptionENOPROTOOPT("");
    } else if (Error == EPROTONOSUPPORT) {
        /* Protocol not supported */
        throw Exception::SystemExceptionEPROTONOSUPPORT("");
    } else if (Error == ESOCKTNOSUPPORT) {
        /* Socket type not supported */
        throw Exception::SystemExceptionESOCKTNOSUPPORT("");
    } else if (Error == ENOTSUP) {
        /* Operation not supported */
        throw Exception::SystemExceptionENOTSUP("");
    } else if (Error == EPFNOSUPPORT) {
        /* Protocol family not supported */
        throw Exception::SystemExceptionEPFNOSUPPORT("");
    } else if (Error == EAFNOSUPPORT) {
        /* Address family not supported by protocol family */
        throw Exception::SystemExceptionEAFNOSUPPORT("");
    } else if (Error == EADDRINUSE) {
        /* Address already in use */
        throw Exception::SystemExceptionEADDRINUSE("");
    } else if (Error == EADDRNOTAVAIL) {
        /* Can't assign requested address */
        throw Exception::SystemExceptionEADDRNOTAVAIL("");
    } else if (Error == ENETDOWN) {
        /* Network is down */
        throw Exception::SystemExceptionENETDOWN("");
    } else if (Error == ENETUNREACH) {
        /* Network is unreachable */
        throw Exception::SystemExceptionENETUNREACH("");
    } else if (Error == ENETRESET) {
        /* Network dropped connection on reset */
        throw Exception::SystemExceptionENETRESET("");
    } else if (Error == ECONNABORTED) {
        /* Software caused connection abort */
        throw Exception::SystemExceptionECONNABORTED("");
    } else if (Error == ECONNRESET) {
        /* Connection reset by peer */
        throw Exception::SystemExceptionECONNRESET("");
    } else if (Error == ENOBUFS) {
        /* No buffer space available */
        throw Exception::SystemExceptionENOBUFS("");
    } else if (Error == EISCONN) {
        /* Socket is already connected */
        throw Exception::SystemExceptionEISCONN("");
    } else if (Error == ENOTCONN) {
        /* Socket is not connected */
        throw Exception::SystemExceptionENOTCONN("");
    } else if (Error == ESHUTDOWN) {
        /* Can't send after socket shutdown */
        throw Exception::SystemExceptionESHUTDOWN("");
    } else if (Error == ETOOMANYREFS) {
        /* Too many references: can't splice */
        throw Exception::SystemExceptionETOOMANYREFS("");
    } else if (Error == ETIMEDOUT) {
        /* Operation timed out */
        throw Exception::SystemExceptionETIMEDOUT("");
    } else if (Error == ECONNREFUSED) {
        /* Connection refused */
        throw Exception::SystemExceptionECONNREFUSED("");
    } else if (Error == ELOOP) {
        /* Too many levels of symbolic links */
        throw Exception::SystemExceptionELOOP("");
    } else if (Error == ENAMETOOLONG) {
        /* File name too long */
        throw Exception::SystemExceptionENAMETOOLONG("");
    } else if (Error == EHOSTDOWN) {
        /* Host is down */
        throw Exception::SystemExceptionEHOSTDOWN("");
    } else if (Error == EHOSTUNREACH) {
        /* No route to host */
        throw Exception::SystemExceptionEHOSTUNREACH("");
    } else if (Error == ENOTEMPTY) {
        /* Directory not empty */
        throw Exception::SystemExceptionENOTEMPTY("");
#ifndef __linux__ 
    } else if (Error == EPROCLIM) {
        /* Too many processes */
        throw Exception::SystemExceptionEPROCLIM("");
#endif
    } else if (Error == EUSERS) {
        /* Too many users */
        throw Exception::SystemExceptionEUSERS("");
    } else if (Error == EDQUOT) {
        /* Disc quota exceeded */
        throw Exception::SystemExceptionEDQUOT("");
    } else if (Error == ESTALE) {
        /* Stale NFS file handle */
        throw Exception::SystemExceptionESTALE("");
    } else if (Error == EREMOTE) {
        /* Too many levels of remote in path */
        throw Exception::SystemExceptionEREMOTE("");
#ifndef __linux__ 
    } else if (Error == EBADRPC) {
        /* RPC struct is bad */
        throw Exception::SystemExceptionEBADRPC("");
    } else if (Error == ERPCMISMATCH) {
        /* RPC version wrong */
        throw Exception::SystemExceptionERPCMISMATCH("");
    } else if (Error == EPROGUNAVAIL) {
        /* RPC prog. not avail */
        throw Exception::SystemExceptionEPROGUNAVAIL("");
    } else if (Error == EPROGMISMATCH) {
        /* Program version wrong */
        throw Exception::SystemExceptionEPROGMISMATCH("");
    } else if (Error == EPROCUNAVAIL) {
        /* Bad procedure for program */
        throw Exception::SystemExceptionEPROCUNAVAIL("");
#endif
    } else if (Error == ENOLCK) {
        /* No locks available */
        throw Exception::SystemExceptionENOLCK("");
    } else if (Error == ENOSYS) {
        /* Function not implemented */
        throw Exception::SystemExceptionENOSYS("");
#ifndef __linux__ 
    } else if (Error == EFTYPE) {
        /* Inappropriate file type or format */
        throw Exception::SystemExceptionEFTYPE("");
    } else if (Error == EAUTH) {
        /* Authentication error */
        throw Exception::SystemExceptionEAUTH("");
    } else if (Error == ENEEDAUTH) {
        /* Need authenticator */
        throw Exception::SystemExceptionENEEDAUTH("");
    } else if (Error == EPWROFF) {
        /* Device power is off */
        throw Exception::SystemExceptionEPWROFF("");
    } else if (Error == EDEVERR) {
        /* Device error, e.g. paper out */
        throw Exception::SystemExceptionEDEVERR("");
#endif
    } else if (Error == EOVERFLOW) {
        /* Value too large to be stored in data type */
        throw Exception::SystemExceptionEOVERFLOW("");
#ifndef __linux__         
    } else if (Error == EBADEXEC) {
        /* Bad executable */
        throw Exception::SystemExceptionEBADEXEC("");
    } else if (Error == EBADARCH) {
        /* Bad CPU type in executable */
        throw Exception::SystemExceptionEBADARCH("");
    } else if (Error == ESHLIBVERS) {
        /* Shared library version mismatch */
        throw Exception::SystemExceptionESHLIBVERS("");
    } else if (Error == EBADMACHO) {
        /* Malformed Macho file */
        throw Exception::SystemExceptionEBADMACHO("");
#endif
    } else if (Error == ECANCELED) {
        /* Operation canceled */
        throw Exception::SystemExceptionECANCELED("");
    } else if (Error == EIDRM) {
        /* Identifier removed */
        throw Exception::SystemExceptionEIDRM("");
    } else if (Error == ENOMSG) {
        /* No message of desired type */
        throw Exception::SystemExceptionENOMSG("");
    } else if (Error == EILSEQ) {
        /* Illegal byte sequence */
        throw Exception::SystemExceptionEILSEQ("");
#ifndef __linux__
    } else if (Error == ENOATTR) {
        /* Attribute not found */
        throw Exception::SystemExceptionENOATTR("");
#endif
    } else if (Error == EBADMSG) {
        /* Bad message */
        throw Exception::SystemExceptionEBADMSG("");
    } else if (Error == EMULTIHOP) {
        /* Reserved */
        throw Exception::SystemExceptionEMULTIHOP("");
    } else if (Error == ENODATA) {
        /* No message available on STREAM */
        throw Exception::SystemExceptionENODATA("");
    } else if (Error == ENOLINK) {
        /* Reserved */
        throw Exception::SystemExceptionENOLINK("");
    } else if (Error == ENOSR) {
        /* No STREAM resources */
        throw Exception::SystemExceptionENOSR("");
    } else if (Error == ENOSTR) {
        /* Not a STREAM */
        throw Exception::SystemExceptionENOSTR("");
    } else if (Error == EPROTO) {
        /* Protocol error */
        throw Exception::SystemExceptionEPROTO("");
    } else if (Error == ETIME) {
        /* STREAM ioctl timeout */
        throw Exception::SystemExceptionETIME("");
    } else if (Error == EOPNOTSUPP) {
        /* Operation not supported on socket */
        throw Exception::SystemExceptionEOPNOTSUPP("");
#ifndef __linux__
    } else if (Error == ENOPOLICY) {
        /* No such policy registered */
        throw Exception::SystemExceptionENOPOLICY("");
#endif
    } else if (Error == ENOTRECOVERABLE) {
        /* State not recoverable */
        throw Exception::SystemExceptionENOTRECOVERABLE("");
    } else if (Error == EOWNERDEAD) {
        /* Previous owner died */
        throw Exception::SystemExceptionEOWNERDEAD("");
 #ifndef __linux__
    } else if (Error == EQFULL) {
        /* Interface output queue is full */
        throw Exception::SystemExceptionEQFULL("");
    } else if (Error == ELAST) {
        /* Must be equal largest errno */
        throw Exception::SystemExceptionELAST("");
#endif
    } else {
        std::stringstream ss;
        ss << "Unspecfied error with errno"  << Error;
        throw Exception::SystemException(ss.str());
    }
}
}