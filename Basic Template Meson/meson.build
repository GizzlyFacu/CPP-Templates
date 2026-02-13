project('ccache-template', 'cpp',
  default_options: [
    'cpp_std=c++17',
    'buildtype=release',
    'optimization=2',
    'debug=false',
    'b_ndebug=if-release',
    'warning_level=3'
  ]
)

# Configurar compiladores con ccache si está disponible
ccache = find_program('ccache', required: false)
if ccache.found()
  message('--------------------------------------------')
  message('CCache encontrado, acelerando compilación...')
  message('--------------------------------------------')
  # Meson automáticamente usará ccache si CC y CXX están configurados
else
  message('--------------------------------------------')
  message('No se ha encontrado CCache o el PATH de CCache no existe, se recomienda para reducir el tiempo de compilacion: https://ccache.dev/download.html')
  message('--------------------------------------------')

endif

executable('app',
  'src/main.cpp')