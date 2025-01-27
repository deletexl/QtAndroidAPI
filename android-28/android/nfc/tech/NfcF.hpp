#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcF : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcF(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcF(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NfcF get(android::nfc::Tag arg0);
		void close() const;
		void connect() const;
		JByteArray getManufacturer() const;
		jint getMaxTransceiveLength() const;
		JByteArray getSystemCode() const;
		android::nfc::Tag getTag() const;
		jint getTimeout() const;
		jboolean isConnected() const;
		void setTimeout(jint arg0) const;
		JByteArray transceive(JByteArray arg0) const;
	};
} // namespace android::nfc::tech

