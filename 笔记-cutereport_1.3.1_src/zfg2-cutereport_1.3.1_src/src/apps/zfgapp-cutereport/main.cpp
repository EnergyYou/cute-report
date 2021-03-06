#include <QApplication>
#include "designercore.h"
#include "console.h"
#include "reportcore.h"
#include "log.h"


#ifdef STATICPLUGINS_DESIGNER
    #include "designer_static.h"
    #ifdef EXTENDEDSUITE
    #include "designer_staticExt.h"
    #endif
#endif

#ifdef STATICPLUGINS_PROPERTYEDITOR
#include "propertyeditor_static.h"
#endif

#ifdef STATICPLUGINS_CORE
    #include "core_static.h"
    #ifdef EXTENDEDSUITE
    #include "core_staticExt.h"
    #endif
#endif

int main(int argc, char *argv[])
{
    QApplication a (argc, argv);  
  
        CuteDesigner::Core  * core = new CuteDesigner::Core();
        int result = a.exec();
        delete core;
        return result;   

    
}
