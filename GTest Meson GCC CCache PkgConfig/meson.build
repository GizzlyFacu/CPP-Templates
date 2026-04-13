project('pruebaGTest', 'cpp',
  default_options: [
    'cpp_std=c++17',
    'buildtype=release',
    'optimization=2',
    'debug=false',
    'b_ndebug=if-release',
    'warning_level=3'
  ]
)

gtest_dep = dependency('GTest', method: 'pkg-config')

executable('app',
  'src/main.cpp',
dependencies: gtest_dep)