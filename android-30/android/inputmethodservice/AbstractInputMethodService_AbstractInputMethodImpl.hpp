#pragma once

#include "../../JObject.hpp"

namespace android::inputmethodservice
{
	class AbstractInputMethodService;
}

namespace android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodImpl : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractInputMethodService_AbstractInputMethodImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractInputMethodService_AbstractInputMethodImpl(QAndroidJniObject obj);
		
		// Constructors
		AbstractInputMethodService_AbstractInputMethodImpl(android::inputmethodservice::AbstractInputMethodService arg0);
		
		// Methods
		void createSession(JObject arg0);
		void revokeSession(JObject arg0);
		void setSessionEnabled(JObject arg0, jboolean arg1);
	};
} // namespace android::inputmethodservice

