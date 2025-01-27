#pragma once

#include "../../../JObject.hpp"

namespace android::view::translation
{
	class TranslationContext;
}
namespace android::view::translation
{
	class TranslationSpec;
}

namespace android::view::translation
{
	class TranslationContext_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TranslationContext_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationContext_Builder(QJniObject obj);
		
		// Constructors
		TranslationContext_Builder(android::view::translation::TranslationSpec arg0, android::view::translation::TranslationSpec arg1);
		
		// Methods
		android::view::translation::TranslationContext build() const;
		android::view::translation::TranslationContext_Builder setTranslationFlags(jint arg0) const;
	};
} // namespace android::view::translation

