//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface InAppBindingEligibilityRequest : NSObject
{
    NSString *_pinningID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000009bbc4
- (void).cxx_destruct;	// IMP=0x002000000009bcd3
@property(readonly, nonatomic) NSString *pinningID; // @synthesize pinningID=_pinningID;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000009bc3c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000009bbcc
- (id)initWithPinningID:(id)arg1;	// IMP=0x001000000009bb59

@end
