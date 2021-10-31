#include "./AssetFileDescriptor.hpp"
#include "./AssetManager.hpp"
#include "./ColorStateList.hpp"
#include "./Configuration.hpp"
#include "./Resources_Theme.hpp"
#include "./TypedArray.hpp"
#include "../../graphics/Movie.hpp"
#include "../../graphics/Typeface.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "../../util/DisplayMetrics.hpp"
#include "../../util/TypedValue.hpp"
#include "../../../java/io/InputStream.hpp"
#include "./Resources.hpp"

namespace android::content::res
{
	// Fields
	jint Resources::ID_NULL()
	{
		return getStaticField<jint>(
			"android.content.res.Resources",
			"ID_NULL"
		);
	}
	
	// QAndroidJniObject forward
	Resources::Resources(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Resources::Resources(android::content::res::AssetManager arg0, android::util::DisplayMetrics arg1, android::content::res::Configuration arg2)
		: __JniBaseClass(
			"android.content.res.Resources",
			"(Landroid/content/res/AssetManager;Landroid/util/DisplayMetrics;Landroid/content/res/Configuration;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jint Resources::getAttributeSetSourceResId(__JniBaseClass arg0)
	{
		return callStaticMethod<jint>(
			"android.content.res.Resources",
			"getAttributeSetSourceResId",
			"(Landroid/util/AttributeSet;)I",
			arg0.object()
		);
	}
	android::content::res::Resources Resources::getSystem()
	{
		return callStaticObjectMethod(
			"android.content.res.Resources",
			"getSystem",
			"()Landroid/content/res/Resources;"
		);
	}
	void Resources::finishPreloading()
	{
		callMethod<void>(
			"finishPreloading",
			"()V"
		);
	}
	void Resources::flushLayoutCache()
	{
		callMethod<void>(
			"flushLayoutCache",
			"()V"
		);
	}
	__JniBaseClass Resources::getAnimation(jint arg0)
	{
		return callObjectMethod(
			"getAnimation",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	android::content::res::AssetManager Resources::getAssets()
	{
		return callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	jboolean Resources::getBoolean(jint arg0)
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(I)Z",
			arg0
		);
	}
	jint Resources::getColor(jint arg0)
	{
		return callMethod<jint>(
			"getColor",
			"(I)I",
			arg0
		);
	}
	jint Resources::getColor(jint arg0, android::content::res::Resources_Theme arg1)
	{
		return callMethod<jint>(
			"getColor",
			"(ILandroid/content/res/Resources$Theme;)I",
			arg0,
			arg1.object()
		);
	}
	android::content::res::ColorStateList Resources::getColorStateList(jint arg0)
	{
		return callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	android::content::res::ColorStateList Resources::getColorStateList(jint arg0, android::content::res::Resources_Theme arg1)
	{
		return callObjectMethod(
			"getColorStateList",
			"(ILandroid/content/res/Resources$Theme;)Landroid/content/res/ColorStateList;",
			arg0,
			arg1.object()
		);
	}
	android::content::res::Configuration Resources::getConfiguration()
	{
		return callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	jfloat Resources::getDimension(jint arg0)
	{
		return callMethod<jfloat>(
			"getDimension",
			"(I)F",
			arg0
		);
	}
	jint Resources::getDimensionPixelOffset(jint arg0)
	{
		return callMethod<jint>(
			"getDimensionPixelOffset",
			"(I)I",
			arg0
		);
	}
	jint Resources::getDimensionPixelSize(jint arg0)
	{
		return callMethod<jint>(
			"getDimensionPixelSize",
			"(I)I",
			arg0
		);
	}
	android::util::DisplayMetrics Resources::getDisplayMetrics()
	{
		return callObjectMethod(
			"getDisplayMetrics",
			"()Landroid/util/DisplayMetrics;"
		);
	}
	android::graphics::drawable::Drawable Resources::getDrawable(jint arg0)
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	android::graphics::drawable::Drawable Resources::getDrawable(jint arg0, android::content::res::Resources_Theme arg1)
	{
		return callObjectMethod(
			"getDrawable",
			"(ILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1.object()
		);
	}
	android::graphics::drawable::Drawable Resources::getDrawableForDensity(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getDrawableForDensity",
			"(II)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1
		);
	}
	android::graphics::drawable::Drawable Resources::getDrawableForDensity(jint arg0, jint arg1, android::content::res::Resources_Theme arg2)
	{
		return callObjectMethod(
			"getDrawableForDensity",
			"(IILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jfloat Resources::getFloat(jint arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	android::graphics::Typeface Resources::getFont(jint arg0)
	{
		return callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	jfloat Resources::getFraction(jint arg0, jint arg1, jint arg2)
	{
		return callMethod<jfloat>(
			"getFraction",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	jint Resources::getIdentifier(jstring arg0, jstring arg1, jstring arg2)
	{
		return callMethod<jint>(
			"getIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jintArray Resources::getIntArray(jint arg0)
	{
		return callObjectMethod(
			"getIntArray",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	jint Resources::getInteger(jint arg0)
	{
		return callMethod<jint>(
			"getInteger",
			"(I)I",
			arg0
		);
	}
	__JniBaseClass Resources::getLayout(jint arg0)
	{
		return callObjectMethod(
			"getLayout",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	android::graphics::Movie Resources::getMovie(jint arg0)
	{
		return callObjectMethod(
			"getMovie",
			"(I)Landroid/graphics/Movie;",
			arg0
		);
	}
	jstring Resources::getQuantityString(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getQuantityString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Resources::getQuantityString(jint arg0, jint arg1, jobjectArray arg2)
	{
		return callObjectMethod(
			"getQuantityString",
			"(II[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring Resources::getQuantityText(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getQuantityText",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Resources::getResourceEntryName(jint arg0)
	{
		return callObjectMethod(
			"getResourceEntryName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getResourceName(jint arg0)
	{
		return callObjectMethod(
			"getResourceName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getResourcePackageName(jint arg0)
	{
		return callObjectMethod(
			"getResourcePackageName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getResourceTypeName(jint arg0)
	{
		return callObjectMethod(
			"getResourceTypeName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getString(jint arg0)
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getString(jint arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jarray Resources::getStringArray(jint arg0)
	{
		return callObjectMethod(
			"getStringArray",
			"(I)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jstring Resources::getText(jint arg0)
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getText(jint arg0, jstring arg1)
	{
		return callObjectMethod(
			"getText",
			"(ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jarray Resources::getTextArray(jint arg0)
	{
		return callObjectMethod(
			"getTextArray",
			"(I)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	void Resources::getValue(jint arg0, android::util::TypedValue arg1, jboolean arg2)
	{
		callMethod<void>(
			"getValue",
			"(ILandroid/util/TypedValue;Z)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void Resources::getValue(jstring arg0, android::util::TypedValue arg1, jboolean arg2)
	{
		callMethod<void>(
			"getValue",
			"(Ljava/lang/String;Landroid/util/TypedValue;Z)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void Resources::getValueForDensity(jint arg0, jint arg1, android::util::TypedValue arg2, jboolean arg3)
	{
		callMethod<void>(
			"getValueForDensity",
			"(IILandroid/util/TypedValue;Z)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	__JniBaseClass Resources::getXml(jint arg0)
	{
		return callObjectMethod(
			"getXml",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	android::content::res::Resources_Theme Resources::newTheme()
	{
		return callObjectMethod(
			"newTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	android::content::res::TypedArray Resources::obtainAttributes(__JniBaseClass arg0, jintArray arg1)
	{
		return callObjectMethod(
			"obtainAttributes",
			"(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;",
			arg0.object(),
			arg1
		);
	}
	android::content::res::TypedArray Resources::obtainTypedArray(jint arg0)
	{
		return callObjectMethod(
			"obtainTypedArray",
			"(I)Landroid/content/res/TypedArray;",
			arg0
		);
	}
	java::io::InputStream Resources::openRawResource(jint arg0)
	{
		return callObjectMethod(
			"openRawResource",
			"(I)Ljava/io/InputStream;",
			arg0
		);
	}
	java::io::InputStream Resources::openRawResource(jint arg0, android::util::TypedValue arg1)
	{
		return callObjectMethod(
			"openRawResource",
			"(ILandroid/util/TypedValue;)Ljava/io/InputStream;",
			arg0,
			arg1.object()
		);
	}
	android::content::res::AssetFileDescriptor Resources::openRawResourceFd(jint arg0)
	{
		return callObjectMethod(
			"openRawResourceFd",
			"(I)Landroid/content/res/AssetFileDescriptor;",
			arg0
		);
	}
	void Resources::parseBundleExtra(jstring arg0, __JniBaseClass arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"parseBundleExtra",
			"(Ljava/lang/String;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Resources::parseBundleExtras(__JniBaseClass arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"parseBundleExtras",
			"(Landroid/content/res/XmlResourceParser;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Resources::updateConfiguration(android::content::res::Configuration arg0, android::util::DisplayMetrics arg1)
	{
		callMethod<void>(
			"updateConfiguration",
			"(Landroid/content/res/Configuration;Landroid/util/DisplayMetrics;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::content::res
