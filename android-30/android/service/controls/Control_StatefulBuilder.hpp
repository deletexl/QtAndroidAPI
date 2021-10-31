#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::service::controls
{
	class Control;
}
namespace android::service::controls::templates
{
	class ControlTemplate;
}

namespace android::service::controls
{
	class Control_StatefulBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Control_StatefulBuilder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Control_StatefulBuilder(QAndroidJniObject obj);
		
		// Constructors
		Control_StatefulBuilder(android::service::controls::Control arg0);
		Control_StatefulBuilder(jstring arg0, android::app::PendingIntent arg1);
		
		// Methods
		android::service::controls::Control build();
		android::service::controls::Control_StatefulBuilder setAppIntent(android::app::PendingIntent arg0);
		android::service::controls::Control_StatefulBuilder setControlId(jstring arg0);
		android::service::controls::Control_StatefulBuilder setControlTemplate(android::service::controls::templates::ControlTemplate arg0);
		android::service::controls::Control_StatefulBuilder setCustomColor(android::content::res::ColorStateList arg0);
		android::service::controls::Control_StatefulBuilder setCustomIcon(android::graphics::drawable::Icon arg0);
		android::service::controls::Control_StatefulBuilder setDeviceType(jint arg0);
		android::service::controls::Control_StatefulBuilder setStatus(jint arg0);
		android::service::controls::Control_StatefulBuilder setStatusText(jstring arg0);
		android::service::controls::Control_StatefulBuilder setStructure(jstring arg0);
		android::service::controls::Control_StatefulBuilder setSubtitle(jstring arg0);
		android::service::controls::Control_StatefulBuilder setTitle(jstring arg0);
		android::service::controls::Control_StatefulBuilder setZone(jstring arg0);
	};
} // namespace android::service::controls

