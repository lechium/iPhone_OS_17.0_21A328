//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/JSExport-Protocol.h>

@class NSString;

@protocol SFCertificateWarningJSControllerMethods <JSExport>
- (NSString *)bypassFeatureIconPath;
- (NSString *)bypassFeatureButtonText;
- (NSString *)bypassFeatureWarningText;
- (NSString *)bypassFeatureTitleText;
- (void)bypassFeatureVisitWebsite;
- (void)goBackSelected;
- (void)openClockSettings;
- (void)showCertificateInformation;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)visitInsecureWebsite;
- (void)pageLoaded;
@end
