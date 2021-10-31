#include "../app/AlertDialog_Builder.hpp"
#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "./ListPreference.hpp"

namespace android::preference
{
	// Fields
	
	// QAndroidJniObject forward
	ListPreference::ListPreference(QAndroidJniObject obj) : android::preference::DialogPreference(obj) {}
	
	// Constructors
	ListPreference::ListPreference(android::content::Context arg0)
		: android::preference::DialogPreference(
			"android.preference.ListPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ListPreference::ListPreference(android::content::Context arg0, __JniBaseClass arg1)
		: android::preference::DialogPreference(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ListPreference::ListPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::preference::DialogPreference(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ListPreference::ListPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::preference::DialogPreference(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jint ListPreference::findIndexOfValue(jstring arg0)
	{
		return callMethod<jint>(
			"findIndexOfValue",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jarray ListPreference::getEntries()
	{
		return callObjectMethod(
			"getEntries",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	jstring ListPreference::getEntry()
	{
		return callObjectMethod(
			"getEntry",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jarray ListPreference::getEntryValues()
	{
		return callObjectMethod(
			"getEntryValues",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	jstring ListPreference::getSummary()
	{
		return callObjectMethod(
			"getSummary",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ListPreference::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ListPreference::setEntries(jarray arg0)
	{
		callMethod<void>(
			"setEntries",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ListPreference::setEntries(jint arg0)
	{
		callMethod<void>(
			"setEntries",
			"(I)V",
			arg0
		);
	}
	void ListPreference::setEntryValues(jarray arg0)
	{
		callMethod<void>(
			"setEntryValues",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ListPreference::setEntryValues(jint arg0)
	{
		callMethod<void>(
			"setEntryValues",
			"(I)V",
			arg0
		);
	}
	void ListPreference::setSummary(jstring arg0)
	{
		callMethod<void>(
			"setSummary",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ListPreference::setValue(jstring arg0)
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ListPreference::setValueIndex(jint arg0)
	{
		callMethod<void>(
			"setValueIndex",
			"(I)V",
			arg0
		);
	}
} // namespace android::preference
