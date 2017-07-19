Pod::Spec.new do |s|
s.name             = "A2ISurveyFramework"
s.version          = "0.0.3"
s.summary      = " A2I Survey iOS SDK"
s.description  = " A2I Survey iOS SDK with sample application "
s.homepage         = "http://www.a2i.co/"
s.license          = 'MIT'
s.author           = { "Manav" => "manav@a2ianalytics.com" }
s.source           = { :git => "https://github.com/a2ianalytics/a2i-survey-ios-sdk.git", :tag => '0.0.2' }
s.platform     = :ios, '8.0'
s.requires_arc = true
s.vendored_frameworks = 'A2ISurveyFramework.framework'
s.dependency "NJKWebViewProgress", "0.2.3"
s.dependency "CMDQueryStringSerialization"
end
