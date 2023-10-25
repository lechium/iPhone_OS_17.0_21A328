//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContactStore.h>

@class NSString;

@interface CNContactStore (TUSearchUtilities)
+ (id)tu_contactStore;	// IMP=0x001000000008f640
+ (_Bool)tu_isAuthorized;	// IMP=0x001000000008f626
+ (long long)tu_authorizationStatus;	// IMP=0x001000000008f60b
- (id)contactForDestinationId:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x001000000002e152
- (id)contactForDestinationId:(id)arg1;	// IMP=0x001000000002dfbd
- (id)contactForIdentifier:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x001000000002de89
- (id)contactForIdentifier:(id)arg1 keysToFetch:(id)arg2 usingCache:(id)arg3;	// IMP=0x001000000002ddbd
- (id)contactForIdentifier:(id)arg1;	// IMP=0x001000000002dcd8
- (id)tu_enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008f941
- (id)tu_contactsForHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x001000000008f92f
- (id)tu_contactsByContactHandleForContactHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x001000000008f71e
- (id)tu_contactsForContactHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x001000000008f70c
- (id)tu_contactsByHandleForHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000bd288
- (id)tu_contactsByRemoteConversationMemberForConversations:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001260e1
- (id)tu_contactsByConversationMemberForConversationMembers:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001259d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
