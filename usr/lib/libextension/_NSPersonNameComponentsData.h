//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersonNameComponents, NSString;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsData : NSObject
{
    NSString *_givenName;	// 8 = 0x8
    NSString *_familyName;	// 16 = 0x10
    NSString *_middleName;	// 24 = 0x18
    NSString *_namePrefix;	// 32 = 0x20
    NSString *_nameSuffix;	// 40 = 0x28
    NSString *_nickname;	// 48 = 0x30
    NSPersonNameComponents *_phoneticRepresentation;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000662c2e
@property(copy) NSPersonNameComponents *phoneticRepresentation; // @synthesize phoneticRepresentation=_phoneticRepresentation;
@property(copy) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(copy) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(copy) NSString *middleName; // @synthesize middleName=_middleName;
@property(copy) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy) NSString *givenName; // @synthesize givenName=_givenName;
- (void)dealloc;	// IMP=0x0000000000662fef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000662ef2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000662c36
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000662b74
- (id)init;	// IMP=0x0000000000662b06

@end
