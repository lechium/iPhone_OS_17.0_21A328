//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCSQRCodeParser, BCSVisualCode, NSString, _SFLinkRedirectionResolver;
@protocol BCSAction, BCSActionCoordinatorDelegate, OS_dispatch_queue;

@interface BCSActionCoordinator : NSObject
{
    BCSVisualCode *_currentCode;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_parsingQueue;	// 16 = 0x10
    id <BCSAction> _parsedAction;	// 24 = 0x18
    BCSQRCodeParser *_qrCodeParser;	// 32 = 0x20
    CDUnknownBlockType _actionPickerItemBlock;	// 40 = 0x28
    CDUnknownBlockType _firstTimePromptBlock;	// 48 = 0x30
    _SFLinkRedirectionResolver *_linkResolver;	// 56 = 0x38
    _Bool _deviceIsBeingUnlocked;	// 64 = 0x40
    id <BCSActionCoordinatorDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000001077c
@property(readonly, nonatomic) _Bool deviceIsBeingUnlocked; // @synthesize deviceIsBeingUnlocked=_deviceIsBeingUnlocked;
@property(nonatomic) __weak id <BCSActionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)safariViewControllerDidFinish:(id)arg1;	// IMP=0x00100000000106f0
- (void)alertControllerDidCancel:(id)arg1;	// IMP=0x0010000000010690
- (void)alertControllerDidAllow:(id)arg1;	// IMP=0x001000000001065a
- (void)alertController:(id)arg1 didSelectActionItem:(id)arg2;	// IMP=0x0010000000010626
- (void)_launchBarcodeScannerAppFromLockscreenWithQueryOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001020d
- (void)_handleCalendarICSString:(id)arg1;	// IMP=0x001000000000fefc
- (_Bool)_handleActionPickerItemIfCalendarAction:(id)arg1;	// IMP=0x001000000000fe0e
- (_Bool)_handleActionPickerItemIfHomeAction:(id)arg1;	// IMP=0x001000000000fcd0
- (void)_handleContactInfo:(id)arg1;	// IMP=0x001000000000f94c
- (id)_tempVCardFileURL;	// IMP=0x001000000000f79d
- (_Bool)_handleActionPickerItemIfContactsAction:(id)arg1;	// IMP=0x001000000000f70e
- (void)requestDeviceUnlockIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f5a6
- (_Bool)_handleActionPickerItemIfSpecialHandlingRequired:(id)arg1;	// IMP=0x001000000000f52f
- (void)performActionPickerItem:(id)arg1;	// IMP=0x001000000000f4e5
- (_Bool)_performActionAndReturnIfLogged:(id)arg1;	// IMP=0x001000000000f0a3
- (void)performAction:(id)arg1;	// IMP=0x001000000000f056
- (void)logActivatedEventForAction:(id)arg1;	// IMP=0x001000000000ef9f
- (id)homeScreenAppIconWithIdentifier:(id)arg1;	// IMP=0x001000000000ed04
- (id)_calendarAppIcon;	// IMP=0x001000000000ea22
- (id)homeScreenAppIconForAction:(id)arg1;	// IMP=0x001000000000e88d
- (void)showItemsWithAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e652
- (void)_resolveRedirectionForURL:(id)arg1;	// IMP=0x001000000000e467
- (void)showFirstTimePromptIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e016
- (void)_updateParsedActionWithURL:(id)arg1 appLink:(id)arg2;	// IMP=0x001000000000df12
- (_Bool)_handleSpecialCodesForAction:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x001000000000de67
- (void)_parseVisualCode:(id)arg1;	// IMP=0x001000000000da07
- (id)actionForVisualCode:(id)arg1;	// IMP=0x001000000000d843
- (void)startParsingVisualCode:(id)arg1;	// IMP=0x001000000000d781
- (id)init;	// IMP=0x001000000000d6ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

