//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString;

@interface SIPersonKnowledge : NSObject
{
    NSMutableSet *_emails;	// 8 = 0x8
    NSMutableSet *_phones;	// 16 = 0x10
    NSMutableArray *_names;	// 24 = 0x18
    NSString *_contactIdentifier;	// 32 = 0x20
    NSString *_rawName;	// 40 = 0x28
    NSString *_nameKey;	// 48 = 0x30
    NSString *_firstName;	// 56 = 0x38
    NSString *_lastName;	// 64 = 0x40
    NSArray *_emailAddresses;	// 72 = 0x48
    NSArray *_phoneNumbers;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000001950f
@property(readonly) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly) NSString *nameKey; // @synthesize nameKey=_nameKey;
@property(readonly) NSString *rawName; // @synthesize rawName=_rawName;
@property(readonly) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (id)normalizedPhoneNumbers;	// IMP=0x0010000000018dbb
@property(readonly) NSArray *alternateNames;
@property(readonly) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (id)initWithHandle:(id)arg1;	// IMP=0x00100000000180ab
- (id)initWithContactIdentifier:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 values:(id)arg4;	// IMP=0x00100000000175b4
- (id)initWithValues:(id)arg1 firstNames:(id)arg2 lastNames:(id)arg3;	// IMP=0x00100000000162a2

@end

