project('meson-conan-project', 'cpp',
  default_options: [
    'cpp_std=c++17',
    'buildtype=release',
    'optimization=2',
    'debug=false',
    'b_ndebug=if-release',
    'warning_level=3'
  ]
)

# Dependencies
fmt_deps = dependency('fmt', method: 'pkg-config', required: true)

executable('app',
  'src/main.cpp',
  dependencies: fmt_deps)