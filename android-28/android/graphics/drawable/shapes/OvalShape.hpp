#pragma once

#include "./RectShape.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Outline;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics::drawable::shapes
{
	class RectShape;
}
namespace android::graphics::drawable::shapes
{
	class Shape;
}
class JObject;

namespace android::graphics::drawable::shapes
{
	class OvalShape : public android::graphics::drawable::shapes::RectShape
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OvalShape(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::shapes::RectShape(className, sig, std::forward<Ts>(agv)...) {}
		OvalShape(QJniObject obj);
		
		// Constructors
		OvalShape();
		
		// Methods
		android::graphics::drawable::shapes::OvalShape clone() const;
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const;
		void getOutline(android::graphics::Outline arg0) const;
	};
} // namespace android::graphics::drawable::shapes

