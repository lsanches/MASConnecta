Pod::Spec.new do |s|

  s.name         = "MASConnecta"
  s.version      = "0.0.1"
  s.summary      = "MASConnecta is the framework responsible for message and pub/sub features of the CA Mobile SDK."
  s.description  = <<-DESC
                  The MASConnecta framework comes with the following features:

                    Secure and reliable User to User messaging
                    MQTT client with built-in mutual SSL and OAuth support

                   DESC

  s.homepage     = "https://github.com/CAAPIM/iOS-MAS-Connecta"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Luis Sanches" => "luis.sanches@ca.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/CAAPIM/iOS-MAS-Connecta.git", :tag => "#{s.version}" }
  s.source_files  = "MASConnecta", "MASConnecta/**/*.{h,m,c,mm}"
  s.exclude_files = "Classes/Exclude"
  s.public_header_files = "MASConnecta/MASConnecta.h", "MASConnecta/Classes/MASMessage.h", "MASConnecta/Classes/categories/MASUser+Connecta.h"


  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  A list of resources included with the Pod. These are copied into the
  #  target bundle with a build phase script. Anything else will be cleaned.
  #  You can preserve files from being cleaned, please don't preserve
  #  non-essential files like tests, examples and documentation.
  #

  # s.resource  = "icon.png"
  # s.resources = "Resources/*.png"

  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"


  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Link your library with frameworks, or libraries. Libraries do not include
  #  the lib prefix of their name.
  #

  # s.framework  = "SomeFramework"
  # s.frameworks = "SomeFramework", "AnotherFramework"

  # s.library   = "iconv"
  # s.libraries = "iconv", "xml2"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  s.requires_arc = true

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"

end
