#include <QApplication>
#include <QMessageBox>

#include <QSqlQueryModel>
#include <QtSql>

#include <QTableView> //

#include "reportcore.h"
#include "reportpreview.h"
#include "stdstoragedialog.h"
#include "reportinterface.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //=======================================================
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    QString dsn = "Driver={sql server};server=192.168.1.8;database=Northwind;uid=sa;pwd=woaini";
    db.setDatabaseName(dsn);
    db.open();

    QTableView tablev;
    QSqlQueryModel *model=new QSqlQueryModel;
    model->setQuery("SELECT * FROM Categories ");
    tablev.setModel(model);
    tablev.show();
    //======================================================================
    CuteReport::ReportCore * reportCore = new CuteReport::ReportCore(0, 0, false);
    QString reportUrl( "file:/F/zfgdb.qtrp");    
    CuteReport::ReportInterface * reportObject = reportCore->loadReport(reportUrl);

    //将模型地址告诉报告模板，注意 "zfgMod"要与模板中的名称一致
      reportObject->setVariableValue("zfgMod",quint64(model));

    CuteReport::ReportPreview * preview = new CuteReport::ReportPreview(reportCore);
    preview->setReportCore(reportCore);
    preview->connectReport(reportObject);
    preview->show();
    preview->run();
    a.exec();
}
