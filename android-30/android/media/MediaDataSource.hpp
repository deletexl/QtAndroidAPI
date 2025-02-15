#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace android::media
{
	class MediaDataSource : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDataSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDataSource(QJniObject obj);
		
		// Constructors
		MediaDataSource();
		
		// Methods
		jlong getSize() const;
		jint readAt(jlong arg0, JByteArray arg1, jint arg2, jint arg3) const;
	};
} // namespace android::media

