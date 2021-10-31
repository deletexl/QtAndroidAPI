#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/ActionProvider.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}

namespace android::app
{
	class MediaRouteActionProvider : public android::view::ActionProvider
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouteActionProvider(const char *className, const char *sig, Ts...agv) : android::view::ActionProvider(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouteActionProvider(QAndroidJniObject obj);
		
		// Constructors
		MediaRouteActionProvider(android::content::Context arg0);
		
		// Methods
		jboolean isVisible();
		android::view::View onCreateActionView();
		android::view::View onCreateActionView(__JniBaseClass arg0);
		jboolean onPerformDefaultAction();
		jboolean overridesItemVisibility();
		void setExtendedSettingsClickListener(__JniBaseClass arg0);
		void setRouteTypes(jint arg0);
	};
} // namespace android::app
