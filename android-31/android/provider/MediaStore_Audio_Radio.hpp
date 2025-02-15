#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class MediaStore_Audio_Radio : public JObject
	{
	public:
		// Fields
		static JString ENTRY_CONTENT_TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Radio(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Radio(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

