// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: 2017-2019 Alejandro Sirgo Rica & Contributors

#include "rulertool.h"
#include <QPainter>
#include <QPainterPath>
#include <cmath>

RulerTool::RulerTool(QObject* parent)
  : CaptureTool(parent)
{
}

QIcon RulerTool::icon(const QColor& background, bool inEditor) const
{
    Q_UNUSED(inEditor)
    return QIcon(iconPath(background) + "square.svg");
}
QString RulerTool::name() const
{
    return tr("Ruler");
}

CaptureTool::Type RulerTool::type() const
{
    return CaptureTool::TYPE_RECTANGLE;
}

QString RulerTool::description() const
{
    return tr("Set the Ruler as the paint tool");
}

void RulerTool::process(QPainter& painter, const QPixmap& pixmap)
{
    Q_UNUSED(pixmap)
    Q_UNUSED(painter)
}

