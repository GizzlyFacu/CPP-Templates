project('ccache-template', 'cpp',
  default_options: [
    'cpp_std=c++20',
    'buildtype=release',
    'optimization=2',
    'debug=false',
    'b_ndebug=if-release',
    'warning_level=3'
  ]
)

# SFML debe estar instalado con soporte pkg-config
sfml_deps = dependency('sfml-all-graphics', method: 'pkg-config')

executable('app',
  'src/main.cpp',
dependencies: sfml_deps)