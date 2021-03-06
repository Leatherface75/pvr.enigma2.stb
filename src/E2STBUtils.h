#pragma once
/*
 *      Copyright (C) 2005-2015 Team Kodi
 *      Copyright (C) 2014-2015 Cristiano A. Silva
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Kodi; see the file copying.txt. If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#ifndef PVR_ENIGMA2STB_E2STBUTILS_H
#define PVR_ENIGMA2STB_E2STBUTILS_H

#include <string>
#include <vector>

#include "kodi/util/StdString.h"

class CE2STBUtils
{
  public:
    CE2STBUtils(void) {};
    ~CE2STBUtils(void) {};

    static long TimeStringToSeconds(const CStdString& timeString);
    std::string URLEncodeInline(const std::string& strURL);
    std::string BackendConnection(std::string& url);

  private:
    static int SplitString(const CStdString& input, const CStdString& delimiter, std::vector<CStdString>& results,
        unsigned int iMaxStrings = 0);
    bool GetXMLFromHTTP(const std::string &strURL, std::string &strResult);
};

