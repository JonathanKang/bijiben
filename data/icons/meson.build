apps_icons = [
  ['16x16', 'org.gnome.bijiben.png'],
  ['22x22', 'org.gnome.bijiben.png'],
  ['24x24', 'org.gnome.bijiben.png'],
  ['32x32', 'org.gnome.bijiben.png'],
  ['48x48', 'org.gnome.bijiben.png'],
  ['256x256', 'org.gnome.bijiben.png'],
  ['scalable', 'org.gnome.bijiben-symbolic.svg']
]

foreach icon: apps_icons
  install_data(
    join_paths('hicolor', icon[0], 'apps', icon[1]),
    install_dir: join_paths(bijiben_datadir, 'icons', 'hicolor', icon[0], 'apps')
  )
endforeach

actions_icons = [
  ['16x16', 'note.png'],
  ['24x24', 'note.png'],
  ['48x48', 'note.png'],
  ['scalable', 'link.svg']
]

foreach icon: actions_icons
  install_data(
    join_paths('hicolor', icon[0], 'actions', icon[1]),
    install_dir: join_paths(bijiben_pkgdatadir, 'icons', 'hicolor', icon[0], 'actions')
  )
endforeach
