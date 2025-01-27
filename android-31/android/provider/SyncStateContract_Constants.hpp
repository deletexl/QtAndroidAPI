#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class SyncStateContract_Constants : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncStateContract_Constants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncStateContract_Constants(QJniObject obj);
		
		// Constructors
		SyncStateContract_Constants();
		
		// Methods
	};
} // namespace android::provider

