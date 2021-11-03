#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class CancellationSignal;
}
namespace android::view::translation
{
	class TranslationRequest;
}

namespace android::view::translation
{
	class Translator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Translator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Translator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void destroy();
		jboolean isDestroyed();
		void translate(android::view::translation::TranslationRequest arg0, android::os::CancellationSignal arg1, JObject arg2, JObject arg3);
	};
} // namespace android::view::translation

