#include "../../../JString.hpp"
#include "./TtsSpan_ElectronicBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	TtsSpan_ElectronicBuilder::TtsSpan_ElectronicBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_ElectronicBuilder::TtsSpan_ElectronicBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$ElectronicBuilder",
			"()V"
		) {}
	
	// Methods
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setDomain(JString arg0) const
	{
		return callObjectMethod(
			"setDomain",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setEmailArguments(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"setEmailArguments",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setFragmentId(JString arg0) const
	{
		return callObjectMethod(
			"setFragmentId",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setPassword(JString arg0) const
	{
		return callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setPath(JString arg0) const
	{
		return callObjectMethod(
			"setPath",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setPort(jint arg0) const
	{
		return callObjectMethod(
			"setPort",
			"(I)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setProtocol(JString arg0) const
	{
		return callObjectMethod(
			"setProtocol",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setQueryString(JString arg0) const
	{
		return callObjectMethod(
			"setQueryString",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setUsername(JString arg0) const
	{
		return callObjectMethod(
			"setUsername",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

