#pragma once

#include "./Activity.hpp"

namespace android::app
{
	class Activity;
}
namespace android::app
{
	class LocalActivityManager;
}
namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class ActivityGroup : public android::app::Activity
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityGroup(const char *className, const char *sig, Ts...agv) : android::app::Activity(className, sig, std::forward<Ts>(agv)...) {}
		ActivityGroup(QJniObject obj);
		
		// Constructors
		ActivityGroup();
		ActivityGroup(jboolean arg0);
		
		// Methods
		android::app::Activity getCurrentActivity() const;
		android::app::LocalActivityManager getLocalActivityManager() const;
	};
} // namespace android::app

