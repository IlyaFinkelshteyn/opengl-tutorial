#ifndef PRIMITIVES_HPP
#define PRIMITIVES_HPP

#include <glm/vec4.hpp>

namespace ogl
{

const glm::vec4 triangle[] = {
  {0.75f,  0.75f,  0.0f, 1.0f},
  {0.75f,  -0.75f, 0.0f, 1.0f},
  {-0.75f, -0.75f, 0.0f, 1.0f}
};

} // namespace ogl

#endif // PRIMITIVES_HPP
