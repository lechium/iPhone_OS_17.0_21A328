//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WBSCertificateWarningPageContext, _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;
@protocol WBSCertificateWarningPageHandler;

__attribute__((visibility("hidden")))
@interface SFWebProcessPlugInCertificateWarningController : NSObject
{
    _SFWebProcessPlugInPageController *_pageController;	// 8 = 0x8
    _WKRemoteObjectInterface *_certificateWarningPagePresenterInterface;	// 16 = 0x10
    id <WBSCertificateWarningPageHandler> _certificateWarningPageHandlerProxy;	// 24 = 0x18
    WBSCertificateWarningPageContext *_warningPageContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000126f99
@property(readonly, nonatomic) WBSCertificateWarningPageContext *warningPageContext; // @synthesize warningPageContext=_warningPageContext;
- (void)prepareCertificateWarningPage:(id)arg1;	// IMP=0x0000000000126f7e
- (void)visitWebsiteWithoutPrivateRelay;	// IMP=0x0000000000126f41
- (void)goBackSelected;	// IMP=0x0000000000126f04
- (void)openClockSettings;	// IMP=0x0000000000126ec7
- (void)showCertificateInformation;	// IMP=0x0000000000126e8a
- (void)visitInsecureWebsiteWithTemporaryBypass;	// IMP=0x0000000000126e4d
- (void)visitInsecureWebsite;	// IMP=0x0000000000126e10
- (id)_certificateWarningPageHandlerProxy;	// IMP=0x0000000000126d31
- (void)certificateWarningPageLoaded;	// IMP=0x0000000000126830
- (void)injectCertificateWarningBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2;	// IMP=0x00000000001266d2
- (void)_clearCertificateWarningPagePresenterInterface;	// IMP=0x000000000012662f
- (void)_setUpCertificateWarningPagePresenterInterface;	// IMP=0x000000000012656d
- (void)dealloc;	// IMP=0x000000000012652f
- (id)initWithPageController:(id)arg1;	// IMP=0x00000000001264a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

