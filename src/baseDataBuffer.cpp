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

#include "baseDataBuffer.h"

namespace Communication {

baseDataBuffer::baseDataBuffer() { resetBuffer(); }

baseDataBuffer::~baseDataBuffer() {
    if (m_doesOwnsData) {
        delete m_data;
    }
}

baseDataBuffer::baseDataBuffer(char* datas, UINT len, bool doesOwnData) {
    m_doesOwnsData = doesOwnData;
    setBuffer(datas, len);
}

baseDataBuffer::baseDataBuffer(std::string datas) {
    m_doesOwnsData = true;
    setBuffer(datas);
}

void baseDataBuffer::resetBuffer() {
    m_sizeOfArray = 0;
    m_doesOwnsData = false;
    m_data = nullptr;
}

char* baseDataBuffer::getBuffer() { return this->m_data; }

UINT baseDataBuffer::setBuffer(std::string data) {
    char* cstr = new char[data.length()];
    memcpy(cstr, data.c_str(), data.length());
    m_data = cstr;
    m_sizeOfArray = data.length();
    return m_sizeOfArray;
}

UINT baseDataBuffer::setBuffer(char* DataArray, UINT len, bool doesOwnData) {
    m_doesOwnsData = doesOwnData;
    this->m_data = DataArray;
    m_sizeOfArray = len;
    return m_sizeOfArray;
}

UINT baseDataBuffer::getSizeOfData() { return m_sizeOfArray; }

void baseDataBuffer::deleteData() {
    delete m_data;
    resetBuffer();
}

std::string baseDataBuffer::toString() {
    std::stringstream ss;
    ss << "--DataBufferObject: \n\tm_SizeOfArray " << m_sizeOfArray;
    return ss.str();
}
}
