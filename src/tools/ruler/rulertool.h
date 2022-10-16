// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: 2017-2019 Alejandro Sirgo Rica & Contributors

#pragma once

#include "src/tools/abstracttwopointtool.h"

class RulerTool : public CaptureTool
{
    Q_OBJECT
public:
    explicit RulerTool(QObject* parent = nullptr);

    QIcon icon(const QColor& background, bool inEditor) const override;
    QString name() const override;
    QString description() const override;

    void process(QPainter& painter, const QPixmap& pixmap) override;

protected:
    CaptureTool::Type type() const override;

};
