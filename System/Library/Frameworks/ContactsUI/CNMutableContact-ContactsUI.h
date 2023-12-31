//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNMutableContact.h>

@class NSArray, NSUUID;

@interface CNMutableContact (ContactsUI)
@property(nonatomic, readonly) NSUUID *id;
- (void)updateImageInfoWithType:(unsigned long long)arg1;	// IMP=0x00300000001f568e
- (void)removePhoto;	// IMP=0x00300000001f55e5
@property(copy, nonatomic) NSArray *birthdays;
- (_Bool)deleteContactFromStore:(id)arg1 request:(id)arg2;	// IMP=0x00300000001f50d0
- (_Bool)saveContactInStore:(id)arg1 groups:(id)arg2 container:(id)arg3 request:(id)arg4;	// IMP=0x00300000001f4b56
- (_Bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3 request:(id)arg4;	// IMP=0x00300000001f4a57
- (_Bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3;	// IMP=0x00300000001f4a42
- (_Bool)removeContactFromGroups:(id)arg1 inStore:(id)arg2 request:(id)arg3;	// IMP=0x00300000001f466b
- (_Bool)addContactToGroups:(id)arg1 inStore:(id)arg2 request:(id)arg3;	// IMP=0x00300000001f42a1
- (void)updateContactTypeWithPolicy:(id)arg1;	// IMP=0x00300000001f3ecc
- (id)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3;	// IMP=0x00300000001f3723
- (id)addAllPropertiesFromContact:(id)arg1;	// IMP=0x00300000001f35be
- (_Bool)hasNonPersistedData;	// IMP=0x00300000001f3575
@end

