//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface STTransportPayload : NSObject
{
    NSString *_UUID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000a953d
- (void).cxx_destruct;	// IMP=0x00200000000a9633
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (id);	// IMP=0x00100000000a95f9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000a95d6
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000a9545
- (id)init;	// IMP=0x00100000000a9529
- (id)initWithUUID:(id)arg1;	// IMP=0x00100000000a945e

@end

