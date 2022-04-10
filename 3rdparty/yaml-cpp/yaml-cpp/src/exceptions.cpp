#include "yaml-cpp/exceptions.h"
#include "yaml-cpp/noexcept.h"

namespace YAML {

// These destructors are defined out-of-line so the vtable is only emitted once.
Exception::~Exception() YAML_CPP_NOEXCEPT = default;
ParserException::~ParserException() YAML_CPP_NOEXCEPT = default;
RepresentationException::~RepresentationException() YAML_CPP_NOEXCEPT = default;
InvalidScalar::~InvalidScalar() YAML_CPP_NOEXCEPT = default;
KeyNotFound::~KeyNotFound() YAML_CPP_NOEXCEPT = default;
InvalidNode::~InvalidNode() YAML_CPP_NOEXCEPT = default;
BadConversion::~BadConversion() YAML_CPP_NOEXCEPT = default;
BadDereference::~BadDereference() YAML_CPP_NOEXCEPT = default;
BadSubscript::~BadSubscript() YAML_CPP_NOEXCEPT = default;
BadPushback::~BadPushback() YAML_CPP_NOEXCEPT = default;
BadInsert::~BadInsert() YAML_CPP_NOEXCEPT = default;
EmitterException::~EmitterException() YAML_CPP_NOEXCEPT = default;
BadFile::~BadFile() YAML_CPP_NOEXCEPT = default;

[[noreturn]] void throw_bad_subscript(const YAML::Mark& mark)
{
	throw BadSubscript(mark, std::string{});
}

[[noreturn]] void throw_invalid_node(const std::string& key)
{
	throw InvalidNode(key);
}

[[noreturn]] void throw_bad_conversion(const YAML::Mark& mark)
{
	throw BadConversion(mark);
}

[[noreturn]] void throw_bad_insert()
{
	throw BadInsert();
}
}  // namespace YAML
