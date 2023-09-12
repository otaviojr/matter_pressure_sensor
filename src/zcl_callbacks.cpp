#include "app_task.h"

#include <app-common/zap-generated/ids/Attributes.h>
#include <app-common/zap-generated/ids/Clusters.h>
#include <app/ConcreteAttributePath.h>

using namespace ::chip;
using namespace ::chip::app::Clusters;

void emberAfPressureMeasurementClusterInitCallback(EndpointId endpoint)
{
    if(endpoint == 1){
        AppEvent event;
        event.Type = AppEventType::SensorActivate;
        event.Handler = AppTask::SensorActivateHandler;

        //event.Type = AppEventType::SensorDeactivate;
        //event.Handler = AppTask::SensorDeactivateHandler;

        AppTask::Instance().PostEvent(event);
    }
}