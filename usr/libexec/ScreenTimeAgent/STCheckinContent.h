//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, STDeviceID, STUserID;

@interface STCheckinContent : NSObject
{
    STUserID *_userID;	// 8 = 0x8
    STDeviceID *_deviceID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000115e7
+ (long long)contentType;	// IMP=0x00100000000113a1
- (void).cxx_destruct;	// IMP=0x0020000000011861
@property(readonly, copy) STDeviceID *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, copy) STUserID *userID; // @synthesize userID=_userID;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToCheckinContent:(id)arg1;	// IMP=0x001000000001169f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001163c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000115ef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000011539
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000011477
@property(readonly, copy) NSString *description;
- (id)initWithUserID:(id)arg1 deviceID:(id)arg2;	// IMP=0x00100000000112ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

