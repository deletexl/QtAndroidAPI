#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::app
{
	class ActivityManager_MemoryInfo;
}
namespace android::app
{
	class ActivityManager_RunningAppProcessInfo;
}
namespace android::app
{
	class ActivityManager_TaskDescription;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content::pm
{
	class ConfigurationInfo;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Bundle;
}
namespace android::util
{
	class Size;
}
namespace java::io
{
	class FileDescriptor;
}

namespace android::app
{
	class ActivityManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_REPORT_HEAP_LIMIT();
		static jint LOCK_TASK_MODE_LOCKED();
		static jint LOCK_TASK_MODE_NONE();
		static jint LOCK_TASK_MODE_PINNED();
		static jstring META_HOME_ALTERNATE();
		static jint MOVE_TASK_NO_USER_ACTION();
		static jint MOVE_TASK_WITH_HOME();
		static jint RECENT_IGNORE_UNAVAILABLE();
		static jint RECENT_WITH_EXCLUDED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void getMyMemoryState(android::app::ActivityManager_RunningAppProcessInfo arg0);
		static jboolean isLowMemoryKillReportSupported();
		static jboolean isRunningInTestHarness();
		static jboolean isRunningInUserTestHarness();
		static jboolean isUserAMonkey();
		static void setVrThread(jint arg0);
		jint addAppTask(android::app::Activity arg0, android::content::Intent arg1, android::app::ActivityManager_TaskDescription arg2, android::graphics::Bitmap arg3);
		void appNotResponding(jstring arg0);
		jboolean clearApplicationUserData();
		void clearWatchHeapLimit();
		void dumpPackageState(java::io::FileDescriptor arg0, jstring arg1);
		android::util::Size getAppTaskThumbnailSize();
		__JniBaseClass getAppTasks();
		android::content::pm::ConfigurationInfo getDeviceConfigurationInfo();
		__JniBaseClass getHistoricalProcessExitReasons(jstring arg0, jint arg1, jint arg2);
		jint getLargeMemoryClass();
		jint getLauncherLargeIconDensity();
		jint getLauncherLargeIconSize();
		jint getLockTaskModeState();
		jint getMemoryClass();
		void getMemoryInfo(android::app::ActivityManager_MemoryInfo arg0);
		jarray getProcessMemoryInfo(jintArray arg0);
		__JniBaseClass getProcessesInErrorState();
		__JniBaseClass getRecentTasks(jint arg0, jint arg1);
		__JniBaseClass getRunningAppProcesses();
		android::app::PendingIntent getRunningServiceControlPanel(android::content::ComponentName arg0);
		__JniBaseClass getRunningServices(jint arg0);
		__JniBaseClass getRunningTasks(jint arg0);
		jboolean isActivityStartAllowedOnDisplay(android::content::Context arg0, jint arg1, android::content::Intent arg2);
		jboolean isBackgroundRestricted();
		jboolean isInLockTaskMode();
		jboolean isLowRamDevice();
		void killBackgroundProcesses(jstring arg0);
		void moveTaskToFront(jint arg0, jint arg1);
		void moveTaskToFront(jint arg0, jint arg1, android::os::Bundle arg2);
		void restartPackage(jstring arg0);
		void setProcessStateSummary(jbyteArray arg0);
		void setWatchHeapLimit(jlong arg0);
	};
} // namespace android::app
