//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore;

__attribute__((visibility("hidden")))
@interface CHPhoneBookIOSManager : NSObject
{
    CNContactStore *_contactStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001d583
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(_Bool)arg3;	// IMP=0x000000000001d0b6
- (id)getPersonsNameForContact:(id)arg1;	// IMP=0x000000000001cf3f
- (id)fetchCNContactsMatchingPredicate:(id)arg1 keysToKetch:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001cdbb
- (id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(_Bool)arg2;	// IMP=0x000000000001cb8f
- (id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(_Bool)arg3;	// IMP=0x000000000001cb7d
- (id)fetchCNContact:(id)arg1 countryCode:(id)arg2 isEmail:(_Bool)arg3;	// IMP=0x000000000001c728
- (id)initWithContactStore:(id)arg1;	// IMP=0x000000000001c6bd

@end
