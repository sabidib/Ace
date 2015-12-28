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

#ifndef H_DATABUFFER_H
#define H_DATABUFFER_H

#include "GenHeader.h"
namespace Communication {

/**
 * @brief      Represents a data package. The data is stored in a char*.
 * Ownership of this pointer is decided by the setBuffer and constructor
 * parameters.
 * This means the destructor will delete the data if it considers that the
 * object owns the data.
 * If the data is created by the class, then it will automatically assume
 * ownership of the data.
 */
class baseDataBuffer {
   public:
    /**
     * @brief      Initializes the object with a null data buffer
     */
    baseDataBuffer();
    /**
     * @brief      Initializes the object with data. If doesOwnData is
     * set to true, then the object will delete the data on destruction of
     * of the object. If it is set to false, then it is the responsibility
     * of the caller to delete the object.
     * @param[in]  datas        A pointer to the data.
     * @param[in]  len          The length of the data in bytes.
     * @param[in]  doesOwnData  Whether the object owns the data or not.
     */
    baseDataBuffer(char* datas, UINT len, bool doesOwnData = false);
    /**
     * @brief      Initializes the object with data by copying the data
     * in the datas std::string. This implicitly assigns ownership of
     * the copied string to the object.
     *
     * @param[in]  datas  A string of the data to store.
     */
    baseDataBuffer(std::string datas);

    /**
     * @brief      When destroying the object, if the m_ownStringPointer
     * is true, then the data stored in this object is deleted by the
     * destructor, otherwise nothing is deleted.
     */
    ~baseDataBuffer();

    /**
     * @brief      Forces the deletion of the data stored in the object.
     */
    void deleteData();

    /**
     * @brief      Gets a pointer to the data.
     *
     * @return    Returns a char* to the data in the buffer.
     */
    char* getBuffer();

    /**
     * @brief      Sets the data of the object to that specified by DataArray.
     * If doesOwnData is set to true, then the object will delete the data on
     * destruction of the object. If it is set to false, then it is the
     * responsibility of the caller to delete the object.
     *
     * @param[in]  DataArray  A pointer to the data.
     * @param[in]  len        The length of the data in bytes.
     * @param[in]  doesOwnData  Whether the object owns the data or not.
     *
     * @return     returns the size of the buffer.
     */
    UINT setBuffer(char* DataArray, UINT len, bool doesOwnData = false);

    /**
     * @brief      Sets the data of the data of the object by copying the data
     * in the data std::string. This implicitly assigned ownership of
     * the copied string to the object.
     *
     * @param[in]  data  the std::string containing the data.
     *
     * @return     returns the size of the buffer
     */
    UINT setBuffer(std::string data);

    /**
     * @brief      Returns the UINT representing the size of the buffer in
     * bytes.
     *
     * @return     Returns a UINT
     */
    UINT getSizeOfData();

    /**
     * @brief      Returns a std::string representation of the object.
     *
     * @return     returns an std::string.
     */
    std::string toString();

    /**
     * @brief      Resets the data buffer.
     */
    void resetBuffer();

   private:
    char* m_data;
    UINT m_sizeOfArray;
    char m_doesOwnsData;
};
}

#endif
