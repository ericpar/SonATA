/*******************************************************************************

 File:    TscopeStowRequest.cpp
 Project: OpenSonATA
 Authors: The OpenSonATA code is the result of many programmers
          over many years

 Copyright 2011 The SETI Institute

 OpenSonATA is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 OpenSonATA is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with OpenSonATA.  If not, see<http://www.gnu.org/licenses/>.
 
 Implementers of this code are requested to include the caption
 "Licensed through SETI" with a link to setiQuest.org.
 
 For alternate licensing arrangements, please contact
 The SETI Institute at www.seti.org or setiquest.org. 

*******************************************************************************/


#include "sseTscopeInterfaceLib.h"
#include <sstream>
#include <algorithm> // for fill_n()
using std::fill_n;
using namespace std;

static const int PrintPrecision(6);

TscopeStowRequest::TscopeStowRequest() 
{
   fill_n(subarray, MAX_TEXT_STRING, '\0');
}

void TscopeStowRequest::marshall()
{
   // no need to marshall subarray char array
}

void TscopeStowRequest::demarshall()
{
    marshall();
}

ostream& operator << (ostream& strm, const TscopeStowRequest& req)
{
    stringstream localstrm;

    localstrm.precision(PrintPrecision);  

    localstrm << "TSCOPE stow: ";

    localstrm << "  subarray: " 
              << req.subarray << endl;

    strm << localstrm.str();

    return strm;
}