#include <QApplication>
#include <QMessageBox>

//#include <CuteReport>
//#include <iostream>

#include "reportcore.h"
#include "reportpreview.h"
#include "stdstoragedialog.h"
#include "reportinterface.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CuteReport::ReportCore * reportCore = new CuteReport::ReportCore(0, 0, false);
    CuteReport::ReportPreview * preview = new CuteReport::ReportPreview();

    preview->setReportCore(reportCore);
    QString reportUrl;
#ifdef Q_OS_WIN
    reportUrl = "file:/F/zfg1.qtrp";
#else
    reportUrl = "file:/usr/share/cutereport/examples/examples/reports/invoice_1.qtrp";
#endif
    CuteReport::ReportInterface * reportObject = reportCore->loadReport(reportUrl);
    if (!reportObject) {
        QMessageBox::critical(0, QObject::tr("CuteReport example"),
                              QObject::tr("Report file loading error"),
                              QMessageBox::Ok);
        exit(1);
    }
    preview->connectReport(reportObject);
   // preview->setShowFlags(CuteReport::ReportPreview::ShowPrint|CuteReport::ReportPreview::ShowFitted);//ZFG
    preview->show();
    preview->run();

    a.exec();

    delete preview;
    delete reportCore;
}
