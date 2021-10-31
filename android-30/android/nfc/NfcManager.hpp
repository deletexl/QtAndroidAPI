#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::nfc
{
	class NfcAdapter;
}

namespace android::nfc
{
	class NfcManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NfcManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::nfc::NfcAdapter getDefaultAdapter();
	};
} // namespace android::nfc

