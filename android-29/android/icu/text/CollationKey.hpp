#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class CollationKey : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CollationKey(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CollationKey(QAndroidJniObject obj);
		
		// Constructors
		CollationKey(jstring arg0, jbyteArray arg1);
		
		// Methods
		jint compareTo(android::icu::text::CollationKey arg0);
		jint compareTo(jobject arg0);
		jboolean equals(android::icu::text::CollationKey arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getBound(jint arg0, jint arg1);
		jstring getSourceString();
		jint hashCode();
		QAndroidJniObject merge(android::icu::text::CollationKey arg0);
		jbyteArray toByteArray();
	};
} // namespace android::icu::text

