#include "../../JIntArray.hpp"
#include "./Layout_Alignment.hpp"
#include "./StaticLayout.hpp"
#include "./TextPaint.hpp"
#include "./TextUtils_TruncateAt.hpp"
#include "../../JString.hpp"
#include "./StaticLayout_Builder.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	StaticLayout_Builder::StaticLayout_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::text::StaticLayout_Builder StaticLayout_Builder::obtain(JString arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.text.StaticLayout$Builder",
			"obtain",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;I)Landroid/text/StaticLayout$Builder;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4
		);
	}
	android::text::StaticLayout StaticLayout_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/StaticLayout;"
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setAlignment(android::text::Layout_Alignment arg0) const
	{
		return callObjectMethod(
			"setAlignment",
			"(Landroid/text/Layout$Alignment;)Landroid/text/StaticLayout$Builder;",
			arg0.object()
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setBreakStrategy(jint arg0) const
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setEllipsize(android::text::TextUtils_TruncateAt arg0) const
	{
		return callObjectMethod(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)Landroid/text/StaticLayout$Builder;",
			arg0.object()
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setEllipsizedWidth(jint arg0) const
	{
		return callObjectMethod(
			"setEllipsizedWidth",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setHyphenationFrequency(jint arg0) const
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setIncludePad(jboolean arg0) const
	{
		return callObjectMethod(
			"setIncludePad",
			"(Z)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setIndents(JIntArray arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"setIndents",
			"([I[I)Landroid/text/StaticLayout$Builder;",
			arg0.object<jintArray>(),
			arg1.object<jintArray>()
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setJustificationMode(jint arg0) const
	{
		return callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setLineSpacing(jfloat arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"setLineSpacing",
			"(FF)Landroid/text/StaticLayout$Builder;",
			arg0,
			arg1
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setMaxLines(jint arg0) const
	{
		return callObjectMethod(
			"setMaxLines",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setText(JString arg0) const
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/text/StaticLayout$Builder;",
			arg0.object<jstring>()
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setTextDirection(JObject arg0) const
	{
		return callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/StaticLayout$Builder;",
			arg0.object()
		);
	}
	android::text::StaticLayout_Builder StaticLayout_Builder::setUseLineSpacingFromFallbacks(jboolean arg0) const
	{
		return callObjectMethod(
			"setUseLineSpacingFromFallbacks",
			"(Z)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
} // namespace android::text

