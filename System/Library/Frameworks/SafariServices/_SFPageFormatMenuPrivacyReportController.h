//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCProfileConnection, NSString, UIViewController, _SFSettingsAlertItem;
@protocol _SFBrowserDocument, _SFPageFormatMenuItemControllerDelegate;

__attribute__((visibility("hidden")))
@interface _SFPageFormatMenuPrivacyReportController : NSObject
{
    MCProfileConnection *_profileConnection;	// 8 = 0x8
    UIViewController *_enableTrackerProtectionViewController;	// 16 = 0x10
    id <_SFPageFormatMenuItemControllerDelegate> _delegate;	// 24 = 0x18
    id <_SFBrowserDocument> _document;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000020e4c
@property(readonly, nonatomic) id <_SFBrowserDocument> document; // @synthesize document=_document;
@property(nonatomic) __weak id <_SFPageFormatMenuItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000020e09
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000020df7
- (void)_dismissPromptIfTrackerProtectionEnabled;	// IMP=0x0000000000020d9a
- (void)_initializeManagedProfileConnection;	// IMP=0x0000000000020d26
- (void)_presentPrivacyReport;	// IMP=0x0000000000020af5
- (_Bool)_presentPromptToTurnOnTrackingProtection;	// IMP=0x0000000000020909
@property(readonly, nonatomic) _SFSettingsAlertItem *alertItem;
- (void)dealloc;	// IMP=0x000000000002009e
- (id)initWithDocument:(id)arg1;	// IMP=0x0000000000020020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

