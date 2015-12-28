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

const char* SystemExceptionENOENT::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOENT))).c_str();
}
const char* SystemExceptionESRCH::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ESRCH))).c_str();
}
const char* SystemExceptionEINTR::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EINTR))).c_str();
}
const char* SystemExceptionEIO::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EIO))).c_str();
}
const char* SystemExceptionENXIO::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENXIO))).c_str();
}
const char* SystemExceptionE2BIG::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(E2BIG))).c_str();
}
const char* SystemExceptionENOEXEC::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOEXEC))).c_str();
}
const char* SystemExceptionEBADF::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EBADF))).c_str();
}
const char* SystemExceptionECHILD::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ECHILD))).c_str();
}
const char* SystemExceptionEDEADLK::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EDEADLK))).c_str();
}
const char* SystemExceptionENOMEM::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOMEM))).c_str();
}
const char* SystemExceptionEACCES::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EACCES))).c_str();
}
const char* SystemExceptionEFAULT::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EFAULT))).c_str();
}
const char* SystemExceptionENOTBLK::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOTBLK))).c_str();
}
const char* SystemExceptionEBUSY::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EBUSY))).c_str();
}
const char* SystemExceptionEEXIST::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EEXIST))).c_str();
}
const char* SystemExceptionEXDEV::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EXDEV))).c_str();
}
const char* SystemExceptionENODEV::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENODEV))).c_str();
}
const char* SystemExceptionENOTDIR::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOTDIR))).c_str();
}
const char* SystemExceptionEISDIR::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EISDIR))).c_str();
}
const char* SystemExceptionEINVAL::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EINVAL))).c_str();
}
const char* SystemExceptionENFILE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENFILE))).c_str();
}
const char* SystemExceptionEMFILE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EMFILE))).c_str();
}
const char* SystemExceptionENOTTY::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOTTY))).c_str();
}
const char* SystemExceptionETXTBSY::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ETXTBSY))).c_str();
}
const char* SystemExceptionEFBIG::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EFBIG))).c_str();
}
const char* SystemExceptionENOSPC::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOSPC))).c_str();
}
const char* SystemExceptionESPIPE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ESPIPE))).c_str();
}
const char* SystemExceptionEROFS::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EROFS))).c_str();
}
const char* SystemExceptionEMLINK::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EMLINK))).c_str();
}
const char* SystemExceptionEPIPE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EPIPE))).c_str();
}
const char* SystemExceptionEDOM::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EDOM))).c_str();
}
const char* SystemExceptionERANGE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ERANGE))).c_str();
}
const char* SystemExceptionEAGAIN::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EAGAIN))).c_str();
}
const char* SystemExceptionEWOULDBLOCK::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EWOULDBLOCK))).c_str();
};
const char* SystemExceptionEINPROGRESS::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EINPROGRESS))).c_str();
};
const char* SystemExceptionEALREADY::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EALREADY))).c_str();
};
const char* SystemExceptionENOTSOCK::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOTSOCK))).c_str();
};
const char* SystemExceptionEDESTADDRREQ::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EDESTADDRREQ)))
        .c_str();
};
const char* SystemExceptionEMSGSIZE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EMSGSIZE))).c_str();
};
const char* SystemExceptionEPROTOTYPE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EPROTOTYPE))).c_str();
};
const char* SystemExceptionENOPROTOOPT::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOPROTOOPT))).c_str();
};
const char* SystemExceptionEPROTONOSUPPORT::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EPROTONOSUPPORT)))
        .c_str();
};
const char* SystemExceptionESOCKTNOSUPPORT::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ESOCKTNOSUPPORT)))
        .c_str();
};
const char* SystemExceptionENOTSUP::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOTSUP))).c_str();
}
const char* SystemExceptionEPFNOSUPPORT::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EPFNOSUPPORT)))
        .c_str();
};
const char* SystemExceptionEAFNOSUPPORT::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EAFNOSUPPORT)))
        .c_str();
};
const char* SystemExceptionEADDRINUSE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EADDRINUSE))).c_str();
};
const char* SystemExceptionEADDRNOTAVAIL::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EADDRNOTAVAIL)))
        .c_str();
};
const char* SystemExceptionENETDOWN::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENETDOWN))).c_str();
};
const char* SystemExceptionENETUNREACH::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENETUNREACH))).c_str();
};
const char* SystemExceptionENETRESET::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENETRESET))).c_str();
};
const char* SystemExceptionECONNABORTED::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ECONNABORTED)))
        .c_str();
};
const char* SystemExceptionECONNRESET::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ECONNRESET))).c_str();
};
const char* SystemExceptionENOBUFS::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOBUFS))).c_str();
}
const char* SystemExceptionEISCONN::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EISCONN))).c_str();
}
const char* SystemExceptionENOTCONN::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOTCONN))).c_str();
};
const char* SystemExceptionESHUTDOWN::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ESHUTDOWN))).c_str();
};
const char* SystemExceptionETOOMANYREFS::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ETOOMANYREFS)))
        .c_str();
};
const char* SystemExceptionETIMEDOUT::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ETIMEDOUT))).c_str();
};
const char* SystemExceptionECONNREFUSED::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ECONNREFUSED)))
        .c_str();
};
const char* SystemExceptionELOOP::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ELOOP))).c_str();
}
const char* SystemExceptionENAMETOOLONG::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENAMETOOLONG)))
        .c_str();
};
const char* SystemExceptionEHOSTDOWN::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EHOSTDOWN))).c_str();
};
const char* SystemExceptionEHOSTUNREACH::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EHOSTUNREACH)))
        .c_str();
};
const char* SystemExceptionENOTEMPTY::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOTEMPTY))).c_str();
};
const char* SystemExceptionEPROCLIM::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EPROCLIM))).c_str();
};
const char* SystemExceptionEUSERS::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EUSERS))).c_str();
}
const char* SystemExceptionEDQUOT::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EDQUOT))).c_str();
}
const char* SystemExceptionESTALE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ESTALE))).c_str();
}
const char* SystemExceptionEREMOTE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EREMOTE))).c_str();
}
const char* SystemExceptionEBADRPC::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EBADRPC))).c_str();
}
const char* SystemExceptionERPCMISMATCH::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ERPCMISMATCH)))
        .c_str();
};
const char* SystemExceptionEPROGUNAVAIL::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EPROGUNAVAIL)))
        .c_str();
};
const char* SystemExceptionEPROGMISMATCH::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EPROGMISMATCH)))
        .c_str();
};
const char* SystemExceptionEPROCUNAVAIL::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EPROCUNAVAIL)))
        .c_str();
};
const char* SystemExceptionENOLCK::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOLCK))).c_str();
}
const char* SystemExceptionENOSYS::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOSYS))).c_str();
}
const char* SystemExceptionEFTYPE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EFTYPE))).c_str();
}
const char* SystemExceptionEAUTH::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EAUTH))).c_str();
}
const char* SystemExceptionENEEDAUTH::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENEEDAUTH))).c_str();
};
const char* SystemExceptionEPWROFF::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EPWROFF))).c_str();
}
const char* SystemExceptionEDEVERR::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EDEVERR))).c_str();
}
const char* SystemExceptionEOVERFLOW::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EOVERFLOW))).c_str();
};
const char* SystemExceptionEBADEXEC::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EBADEXEC))).c_str();
};
const char* SystemExceptionEBADARCH::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EBADARCH))).c_str();
};
const char* SystemExceptionESHLIBVERS::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ESHLIBVERS))).c_str();
};
const char* SystemExceptionEBADMACHO::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EBADMACHO))).c_str();
};
const char* SystemExceptionECANCELED::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ECANCELED))).c_str();
};
const char* SystemExceptionEIDRM::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EIDRM))).c_str();
}
const char* SystemExceptionENOMSG::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOMSG))).c_str();
}
const char* SystemExceptionEILSEQ::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EILSEQ))).c_str();
}
const char* SystemExceptionENOATTR::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOATTR))).c_str();
}
const char* SystemExceptionEBADMSG::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EBADMSG))).c_str();
}
const char* SystemExceptionEMULTIHOP::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EMULTIHOP))).c_str();
};
const char* SystemExceptionENODATA::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENODATA))).c_str();
}
const char* SystemExceptionENOLINK::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOLINK))).c_str();
}
const char* SystemExceptionENOSR::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOSR))).c_str();
}
const char* SystemExceptionENOSTR::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOSTR))).c_str();
}
const char* SystemExceptionEPROTO::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EPROTO))).c_str();
}
const char* SystemExceptionETIME::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ETIME))).c_str();
}
const char* SystemExceptionEOPNOTSUPP::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EOPNOTSUPP))).c_str();
};
const char* SystemExceptionENOPOLICY::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOPOLICY))).c_str();
};
const char* SystemExceptionENOTRECOVERABLE::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ENOTRECOVERABLE)))
        .c_str();
};
const char* SystemExceptionEOWNERDEAD::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EOWNERDEAD))).c_str();
};
const char* SystemExceptionEQFULL::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(EQFULL))).c_str();
}
const char* SystemExceptionELAST::what() const throw() {
    return (s + std::string("  ") + std::string(strerror(ELAST))).c_str();
}
}
}
