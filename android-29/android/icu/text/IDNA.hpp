#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class IDNA_Info;
}
namespace java::lang
{
	class StringBuilder;
}

namespace android::icu::text
{
	class IDNA : public __JniBaseClass
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IDNA(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IDNA(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getUTS46Instance(jint arg0);
		QAndroidJniObject labelToASCII(jstring arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2);
		QAndroidJniObject labelToUnicode(jstring arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2);
		QAndroidJniObject nameToASCII(jstring arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2);
		QAndroidJniObject nameToUnicode(jstring arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2);
	};
} // namespace android::icu::text

