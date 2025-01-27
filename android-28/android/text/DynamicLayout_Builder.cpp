#include "./DynamicLayout.hpp"
#include "./Layout_Alignment.hpp"
#include "./TextPaint.hpp"
#include "./TextUtils_TruncateAt.hpp"
#include "../../JString.hpp"
#include "./DynamicLayout_Builder.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	DynamicLayout_Builder::DynamicLayout_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::text::DynamicLayout_Builder DynamicLayout_Builder::obtain(JString arg0, android::text::TextPaint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.text.DynamicLayout$Builder",
			"obtain",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;I)Landroid/text/DynamicLayout$Builder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	android::text::DynamicLayout DynamicLayout_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/DynamicLayout;"
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setAlignment(android::text::Layout_Alignment arg0) const
	{
		return callObjectMethod(
			"setAlignment",
			"(Landroid/text/Layout$Alignment;)Landroid/text/DynamicLayout$Builder;",
			arg0.object()
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setBreakStrategy(jint arg0) const
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setDisplayText(JString arg0) const
	{
		return callObjectMethod(
			"setDisplayText",
			"(Ljava/lang/CharSequence;)Landroid/text/DynamicLayout$Builder;",
			arg0.object<jstring>()
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setEllipsize(android::text::TextUtils_TruncateAt arg0) const
	{
		return callObjectMethod(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)Landroid/text/DynamicLayout$Builder;",
			arg0.object()
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setEllipsizedWidth(jint arg0) const
	{
		return callObjectMethod(
			"setEllipsizedWidth",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setHyphenationFrequency(jint arg0) const
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setIncludePad(jboolean arg0) const
	{
		return callObjectMethod(
			"setIncludePad",
			"(Z)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setJustificationMode(jint arg0) const
	{
		return callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setLineSpacing(jfloat arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"setLineSpacing",
			"(FF)Landroid/text/DynamicLayout$Builder;",
			arg0,
			arg1
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setTextDirection(JObject arg0) const
	{
		return callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/DynamicLayout$Builder;",
			arg0.object()
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setUseLineSpacingFromFallbacks(jboolean arg0) const
	{
		return callObjectMethod(
			"setUseLineSpacingFromFallbacks",
			"(Z)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
} // namespace android::text

