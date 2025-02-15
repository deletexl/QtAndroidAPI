#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./TextView_BufferType.hpp"

namespace android::widget
{
	// Fields
	android::widget::TextView_BufferType TextView_BufferType::EDITABLE()
	{
		return getStaticObjectField(
			"android.widget.TextView$BufferType",
			"EDITABLE",
			"Landroid/widget/TextView$BufferType;"
		);
	}
	android::widget::TextView_BufferType TextView_BufferType::NORMAL()
	{
		return getStaticObjectField(
			"android.widget.TextView$BufferType",
			"NORMAL",
			"Landroid/widget/TextView$BufferType;"
		);
	}
	android::widget::TextView_BufferType TextView_BufferType::SPANNABLE()
	{
		return getStaticObjectField(
			"android.widget.TextView$BufferType",
			"SPANNABLE",
			"Landroid/widget/TextView$BufferType;"
		);
	}
	
	// QJniObject forward
	TextView_BufferType::TextView_BufferType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::widget::TextView_BufferType TextView_BufferType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.widget.TextView$BufferType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/widget/TextView$BufferType;",
			arg0.object<jstring>()
		);
	}
	JArray TextView_BufferType::values()
	{
		return callStaticObjectMethod(
			"android.widget.TextView$BufferType",
			"values",
			"()[Landroid/widget/TextView$BufferType;"
		);
	}
} // namespace android::widget

