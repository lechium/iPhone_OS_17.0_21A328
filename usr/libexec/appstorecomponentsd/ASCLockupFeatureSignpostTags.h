//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet, NSString;

@interface ASCLockupFeatureSignpostTags : NSObject
{
    NSSet *_signpostTags;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000010530
- (void).cxx_destruct;	// IMP=0x00200000000108eb
@property(readonly, copy, nonatomic) NSSet *signpostTags; // @synthesize signpostTags=_signpostTags;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000010738
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000106b2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000010642
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000010538
- (MISSING_TYPE *)initWithSignpostTags: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000104bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
