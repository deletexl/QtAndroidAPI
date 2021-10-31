#include "./OnObbStateChangeListener.hpp"

namespace android::os::storage
{
	// Fields
	jint OnObbStateChangeListener::ERROR_ALREADY_MOUNTED()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_ALREADY_MOUNTED"
		);
	}
	jint OnObbStateChangeListener::ERROR_COULD_NOT_MOUNT()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_COULD_NOT_MOUNT"
		);
	}
	jint OnObbStateChangeListener::ERROR_COULD_NOT_UNMOUNT()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_COULD_NOT_UNMOUNT"
		);
	}
	jint OnObbStateChangeListener::ERROR_INTERNAL()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_INTERNAL"
		);
	}
	jint OnObbStateChangeListener::ERROR_NOT_MOUNTED()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_NOT_MOUNTED"
		);
	}
	jint OnObbStateChangeListener::ERROR_PERMISSION_DENIED()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_PERMISSION_DENIED"
		);
	}
	jint OnObbStateChangeListener::MOUNTED()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"MOUNTED"
		);
	}
	jint OnObbStateChangeListener::UNMOUNTED()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"UNMOUNTED"
		);
	}
	
	// QAndroidJniObject forward
	OnObbStateChangeListener::OnObbStateChangeListener(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	OnObbStateChangeListener::OnObbStateChangeListener()
		: __JniBaseClass(
			"android.os.storage.OnObbStateChangeListener",
			"()V"
		) {}
	
	// Methods
	void OnObbStateChangeListener::onObbStateChange(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"onObbStateChange",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
} // namespace android::os::storage
