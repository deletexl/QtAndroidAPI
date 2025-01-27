#pragma once

#include "./TtsSpan_SemioticClassBuilder.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_OrdinalBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_OrdinalBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_OrdinalBuilder(QJniObject obj);
		
		// Constructors
		TtsSpan_OrdinalBuilder();
		TtsSpan_OrdinalBuilder(JString arg0);
		TtsSpan_OrdinalBuilder(jlong arg0);
		
		// Methods
		android::text::style::TtsSpan_OrdinalBuilder setNumber(JString arg0) const;
		android::text::style::TtsSpan_OrdinalBuilder setNumber(jlong arg0) const;
	};
} // namespace android::text::style

