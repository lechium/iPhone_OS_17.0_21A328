//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXSSInterDeviceCommunicator, NSArray, NSString, SCATModernMenuControllableDevicesConfirmationSheet;

@interface SCATModernMenuControllableDevicesSheet
{
    _Bool _isVisible;	// 8 = 0x8
    _Bool _isPushingConfirmationSheet;	// 9 = 0x9
    NSArray *_searchResults;	// 16 = 0x10
    AXSSInterDeviceCommunicator *_interDeviceCommunicator;	// 24 = 0x18
    SCATModernMenuControllableDevicesConfirmationSheet *_confirmationSheet;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000046386
@property(nonatomic) _Bool isPushingConfirmationSheet; // @synthesize isPushingConfirmationSheet=_isPushingConfirmationSheet;
@property(retain, nonatomic) SCATModernMenuControllableDevicesConfirmationSheet *confirmationSheet; // @synthesize confirmationSheet=_confirmationSheet;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(readonly, nonatomic) AXSSInterDeviceCommunicator *interDeviceCommunicator; // @synthesize interDeviceCommunicator=_interDeviceCommunicator;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (void)didExitMenuFromSheet:(id)arg1;	// IMP=0x0010000000046256
- (void)didConfirmForSheet:(id)arg1;	// IMP=0x001000000004616d
- (void)didUpdateSearchResults;	// IMP=0x0010000000045efb
- (_Bool)shouldKeepScannerAwake;	// IMP=0x0010000000045ef3
- (void)sheetWillDisappear:(_Bool)arg1;	// IMP=0x0010000000045e13
- (void)sheetWillAppear:(_Bool)arg1;	// IMP=0x0010000000045d27
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x0010000000045b53
- (id)makeMenuItemsIfNeeded;	// IMP=0x001000000004591d
- (void)dealloc;	// IMP=0x00100000000458d2
- (id)initWithMenu:(id)arg1 interDeviceCommunicator:(id)arg2;	// IMP=0x0010000000045843

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
