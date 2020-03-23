#pragma once

#ifndef ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONINFO
#define ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::content::pm
{
	class PackageInstaller_SessionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint INVALID_ID();
		static jint STAGED_SESSION_ACTIVATION_FAILED();
		static jint STAGED_SESSION_NO_ERROR();
		static jint STAGED_SESSION_UNKNOWN();
		static jint STAGED_SESSION_VERIFICATION_FAILED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getSize();
		jboolean isSealed();
		jboolean isActive();
		jboolean isMultiPackage();
		jboolean isStaged();
		jint getParentSessionId();
		QAndroidJniObject getChildSessionIds();
		QAndroidJniObject getInstallerPackageName();
		jfloat getProgress();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getUser();
		jint getMode();
		jint getSessionId();
		jint getInstallReason();
		QAndroidJniObject getAppPackageName();
		QAndroidJniObject getAppIcon();
		QAndroidJniObject getAppLabel();
		QAndroidJniObject createDetailsIntent();
		jint getInstallLocation();
		QAndroidJniObject getOriginatingUri();
		jint getOriginatingUid();
		QAndroidJniObject getReferrerUri();
		jboolean isStagedSessionApplied();
		jboolean isStagedSessionReady();
		jboolean isStagedSessionFailed();
		jint getStagedSessionErrorCode();
		QAndroidJniObject getStagedSessionErrorMessage();
		jboolean isCommitted();
		jlong getUpdatedMillis();
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"
#include "../../os/UserHandle.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../Intent.hpp"
#include "../../net/Uri.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject PackageInstaller_SessionInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint PackageInstaller_SessionInfo::INVALID_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"INVALID_ID");
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_ACTIVATION_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_ACTIVATION_FAILED");
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_NO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_NO_ERROR");
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_UNKNOWN");
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_VERIFICATION_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_VERIFICATION_FAILED");
	}
	
	// Constructors
	void PackageInstaller_SessionInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageInstaller$SessionInfo",
			"(V)V");
	}
	
	// Methods
	jlong PackageInstaller_SessionInfo::getSize()
	{
		return __thiz.callMethod<jlong>(
			"getSize",
			"()J");
	}
	jboolean PackageInstaller_SessionInfo::isSealed()
	{
		return __thiz.callMethod<jboolean>(
			"isSealed",
			"()Z");
	}
	jboolean PackageInstaller_SessionInfo::isActive()
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"()Z");
	}
	jboolean PackageInstaller_SessionInfo::isMultiPackage()
	{
		return __thiz.callMethod<jboolean>(
			"isMultiPackage",
			"()Z");
	}
	jboolean PackageInstaller_SessionInfo::isStaged()
	{
		return __thiz.callMethod<jboolean>(
			"isStaged",
			"()Z");
	}
	jint PackageInstaller_SessionInfo::getParentSessionId()
	{
		return __thiz.callMethod<jint>(
			"getParentSessionId",
			"()I");
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getChildSessionIds()
	{
		return __thiz.callObjectMethod(
			"getChildSessionIds",
			"()[I");
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getInstallerPackageName()
	{
		return __thiz.callObjectMethod(
			"getInstallerPackageName",
			"()Ljava/lang/String;");
	}
	jfloat PackageInstaller_SessionInfo::getProgress()
	{
		return __thiz.callMethod<jfloat>(
			"getProgress",
			"()F");
	}
	jint PackageInstaller_SessionInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PackageInstaller_SessionInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getUser()
	{
		return __thiz.callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;");
	}
	jint PackageInstaller_SessionInfo::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I");
	}
	jint PackageInstaller_SessionInfo::getSessionId()
	{
		return __thiz.callMethod<jint>(
			"getSessionId",
			"()I");
	}
	jint PackageInstaller_SessionInfo::getInstallReason()
	{
		return __thiz.callMethod<jint>(
			"getInstallReason",
			"()I");
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getAppPackageName()
	{
		return __thiz.callObjectMethod(
			"getAppPackageName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getAppIcon()
	{
		return __thiz.callObjectMethod(
			"getAppIcon",
			"()Landroid/graphics/Bitmap;");
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getAppLabel()
	{
		return __thiz.callObjectMethod(
			"getAppLabel",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject PackageInstaller_SessionInfo::createDetailsIntent()
	{
		return __thiz.callObjectMethod(
			"createDetailsIntent",
			"()Landroid/content/Intent;");
	}
	jint PackageInstaller_SessionInfo::getInstallLocation()
	{
		return __thiz.callMethod<jint>(
			"getInstallLocation",
			"()I");
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getOriginatingUri()
	{
		return __thiz.callObjectMethod(
			"getOriginatingUri",
			"()Landroid/net/Uri;");
	}
	jint PackageInstaller_SessionInfo::getOriginatingUid()
	{
		return __thiz.callMethod<jint>(
			"getOriginatingUid",
			"()I");
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getReferrerUri()
	{
		return __thiz.callObjectMethod(
			"getReferrerUri",
			"()Landroid/net/Uri;");
	}
	jboolean PackageInstaller_SessionInfo::isStagedSessionApplied()
	{
		return __thiz.callMethod<jboolean>(
			"isStagedSessionApplied",
			"()Z");
	}
	jboolean PackageInstaller_SessionInfo::isStagedSessionReady()
	{
		return __thiz.callMethod<jboolean>(
			"isStagedSessionReady",
			"()Z");
	}
	jboolean PackageInstaller_SessionInfo::isStagedSessionFailed()
	{
		return __thiz.callMethod<jboolean>(
			"isStagedSessionFailed",
			"()Z");
	}
	jint PackageInstaller_SessionInfo::getStagedSessionErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getStagedSessionErrorCode",
			"()I");
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getStagedSessionErrorMessage()
	{
		return __thiz.callObjectMethod(
			"getStagedSessionErrorMessage",
			"()Ljava/lang/String;");
	}
	jboolean PackageInstaller_SessionInfo::isCommitted()
	{
		return __thiz.callMethod<jboolean>(
			"isCommitted",
			"()Z");
	}
	jlong PackageInstaller_SessionInfo::getUpdatedMillis()
	{
		return __thiz.callMethod<jlong>(
			"getUpdatedMillis",
			"()J");
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PackageInstaller_SessionInfo : public __jni_impl::android::content::pm::PackageInstaller_SessionInfo
	{
	public:
		PackageInstaller_SessionInfo(QAndroidJniObject obj) { __thiz = obj; }
		PackageInstaller_SessionInfo()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONINFO
