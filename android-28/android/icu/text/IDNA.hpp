#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class IDNA_Info;
}
class JString;
namespace java::lang
{
	class StringBuilder;
}

namespace android::icu::text
{
	class IDNA : public JObject
	{
	public:
		// Fields
		static jint CHECK_BIDI();
		static jint CHECK_CONTEXTJ();
		static jint CHECK_CONTEXTO();
		static jint DEFAULT();
		static jint NONTRANSITIONAL_TO_ASCII();
		static jint NONTRANSITIONAL_TO_UNICODE();
		static jint USE_STD3_RULES();
		
		// QJniObject forward
		template<typename ...Ts> explicit IDNA(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IDNA(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::IDNA getUTS46Instance(jint arg0);
		java::lang::StringBuilder labelToASCII(JString arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2) const;
		java::lang::StringBuilder labelToUnicode(JString arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2) const;
		java::lang::StringBuilder nameToASCII(JString arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2) const;
		java::lang::StringBuilder nameToUnicode(JString arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2) const;
	};
} // namespace android::icu::text

