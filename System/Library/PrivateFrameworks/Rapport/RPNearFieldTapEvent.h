//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface RPNearFieldTapEvent : NSObject
{
    _Bool _isSameAccount;	// 8 = 0x8
    _Bool _shouldForceSingleBandAWDLMode;	// 9 = 0x9
    _Bool _isKnownIdentity;	// 10 = 0xa
    unsigned int _flags;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    NSString *_applicationLabel;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
    NSString *_deviceName;	// 40 = 0x28
    NSString *_deviceModel;	// 48 = 0x30
    NSString *_accountID;	// 56 = 0x38
    NSString *_contactID;	// 64 = 0x40
    NSData *_pkData;	// 72 = 0x48
    NSUUID *_bonjourListenerUUID;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000005478b
- (void).cxx_destruct;	// IMP=0x0000000000054faa
@property(readonly, nonatomic) _Bool isKnownIdentity; // @synthesize isKnownIdentity=_isKnownIdentity;
@property(readonly, nonatomic) _Bool shouldForceSingleBandAWDLMode; // @synthesize shouldForceSingleBandAWDLMode=_shouldForceSingleBandAWDLMode;
@property(readonly, nonatomic) NSUUID *bonjourListenerUUID; // @synthesize bonjourListenerUUID=_bonjourListenerUUID;
@property(readonly, nonatomic) NSData *pkData; // @synthesize pkData=_pkData;
@property(copy, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) _Bool isSameAccount; // @synthesize isSameAccount=_isSameAccount;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *applicationLabel; // @synthesize applicationLabel=_applicationLabel;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000000054d4e
- (id)description;	// IMP=0x0000000000054d37
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000054b8b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000054793
- (id)initWithIdentifier:(id)arg1 applicationLabel:(id)arg2 pkData:(id)arg3 bonjourListenerUUID:(id)arg4 isSameAccount:(_Bool)arg5 contactID:(id)arg6 forceSingleBandAWDLMode:(_Bool)arg7 knownIdentity:(_Bool)arg8;	// IMP=0x0000000000054624

@end
