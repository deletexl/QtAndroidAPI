#pragma once

#ifndef ANDROID_CONTENT_PM_LABELEDINTENT
#define ANDROID_CONTENT_PM_LABELEDINTENT

#include "../Intent.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::content::pm
{
	class LabeledIntent : public __jni_impl::android::content::Intent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(jstring arg0, jint arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Intent arg0, jstring arg1, jstring arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Intent arg0, jstring arg1, jint arg2, jint arg3);
		
		// Methods
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		QAndroidJniObject getSourcePackage();
		jint getLabelResource();
		QAndroidJniObject getNonLocalizedLabel();
		jint getIconResource();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject loadLabel(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadIcon(__jni_impl::android::content::pm::PackageManager arg0);
	};
} // namespace __jni_impl::android::content::pm

#include "../Intent.hpp"
#include "../../os/Parcel.hpp"
#include "PackageManager.hpp"
#include "../../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject LabeledIntent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.LabeledIntent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void LabeledIntent::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2);
	}
	void LabeledIntent::__constructor(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2);
	}
	void LabeledIntent::__constructor(__jni_impl::android::content::Intent arg0, jstring arg1, jstring arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	void LabeledIntent::__constructor(__jni_impl::android::content::Intent arg0, jstring arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	void LabeledIntent::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LabeledIntent::getSourcePackage()
	{
		return __thiz.callObjectMethod(
			"getSourcePackage",
			"()Ljava/lang/String;");
	}
	jint LabeledIntent::getLabelResource()
	{
		return __thiz.callMethod<jint>(
			"getLabelResource",
			"()I");
	}
	QAndroidJniObject LabeledIntent::getNonLocalizedLabel()
	{
		return __thiz.callObjectMethod(
			"getNonLocalizedLabel",
			"()Ljava/lang/CharSequence;");
	}
	jint LabeledIntent::getIconResource()
	{
		return __thiz.callMethod<jint>(
			"getIconResource",
			"()I");
	}
	void LabeledIntent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject LabeledIntent::loadLabel(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LabeledIntent::loadIcon(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class LabeledIntent : public __jni_impl::android::content::pm::LabeledIntent
	{
	public:
		LabeledIntent(QAndroidJniObject obj) { __thiz = obj; }
		LabeledIntent(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		LabeledIntent(jstring arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		LabeledIntent(__jni_impl::android::content::Intent arg0, jstring arg1, jstring arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		LabeledIntent(__jni_impl::android::content::Intent arg0, jstring arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_LABELEDINTENT

