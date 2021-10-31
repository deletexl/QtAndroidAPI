#include "./InputMethodSubtype.hpp"
#include "./InputMethodSubtype_InputMethodSubtypeBuilder.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// QAndroidJniObject forward
	InputMethodSubtype_InputMethodSubtypeBuilder::InputMethodSubtype_InputMethodSubtypeBuilder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	InputMethodSubtype_InputMethodSubtypeBuilder::InputMethodSubtype_InputMethodSubtypeBuilder()
		: __JniBaseClass(
			"android.view.inputmethod.InputMethodSubtype$InputMethodSubtypeBuilder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/InputMethodSubtype;"
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setIsAsciiCapable(jboolean arg0)
	{
		return callObjectMethod(
			"setIsAsciiCapable",
			"(Z)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setIsAuxiliary(jboolean arg0)
	{
		return callObjectMethod(
			"setIsAuxiliary",
			"(Z)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setLanguageTag(jstring arg0)
	{
		return callObjectMethod(
			"setLanguageTag",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setOverridesImplicitlyEnabledSubtype(jboolean arg0)
	{
		return callObjectMethod(
			"setOverridesImplicitlyEnabledSubtype",
			"(Z)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeExtraValue(jstring arg0)
	{
		return callObjectMethod(
			"setSubtypeExtraValue",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeIconResId(jint arg0)
	{
		return callObjectMethod(
			"setSubtypeIconResId",
			"(I)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeId(jint arg0)
	{
		return callObjectMethod(
			"setSubtypeId",
			"(I)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeLocale(jstring arg0)
	{
		return callObjectMethod(
			"setSubtypeLocale",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeMode(jstring arg0)
	{
		return callObjectMethod(
			"setSubtypeMode",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeNameResId(jint arg0)
	{
		return callObjectMethod(
			"setSubtypeNameResId",
			"(I)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
} // namespace android::view::inputmethod

