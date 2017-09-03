//--------------------------------------------------------------------------//
/// Copyright (c) 2017 by Milos Tosic. All Rights Reserved.                ///
/// License: http://www.opensource.org/licenses/BSD-2-Clause               ///
//--------------------------------------------------------------------------//

#ifndef RTM_MTUNER_PCH_H
#define RTM_MTUNER_PCH_H

#define RBASE_NAMESPACE rtm
#define RTM_DEFINE_STL_TYPES

#include <rbase/inc/platform.h>
#include <rbase/inc/strings.h>
#include <rbase/inc/winchar.h>
#include <rbase/inc/libhandler.h>
#include <rbase/inc/chunkallocator.h>

#include <rmem/inc/rmem.h>

#include <rdebug/inc/rdebug.h>

#include <MTuner/src/loader/mtunerlib.h>
#include <MTuner/src/loader/capture.h>

#include <stdlib.h>
#include <stdio.h>

#include <QtCore/QByteArray>
#include <QtCore/QCryptographicHash>
#include <QtCore/QtDebug>
#include <QtCore/QDateTime>
#include <QtCore/QDebug>
#include <QtCore/QDir>
#include <QtCore/QElapsedTimer>
#include <QtCore/QFile>
#include <QtCore/QFileInfo>
#include <QtCore/QFileSystemWatcher>
#include <QtCore/QFuture>
#include <QtCore/QtGlobal>
#include <QtCore/QList>
#include <QtCore/QLocale>
#include <QtCore/QMimeData>
#include <QtCore/QProcess>
#include <QtCore/QPropertyAnimation>
#include <QtCore/QSettings>
#include <QtCore/QStringList>
#include <QtCore/QTextStream>
#include <QtCore/QTimer>
#include <QtCore/QTranslator>
#include <QtCore/QUrl>
#include <QtCore/QUrlQuery>

#include <QtGui/QDesktopServices>
#include <QtGui/QDragMoveEvent>
#include <QtGui/QMouseEvent>
#include <QtGui/QDropEvent>
#include <QtGui/QPainter>
#include <QtGui/QStandardItem>
#include <QtGui/QSyntaxHighlighter>
#include <QtGui/QTextCharFormat>

#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QFileIconProvider>
#include <QtWidgets/QGraphicsItem>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGraphicsWidget>
#include <QtWidgets/QItemDelegate>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStyledItemDelegate>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolTip>

#endif // RTM_MTUNER_PCH_H
