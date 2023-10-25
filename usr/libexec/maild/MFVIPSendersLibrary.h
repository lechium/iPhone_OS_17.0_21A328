//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAEmailAddressSet, MFMailMessageLibrary, NSString, VIPManager;
@protocol EMUserProfileProvider, OS_dispatch_queue;

@interface MFVIPSendersLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_addressBookQueue;	// 8 = 0x8
    void *_addressBook;	// 16 = 0x10
    int _addressBookResetCount;	// 24 = 0x18
    MFMailMessageLibrary *_library;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_pendingAddressQueue;	// 40 = 0x28
    EAEmailAddressSet *_pendingAdds;	// 48 = 0x30
    EAEmailAddressSet *_pendingRemoves;	// 56 = 0x38
    VIPManager *_vipManager;	// 64 = 0x40
}

+ (id)defaultMessageLibrary;	// IMP=0x00200000000c9c55
+ (id)defaultInstance;	// IMP=0x00100000000c9b68
+ (id)log;	// IMP=0x00100000000c9a8b
- (void).cxx_destruct;	// IMP=0x00200000000cd063
@property(readonly, nonatomic) VIPManager *vipManager; // @synthesize vipManager=_vipManager;
- (id)_messagesForSenders:(id)arg1 success:(_Bool *)arg2;	// IMP=0x00100000000ccf59
- (void)_vipsDidChange:(id)arg1;	// IMP=0x00100000000cc94b
- (_Bool)_setVIPSenderFlagForSenders:(id)arg1 retryFailedSenders:(_Bool)arg2;	// IMP=0x00100000000cc742
- (_Bool)_clearVIPSenderFlagForSenders:(id)arg1 retryFailedSenders:(_Bool)arg2;	// IMP=0x00100000000cc53c
- (void)_libraryDidFinishReconciliation:(id)arg1;	// IMP=0x00100000000cc41d
- (void)_performTasksAfterProtectedDataBecomesAvailable;	// IMP=0x00100000000cb954
@property(readonly, nonatomic) id <EMUserProfileProvider> userProfileProvider;
- (void)_removePendingVIPChanges;	// IMP=0x00100000000cb89d
- (void)_savePendingVIPChanges_nts;	// IMP=0x00100000000cb74a
- (id)_pendingVIPChangesPath;	// IMP=0x00100000000cb6e8
- (void)persistenceWillAddMessage:(id)arg1 fromExistingMessage:(_Bool)arg2;	// IMP=0x00100000000cb0d1
- (id)_newVIPFromVIP:(id)arg1 byAddingEmailAddresses:(id)arg2;	// IMP=0x00100000000caf6d
- (void)_checkForAddressBookChangesNeedingRevert:(_Bool)arg1;	// IMP=0x00100000000ca67c
- (void)checkForAddressBookChanges;	// IMP=0x00100000000ca534
- (void)_handleAddressBookNotification;	// IMP=0x00100000000ca3c9
- (void)dealloc;	// IMP=0x00100000000ca191
- (id)initWithLibrary:(id)arg1;	// IMP=0x00100000000c9c6e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
