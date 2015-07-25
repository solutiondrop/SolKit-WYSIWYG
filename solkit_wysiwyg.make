; solkit-wysiwyg Makefile

api = 2
core = 7.x

; Features Override
; projects[features_override][version] = 2.x
; projects[features_override][subdir] = contrib

projects[features_override][type] = module
projects[features_override][download][type] = git
projects[features_override][download][revision] = c854057
projects[features_override][download][branch] = 7.x-3.x

; CKeditor
projects[ckeditor][version] = 1.16
projects[ckeditor][subdir] = contrib
