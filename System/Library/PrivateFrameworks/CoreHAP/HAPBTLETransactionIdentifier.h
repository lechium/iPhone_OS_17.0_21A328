//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

__attribute__((visibility("hidden")))
@interface HAPBTLETransactionIdentifier : HMFObject
{
    unsigned char _unsignedCharValue;	// 8 = 0x8
}

+ (id)randomTransactionIdentifier;	// IMP=0x006000000005a39f
+ (unsigned char)generateRequestIdentifier;	// IMP=0x006000000005a349
@property(readonly, nonatomic) unsigned char unsignedCharValue; // @synthesize unsignedCharValue=_unsignedCharValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005a2b5
- (unsigned long long)hash;	// IMP=0x000000000005a29f
- (id)description;	// IMP=0x000000000005a28b
- (id)debugDescription;	// IMP=0x000000000005a274
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x000000000005a18b
- (id)shortDescription;	// IMP=0x000000000005a179
- (id)initWithUnsignedCharValue:(unsigned char)arg1;	// IMP=0x000000000005a137

@end

