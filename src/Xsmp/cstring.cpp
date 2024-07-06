// Copyright 2023 THALES ALENIA SPACE FRANCE. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <Xsmp/cstring.h>
#include <cstring>

namespace Xsmp {

cstring::cstring(const char *value, std::size_t size) { assign(value, size); }
cstring::cstring(const char *value) { assign(value, std::strlen(value)); }
cstring::cstring(std::string_view value) { assign(value.data(), value.size()); }
cstring::cstring(const cstring &other) {
  const auto *str = other.c_str();
  assign(str, strlen(str));
}
cstring &cstring::operator=(const cstring &other) {
  delete[] _value;
  const auto *str = other.c_str();
  assign(str, strlen(str));
  return *this;
}

cstring &cstring::operator=(const char *value) {
  delete[] _value;
  assign(value, strlen(value));
  return *this;
}
void cstring::assign(const char *value, std::size_t size) {
  _value = new char[size + 1];
  std::char_traits<char>::copy(_value, value, size);
  _value[size] = '\0';
}
cstring::~cstring() { delete[] _value; }

cstring::cstring(cstring &&other) noexcept : _value{other._value} {
  other._value = nullptr;
}
cstring &cstring::operator=(cstring &&other) noexcept {
  delete[] _value;
  _value = other._value;
  other._value = nullptr;
  return *this;
}
} // namespace Xsmp
