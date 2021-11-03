#pragma once

#include "../../../../JObject.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class Reader;
}

namespace javax::xml::transform::stream
{
	class StreamSource : public JObject
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StreamSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StreamSource(QAndroidJniObject obj);
		
		// Constructors
		StreamSource();
		StreamSource(java::io::File arg0);
		StreamSource(java::io::InputStream arg0);
		StreamSource(java::io::Reader arg0);
		StreamSource(jstring arg0);
		StreamSource(java::io::InputStream arg0, jstring arg1);
		StreamSource(java::io::Reader arg0, jstring arg1);
		
		// Methods
		java::io::InputStream getInputStream();
		jstring getPublicId();
		java::io::Reader getReader();
		jstring getSystemId();
		jboolean isEmpty();
		void setInputStream(java::io::InputStream arg0);
		void setPublicId(jstring arg0);
		void setReader(java::io::Reader arg0);
		void setSystemId(java::io::File arg0);
		void setSystemId(jstring arg0);
	};
} // namespace javax::xml::transform::stream

