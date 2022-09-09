/****************************************************************************
**
** This file is part of the KD Soap project..
**
** SPDX-FileCopyrightText: 2010-2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
**
** SPDX-License-Identifier: MIT
**
****************************************************************************/

#ifndef KDSOAPMESSAGEREADER_P_H
#define KDSOAPMESSAGEREADER_P_H

#include "KDSoapMessage.h"
#include "KDSoapClientInterface.h"

class KDSOAP_EXPORT KDSoapMessageReader
{
public:
    enum XmlError
    {
        NoError = 0,
        ParseError,
        PrematureEndOfDocumentError
    };

    KDSoapMessageReader();

    XmlError xmlToMessage(const QByteArray &data, KDSoapMessage *pParsedMessage, QString *pMessageNamespace, KDSoapHeaders *pRequestHeaders,
                          KDSoap::SoapVersion soapVersion) const;
};

#endif
