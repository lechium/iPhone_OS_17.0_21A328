//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface CSDThumperAccount : NSObject
{
    NSString *_accountID;	// 8 = 0x8
    NSString *_primaryDeviceID;	// 16 = 0x10
    NSString *_phoneNumberURI;	// 24 = 0x18
    long long _availableDeviceSlots;	// 32 = 0x20
    NSSet *_allowedSecondaryDeviceIDs;	// 40 = 0x28
}

+ (void)setPhoneNumberMCCToISOCountryCodeTransformBlock:(CDUnknownBlockType)arg1;	// IMP=0x00200000000abd42
+ (CDUnknownBlockType)phoneNumberMCCToISOCountryCodeTransformBlock;	// IMP=0x00100000000abd29
- (void).cxx_destruct;	// IMP=0x00200000000abddb
@property(copy, nonatomic) NSSet *allowedSecondaryDeviceIDs; // @synthesize allowedSecondaryDeviceIDs=_allowedSecondaryDeviceIDs;
@property(nonatomic) long long availableDeviceSlots; // @synthesize availableDeviceSlots=_availableDeviceSlots;
@property(copy, nonatomic) NSString *phoneNumberURI; // @synthesize phoneNumberURI=_phoneNumberURI;
@property(copy, nonatomic) NSString *primaryDeviceID; // @synthesize primaryDeviceID=_primaryDeviceID;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (_Bool)containsRegisteredDeviceID:(id)arg1;	// IMP=0x00100000000aba37
- (_Bool)isEqualToAccount:(id)arg1;	// IMP=0x00100000000ab840
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ab7d9
- (unsigned long long)hash;	// IMP=0x00100000000ab6d2
- (id)description;	// IMP=0x00100000000ab41f
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ab335
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ab24b
- (id)initWithAccountID:(id)arg1 primaryDeviceID:(id)arg2 phoneNumberURI:(id)arg3 availableDeviceSlots:(long long)arg4 allowedSecondaryDeviceIDs:(id)arg5;	// IMP=0x00100000000ab133
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000aacc1
- (id)init;	// IMP=0x00100000000aac96

@end

